//Bitmap.c
//Bitmap functions for NGPC

//Bit of a rethink here. This is a vanilla bitmap function.
//It works, up to a point, but there are a ton of problems with it
//for real world use:
//1, You can only create a single bitmap.
//2. It's slow (probably not much I can do about that)
//3. Blt'ing bits is painful.
//So...
//Retool this to...

//Pass a memory address into the functions. This replaces the top/left
//co-ordinates.
//Everything works relative to this address, rather than fixed to BitmapTileBase
//Write a third function (or, more accurately, redo CopySingleTile()) to blt
//one bitmap into another (i.e. move from an array to the screen)

void CreateBitmap(u16 * BitmapAddress, u8 Width, u8 Height)
{
	u8 iLoopX;
	u8 iLoopY;
	u16 * MyAddress= BitmapAddress;
	u8 iFillLoop;

	//Create tiles for a bitmap operation thang
	//Derived from Ivan's Install Tile Set thang

   //I want to offset the *custom* tile ram to a new point
   //so that all characters start at *128* rather than 0?
   //What do I have to do...

	//Save the bitmap dimensions for later
	//CurrentBitmapWidth=Width;
	//CurrentBitmapHeight=Height;

	for (iLoopX=0;iLoopX<(Width/8);iLoopX++)
	{
		for (iLoopY=0;iLoopY<(Height/8);iLoopY++)
		{
			//Install a *new* tile in tile ram
			//I think this will work... I may have to take the declaration out of the loop though

			//Copies a blank tile into the bitmap
			//CopySingleTile(NullTile, BitmapAddress+(iLoopX+(iLoopY*(Width/8))));
			for (iFillLoop=0;iFillLoop<8;iFillLoop++)
			{
				MyAddress++[0]=0;
			}

			//Need to put this to the screen
			//Don't do this bit...
			//PutTile(SCR_1_PLANE, 0, (xPosition/8)+iLoopX, (yPosition/8)+iLoopY, BitmapTileBase+(iLoopX+(iLoopY*(Width/8))));
		}
	}
}

void SetPixel(u16 * BitmapAddress, u8 BitmapWidth, u16 xPosition, u16 yPosition, u16 Colour)
{
	//Set the selected pixel in the bitmap
	u16 CurrentTile;
	//u16 TileRow;
	u16 * TileRam = BitmapAddress;

	//Trouble is. This needs to know the width and height of the bitmap (well, probably not the height)

	//Fist of all, identify the tile that the specified bitmap lives inside...
	//This can be derived from xPosition and yPosition

	CurrentTile=(xPosition/8)+((yPosition/8)*(BitmapWidth/8));
	//For now, copy our "rubbish" tile into the tile space.
	//This is just to prove that I'm in the right general area...
	//CopySingleTile(RubbishTile, CustomTileBase+CurrentTile);

	//Having got the tile number. We now need to calculate the *new* tile
	//to put into here.

	//Basic method.
	//Get the existing tile into an unsigned short [8] Array
	//I don't need the whole tile. Just the row (yPosition % 8)
	//Grab a pointer to the relevant tile.
	//TileRam += (BitmapTileBase * 8);
	TileRam += (CurrentTile * 8)+(yPosition%8);
	//& Then... Grab the value held in this address...
	//TileRow = *TileRam;


	//Do clever stuff with AND's and OR's with the existing tile and the BitmapMask
	//array(s?)
	//Yer basic method;
	//AND MaskRow[xPosition%8] TileRow
	//OR ColourRow[xPosition%8] TileRow
	//Where MaskRow & ColourRow are 16bit jobbies showing a "holey" bitmap and a "coloured" bitmap
	//respectively. (Load the values in bitmap.h into neotile to see what I mean)

	//Updated to work directly on the tileram. Slightly quicker...
	TileRam[0]=TileRam[0] & BitmapMask[xPosition%8];
	TileRam[0]=TileRam[0] | BitmapNewMask[Colour][xPosition%8];

	//Put the tile back...
	//TileRam[0] = TileRow;

}

