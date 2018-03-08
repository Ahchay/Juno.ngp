#include "ngpc.h"
#include "carthdr.h" // TODO: edit game name in carthdr.h
#include "library.h"

#include "bitmap.h"
#include "juno.h"

//Global variables. Very sucky, but quick and easy - I will replace these
//eventually...
BULLET bBullets[MAX_BULLETS];
SPACESHIP sPlayer;
ALIEN aAliens[MAX_ALIENS];
ALIENBULLET bAlienBullets[MAX_BULLETS];
u8 iSpawnCount;
u8 iNextAlien;
u8 iNextAlienBullet;
u8 iLevelNumber;
u8 iLevelAliens;
u8 DeadAliens;
u16 iBottomX;
u8 iNextBullet;
u16 MyBitmap[240][8];

#include "trig.c"
#include "bitmap.c"
#include "juno.c"

/*

Things to do...

1. Move long code into seperate functions for readability. Your main loop can then
become:
while(game)
{
	MoveAliens();
	MoveBullets();
	MovePlayer();
	PaintScreen();
}

2. Alien movement is pretty poor at the mo

3. Alien Leaders/Hostages

4. Sound!

*/


void main()
{
	// Define variables
	u8 iLoopX;
	u8 iLoopY;
	u8 iBulletLoop;
	u8 iAlienLoop;
	u8 iLoop;

	//u8 iTopY;
	//u8 iBottomY;

	u8 GameOver;

	u16 GridColour;

	//Setup NGPC System
	InitNGPC();
	SysSetSystemFont();

	//Seed the random number generator...
	//My version. Quick and dirty
	InitialiseQuickRandom;
	//Ivan's version, more chaotic, but slow...
	SeedRandom;

	//Load tiles
	InstallTileSet(ShootyTile, sizeof(ShootyTile)/2);

	//Setup Tile palettes

	//Yer basic background colour...
	SetBackgroundColour(0);
	GridColour=RGB(15,0,0);
	//Bitmap Palette
	SetPalette(SCR_1_PLANE, 0, 0, GridColour, RGB(0,15,0), RGB(15,15,15));
	//Title Palette
	SetPalette(SCR_1_PLANE, 1, 0, RGB(0,0,15), RGB(0,0,12), RGB(0,0,8));
	SetPalette(SCR_1_PLANE, 2, 0, RGB(15,0,15), RGB(8,0,0), RGB(12,0,0));

	SetPalette(SCR_2_PLANE, 0, 0, RGB(15,15,15), RGB(15,15,15), RGB(15,15,15));

	//Setup Sprite Palettes
	//Ship
	SetPalette(SPRITE_PLANE, 0, 0, RGB(15,0,0), RGB(10,2,0), RGB(15,15,15));
	//Alien
	SetPalette(SPRITE_PLANE, 1, 0, RGB(0,3,10), RGB(0,7,7), RGB(8,2,8));

	//Clear screen
   	ClearScreen(SCR_1_PLANE);
   	ClearScreen(SCR_2_PLANE);

	//Main (forever) loop
	while (1)
	{

		//Display a opening screen...
		AttractMode();

		//Create a bitmap
		CreateBitmap((u16 *)MyBitmap, 160,96);
		//Copy the bitmap tiles into tile memory and blatt them onto the screen.
		for (iLoopX=0;iLoopX<20;iLoopX++)
		{
			for (iLoopY=0;iLoopY<12;iLoopY++)
			{
				PutBitmapTile((u16 *)MyBitmap, (iLoopY*20)+iLoopX, BitmapTileBase+(iLoopY*20)+iLoopX);
				PutTile(SCR_1_PLANE, 0, iLoopX, iLoopY+4, BitmapTileBase+(iLoopY*20)+iLoopX);
			}
		}


		CreateGame();

		while (sPlayer.Lives>0)
		{

			CheckLevel();

			//Give the player some warning...
			//This is where I want to do the animation thang...
			PrintString(SCR_2_PLANE, 0, 15, 18, "     ");
			for (iLoop=0;iLoop<sPlayer.Lives;iLoop++)
				PutTile(SCR_2_PLANE, 0, 19-iLoop, 18, ShipTile);

			//Life/Level Loop
			while (sPlayer.Flags!=FlagDead && sPlayer.Lives>0 && DeadAliens<iLevelAliens)
			{
				//This does some very strange stuff...
				//Do colour pulsing stuff
				GridColour+=8;

				//SetBackgroundColour(RGB(MyColours.Background.Red,MyColours.Background.Green,MyColours.Background.Blue));

				//SetPalette(SCR_1_PLANE, 0, 0, GridColour, RGB(0,15,0), RGB(15,15,15));

				//Question: Is there a way that I can do this without having the overhead of
				//creating the bitmap for each iteration?
				CreateBitmap((u16 *)MyBitmap, 160, 96);

				DrawWorld();

				//Display any active bullets
				DrawLaser();

				//Calculate the "Top" position of the bitmap...
				//Do I need to include the velocity in this calculation?
				//iTopY=sPlayer.yPosition-96;
				//iBottomY=sPlayer.yPosition;

				//Animate Enemies

				DrawAliens();

				//Animate Player

				DrawPlayer();

				//Finally. Copy the bitmap onto the screen...
				DrawBitmap((u16 *)MyBitmap, 160, 96, 0, 4);

				//Just print the yPosition for debugging purposes
				PrintDecimal(SCR_2_PLANE, 0, 0, 18, sPlayer.Score, 8);

			}

		}
	}

}