void QuickSetPixel(u16 * BitmapAddress, u16 BitmapWidth, u16 xPosition, u16 yPosition, u16 Colour)
{
	//To be used when we can guarantee that only a single pixel in a tile is affected.
	//Set the selected pixel in the bitmap
	u16 CurrentTile;
	//u16 TileRow;
	u16 * TileRam = BitmapAddress;

	//Trouble is. This needs to know the width and height of the bitmap (well, probably not the height)

	//Fist of all, identify the tile that the specified bitmap lives inside...
	//This can be derived from xPosition and yPosition

	CurrentTile=(xPosition/8)+((yPosition/8)*(BitmapWidth/8));
	//For now, copy our "rubbish" tile into the tile space.
	//This is just to prove that I'm in the right general area...
	//CopySingleTile(RubbishTile, CustomTileBase+CurrentTile);

	//Having got the tile number. We now need to calculate the *new* tile
	//to put into here.

	//Basic method.
	//Get the existing tile into an unsigned short [8] Array
	//I don't need the whole tile. Just the row (yPosition % 8)
	//Grab a pointer to the relevant tile.
	//TileRam += (BitmapTileBase * 8);
	TileRam += (CurrentTile * 8)+(yPosition%8);
	//& Then... Grab the value held in this address...
	//TileRow = *TileRam;


	//Do clever stuff with AND's and OR's with the existing tile and the BitmapMask
	//array(s?)
	//Yer basic method;
	//AND MaskRow[xPosition%8] TileRow
	//OR ColourRow[xPosition%8] TileRow
	//Where MaskRow & ColourRow are 16bit jobbies showing a "holey" bitmap and a "coloured" bitmap
	//respectively. (Load the values in bitmap.h into neotile to see what I mean)

	//Updated to work directly on the tileram. Slightly quicker...
	//TileRam[0]=TileRam[0] & BitmapMask[xPosition%8];
	TileRam[0]=TileRam[0] = BitmapNewMask[Colour][xPosition%8];

	//Put the tile back...
	//TileRam[0] = TileRow;

}

//Don't worry about GetPixel() yet...
/*
u8 GetPixel(u16 xPosition, u16 yPosition)
{
	//Get the selected pixel in the bitmap

	//Sort of based on SetPixel() Let's get that working first..
	u16 CurrentTile;
	u16 TileRow;
	u16 * TileRam = TILE_RAM;
	u8 iReturn;
	u8 iOffset;
	u16 lHighBit;
	u16 lLowBit;
	//Fist of all, identify the tile that the specified bitmap lives inside...
	//This can be derived from xPosition and yPosition

	CurrentTile=(xPosition/8)+((yPosition/8)*(CurrentBitmapWidth/8));

	//Basic method.
	//Get the existing tile into an unsigned short [8] Array
	//I don't need the whole tile. Just the row (yPosition % 8)
	TileRam += (BitmapTileBase * 8);
	TileRam += (CurrentTile * 8)+(yPosition%8);

	//Fetch the actual value of the tile row...
	TileRow = *TileRam;

	//Work out which *bits* are used for this pixel
	iOffset=(7-(xPosition%8));
	lLowBit = OffsetValues[iOffset];
	lHighBit = (lLowBit * 2);
	//Right then. Are any of these set?
	iReturn=0;
	if ((TileRow & (lHighBit+lLowBit))==(lHighBit+lLowBit))
		iReturn=3;
	else if ((TileRow & (lHighBit))==(lHighBit))
		iReturn=2;
	else if ((TileRow & (lLowBit))==(lLowBit))
		iReturn=1;

	//Send something back...
	return iReturn;
}
*/

//Currently fixed to copy from the const array BitmapTile
//i.e. Can only be used during CreateBitmap() which is a bit
//pants.
/*
void CopySingleTile(u8 TileGraphic, u16 * TileNumber)
{
	//A generic loop variable
	u16 i;
	//TileRam is a pointer to the beginning of tile memory
	u16 * TileRam = TILE_RAM;
	//theTiles is a pointer to the beginning of our Tiles array.
	//Copy a single tile into the specified tile number
	u16 * theTiles = (u16 *)BitmapTile;

	TileRam += (TileNumber * 8);
	theTiles += (TileGraphic * 8);

	for (i = 0; i < 8; i ++)
	{
		//Copy the tile data
		TileRam[i] = *theTiles++;
	}
}
*/

//Try it this way...
//Blts a single "bitmap" tile into TILE_RAM (one way?)
void PutBitmapTile(u16 * BitmapAddress, u16 InputTile, u16 OutputTile)
{
	//A generic loop variable
	u16 i;
	//TileRam is a pointer to the beginning of tile memory
	u16 * TileRam = TILE_RAM;
	//theTiles is a pointer to the beginning of our Tiles array.
	//Copy a single tile into the specified tile number
	u16 * theTiles = (u16 *)BitmapAddress;

	TileRam += (OutputTile * 8);
	theTiles += (InputTile * 8);

	for (i = 0; i < 8; i ++)
	{
		//Copy the tile data
		TileRam[i] = *theTiles++;
	}
}

void DrawBitmap(u16 * BitmapAddress, u8 BitmapWidth, u8 BitmapHeight, u8 xOrigin, u8 yOrigin)
{
	u8 iLoopX;
	u8 iLoopY;
	u8 TileWidth;
	u8 TileHeight;

	TileWidth=BitmapWidth/8;
	TileHeight=BitmapHeight/8;
	//Copy the bitmap to the screen.
	for (iLoopX=xOrigin;iLoopX<xOrigin+TileWidth;iLoopX++)
	{
		for (iLoopY=0;iLoopY<TileHeight;iLoopY++)
		{
			PutBitmapTile((u16 *)BitmapAddress, (iLoopY*TileWidth)+iLoopX, BitmapTileBase+(iLoopY*TileWidth)+iLoopX);
		}
	}
}

void DrawLine(u16 * BitmapAddress, u8 BitmapWidth, u8 x1, u8 y1, u8 x2, u8 y2, u8 Colour)
{
	//Stolen wholesale from gamedev...
	u8 xinc1;
	u8 xinc2;
	u8 yinc1;
	u8 yinc2;
	u8 den;
	u8 num;
	u8 numadd;
	u8 numpixels;
	u8 curpixel;
	u8 deltax;
	u8 deltay;
	u8 x;
	u8 y;

	//There appears to be an absence of an abs() function.
	if (x2>x1)
		deltax = x2 - x1;        // The difference between the x's
	else
		deltax = x1 - x2;
	if (y2>y1)
		deltay = y2 - y1;        // The difference between the y's
	else
		deltay = y1 - y2;

	x = x1;                       // Start x off at the first pixel
	y = y1;                       // Start y off at the first pixel

	if (x2 >= x1)                 // The x-values are increasing
	{
		xinc1 = 1;
		xinc2 = 1;
	}
	else                          // The x-values are decreasing
	{
		xinc1 = -1;
		xinc2 = -1;
	}

	if (y2 >= y1)                 // The y-values are increasing
	{
		yinc1 = 1;
		yinc2 = 1;
	}
	else                          // The y-values are decreasing
	{
		yinc1 = -1;
		yinc2 = -1;
	}

	if (deltax >= deltay)         // There is at least one x-value for every y-value
	{
		xinc1 = 0;                  // Don't change the x when numerator >= denominator
		yinc2 = 0;                  // Don't change the y for every iteration
		den = deltax;
		num = deltax / 2;
		numadd = deltay;
		numpixels = deltax;         // There are more x-values than y-values
	}
	else                          // There is at least one y-value for every x-value
	{
		xinc2 = 0;                  // Don't change the x for every iteration
		yinc1 = 0;                  // Don't change the y when numerator >= denominator
		den = deltay;
		num = deltay / 2;
		numadd = deltax;
		numpixels = deltay;         // There are more y-values than x-values
	}

	for (curpixel = 0; curpixel <= numpixels; curpixel++)
	{
		SetPixel((u16 *)BitmapAddress, BitmapWidth, x, y, Colour);             // Draw the current pixel
		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= den)             // Check if numerator >= denominator
		{
			num -= den;               // Calculate the new numerator value
			x += xinc1;               // Change the x as appropriate
			y += yinc1;               // Change the y as appropriate
		}
		x += xinc2;                 // Change the x as appropriate
		y += yinc2;                 // Change the y as appropriate
	}
}

void DrawDottedLine(u16 * BitmapAddress, u8 BitmapWidth, u8 x1, u8 y1, u8 x2, u8 y2, u8 Colour, u8 Pattern)
{
	//Stolen wholesale from gamedev...
	u8 xinc1;
	u8 xinc2;
	u8 yinc1;
	u8 yinc2;
	u8 den;
	u8 num;
	u8 numadd;
	u8 numpixels;
	u8 curpixel;
	u8 deltax;
	u8 deltay;
	u8 x;
	u8 y;
	u8 PatternCount;

	//There appears to be an absence of an abs() function.
	if (x2>x1)
		deltax = x2 - x1;        // The difference between the x's
	else
		deltax = x1 - x2;
	if (y2>y1)
		deltay = y2 - y1;        // The difference between the y's
	else
		deltay = y1 - y2;

	x = x1;                       // Start x off at the first pixel
	y = y1;                       // Start y off at the first pixel

	if (x2 >= x1)                 // The x-values are increasing
	{
		xinc1 = 1;
		xinc2 = 1;
	}
	else                          // The x-values are decreasing
	{
		xinc1 = -1;
		xinc2 = -1;
	}

	if (y2 >= y1)                 // The y-values are increasing
	{
		yinc1 = 1;
		yinc2 = 1;
	}
	else                          // The y-values are decreasing
	{
		yinc1 = -1;
		yinc2 = -1;
	}

	if (deltax >= deltay)         // There is at least one x-value for every y-value
	{
		xinc1 = 0;                  // Don't change the x when numerator >= denominator
		yinc2 = 0;                  // Don't change the y for every iteration
		den = deltax;
		num = deltax / 2;
		numadd = deltay;
		numpixels = deltax;         // There are more x-values than y-values
	}
	else                          // There is at least one y-value for every x-value
	{
		xinc2 = 0;                  // Don't change the x for every iteration
		yinc1 = 0;                  // Don't change the y when numerator >= denominator
		den = deltay;
		num = deltay / 2;
		numadd = deltax;
		numpixels = deltay;         // There are more y-values than x-values
	}

	PatternCount=0;
	for (curpixel = 0; curpixel <= numpixels; curpixel++)
	{
		if (PatternCount % Pattern == 0)
			SetPixel((u16 *)BitmapAddress, BitmapWidth, x, y, Colour);             // Draw the current pixel
		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= den)             // Check if numerator >= denominator
		{
			num -= den;               // Calculate the new numerator value
			x += xinc1;               // Change the x as appropriate
			y += yinc1;               // Change the y as appropriate
		}
		x += xinc2;                 // Change the x as appropriate
		y += yinc2;                 // Change the y as appropriate
		PatternCount++;
	}
}

//Attempt to tune the above *generic* code for the specific case of a mainly
//vertical line
//Not bad you know. about 200% speed increase....
void DrawBackgroundLine(u16 * BitmapAddress, u8 BitmapWidth, u16 x1, u16 x2, u8 Colour, u8 Pattern)
{
	//Stolen wholesale from gamedev...
	u8 xinc1;
	u8 num;
	u8 numadd;
	u8 curpixel;
	u8 deltax;
	u8 x;
	u8 y;
	u8 PatternCount;

	//Lot's of fixed values.
	num = 48;


	//There appears to be an absence of an abs() function.
	if (x2>x1)
		deltax = x2 - x1;        // The difference between the x's
	else
		deltax = x1 - x2;

	//Fixed for *this* type of line...
	//Where this type is defined as a mainly vertical line...
	numadd = deltax;

	x = x1;                       // Start x off at the first pixel
	y = 0;                       // Start y off at the first pixel

	if (x2 >= x1)                 // The x-values are increasing
		xinc1 = 1;
	else                          // The x-values are decreasing
		xinc1 = -1;


	//DeltaX will always be less than deltaY?
	//if (deltax >= deltay)         // There is at least one x-value for every y-value
	//{
	//	xinc1 = 0;                  // Don't change the x when numerator >= denominator
	//	yinc2 = 0;                  // Don't change the y for every iteration
	//	den = deltax;
	//	num = deltax / 2;
	//	numadd = deltay;
	//	numpixels = deltax;         // There are more x-values than y-values
	//}
	//else                          // There is at least one y-value for every x-value
	//{
		//xinc2 = 0;                  // Don't change the x for every iteration
		//yinc1 = 0;                  // Don't change the y when numerator >= denominator
	//}

	PatternCount=0;
	for (curpixel = 0; curpixel <= 96; curpixel++)
	{
		if (PatternCount & Pattern)
			//This routine can use QuickSet
			//remember. we're *only* drawing vertical lines
			QuickSetPixel((u16 *)BitmapAddress, BitmapWidth, x, y, Colour);             // Draw the current pixel
		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= 96)             // Check if numerator >= denominator
		{
			num -= 96;               // Calculate the new numerator value
			x += xinc1;               // Change the x as appropriate
			//Redundant
			//y += yinc1;               // Change the y as appropriate
		}
		//Redundant
		//x += xinc2;                 // Change the x as appropriate
		y ++;                 // Change the y as appropriate
		PatternCount++;
	}
}

//Attempt to change this so that it displays all lines...
//Not bad you know. about 200% speed increase....
void DrawPartialBackgroundLine(u16 * BitmapAddress, u16 Offset, u16 BitmapWidth, u16 x1, u16 x2, u16 VerticalPosition)
{
	//Stolen wholesale from gamedev...
	u16 xinc1;
	u16 num;
	u16 numadd;
	u8 curpixel;
	u16 deltax;
	u16 x;
	u8 y;
	u8 Colour;
	u8 ColourCount;

	//Basically. We want to draw a pixel every <n> positions. Offset by the xposition...
	//Lot's of fixed values.
	num = 48;


	//There appears to be an absence of an abs() function.
	if (x2>x1)
		deltax = x2 - x1;        // The difference between the x's
	else
		deltax = x1 - x2;

	//Fixed for *this* type of line...
	//Where this type is defined as a mainly vertical line...
	numadd = deltax;

	x = x1;                       // Start x off at the first pixel
	y = 0;                       // Start y off at the first pixel

	if (x2 >= x1)                 // The x-values are increasing
		xinc1 = 1;
	else                          // The x-values are decreasing
		xinc1 = -1;

	ColourCount=VerticalPosition%40;
	Colour=1;
	for (curpixel = 0; curpixel <= 96; curpixel++)
	{
		if (ColourCount%10 == 0)
		{
			if (ColourCount%40 == 0)
				Colour=2;
			else
				Colour=1;
			//This routine can use QuickSet
			//remember. we're *only* drawing vertical lines
			if (x>=Offset && x<=(BitmapWidth+Offset))
				QuickSetPixel((u16 *)BitmapAddress, BitmapWidth, x-Offset, y, Colour);             // Draw the current pixel
		}
		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= 96)             // Check if numerator >= denominator
		{
			num -= 96;               // Calculate the new numerator value
			x += xinc1;               // Change the x as appropriate
		}
		y ++;                 // Change the y as appropriate
		ColourCount++;
	}
}

//More refinements. Try and code out the loops which do not set a pixel
void DrawPartialBackgroundLine2(u16 * BitmapAddress, u16 Offset, u16 BitmapWidth, u16 x1, u16 x2, u16 VerticalPosition)
{
	u16 xinc1;
	u16 num;
	u16 numadd;
	u8 curpixel;
	u16 deltax;
	u16 x;
	u8 y;
	u8 Colour;
	u8 ColourCount;

	//Basically. We want to draw a pixel every <n> positions. Offset by the xposition...
	//Lot's of fixed values.
	num = 6;


	//There appears to be an absence of an abs() function.
	if (x2>x1)
		deltax = x2 - x1;        // The difference between the x's
	else
		deltax = x1 - x2;

	//Fixed for *this* type of line...
	//Where this type is defined as a mainly vertical line...
	numadd = deltax;

	x = x1;                       // Start x off at the first pixel
	y = 0;                       // Start y off at the first pixel

	if (x2 >= x1)                 // The x-values are increasing
		xinc1 = 1;
	else                          // The x-values are decreasing
		xinc1 = -1;

	//??
	ColourCount=VerticalPosition%40;
	Colour=1;
	y=VerticalPosition%8;
	for (curpixel = 0; curpixel <= 12; curpixel++)
	{
		if (ColourCount%40 == 0)
			Colour=2;
		else
			Colour=1;
		//This routine can use QuickSet
		//remember. we're *only* drawing vertical lines
		if (x>=Offset && x<=(BitmapWidth+Offset))
			QuickSetPixel((u16 *)BitmapAddress, BitmapWidth, x-Offset, y, Colour);             // Draw the current pixel

		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= 12)             // Check if numerator >= denominator
		{
			num -= 12;               // Calculate the new numerator value
			//This needs to be a bit more wossname...
			//In other words. How many x increments have occurred between the two y positions we're calculating...
			//Not sure whether there's anything I can realistically do in this situation.
			x += xinc1;               // Change the x as appropriate
		}
		y +=8;                 // Change the y as appropriate
		ColourCount++;
	}
}

void DrawLineVertical(u16 * BitmapAddress, u8 BitmapWidth, u16 x, u16 y1, u16 y2, u16 Colour)
{
	u16 y;
	s8 yinc;

	if (y1>y2)
		yinc=-1;
	else
		yinc=1;

	for (y=y1;y!=y2;y+=yinc)
	{
		SetPixel((u16 *)BitmapAddress, BitmapWidth, x, y, Colour);
	}
}