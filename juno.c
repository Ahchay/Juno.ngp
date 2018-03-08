// Exported by NeoTile

volatile unsigned char RandomNumberCounter;

const unsigned short ShootyTile[53][8] =
{
	{0x0180, 0x0180, 0x05a0, 0x342c, 0x342c, 0x75ae, 0x4182, 0x75ae}, // Players Ship
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0690, 0x1574, 0x5f7d, 0x5d55, 0x7d55, 0x55f5, 0x15d4, 0x0690}, // World
	{0x0140, 0x0140, 0x1554, 0x1144, 0x0140, 0x0550, 0x0410, 0x0410}  // Man
};

const unsigned short Animation[1][8] =
{
	{0x0180, 0x0180, 0x05a0, 0x342c, 0x342c, 0x75ae, 0x4182, 0x75ae}
};

const unsigned short AlienAnimation[7][8]=
{
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // Null Alien
	{0x0000, 0x0000, 0x0000, 0x0680, 0x16a0, 0x0cc0, 0x0000, 0x0000}, // LittleAlien
	{0x0180, 0x05a0, 0x13c8, 0x55aa, 0x05a0, 0x33cc, 0xc3c3, 0x0000}, // AlienFrame1
	{0x0000, 0x0000, 0x0340, 0x0590, 0x0950, 0x01c0, 0x0000, 0x0000}, // LittleWorld
	{0x0690, 0x1574, 0x5f7d, 0x5d55, 0x7d55, 0x55f5, 0x15d4, 0x0690}, // World
	{0x0000, 0x0000, 0x0140, 0x0550, 0x0410, 0x0140, 0x0000, 0x0000},  // LittleLeader
	{0x0140, 0x0140, 0x1554, 0x1144, 0x0140, 0x0550, 0x0410, 0x0410} // Leader
};
//	{0x0180, 0x05a0, 0x17e8, 0x55aa, 0x05a0, 0x33cc, 0x03c0, 0x0000} // AlienFrame2

const unsigned short World[1][8]=
{
	{0x0690, 0x1574, 0x5f7d, 0x5d55, 0x7d55, 0x55f5, 0x15d4, 0x0690}, // World
};

const unsigned short Hostage[1][8]=
{
	{0x0140, 0x0140, 0x1554, 0x1144, 0x0140, 0x0550, 0x0410, 0x0410}  // Man
};

const unsigned short Logo[240][8] =
{
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000}, // Logo
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001},
	{0x0000, 0x0401, 0x1401, 0x1605, 0x5695, 0x5a95, 0x5a95, 0x5a95},
	{0x0000, 0x5000, 0x5000, 0x5000, 0x6000, 0x6000, 0x6000, 0x6800},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0415, 0x1455, 0x1455, 0x1457, 0x1457, 0x1457, 0x5455},
	{0x0000, 0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0x0000, 0x5555, 0x5555, 0xfff5, 0xffe5, 0xffe9, 0xffe9, 0xffea},
	{0x0000, 0x0155, 0x4155, 0x417f, 0x517f, 0x515f, 0x555f, 0x555f},
	{0x0000, 0x5555, 0x5555, 0xfffe, 0xfffe, 0xfffe, 0xfffa, 0xfffa},
	{0x0000, 0x5540, 0x5550, 0x9554, 0x9555, 0xa555, 0xa955, 0xabfd},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x5000, 0x5000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1500, 0x1580, 0x15a0},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0005, 0x0015, 0x0055, 0x0055, 0x0155, 0x0155, 0x0555, 0x0555},
	{0x5a55, 0x5a55, 0x5955, 0x5955, 0x5555, 0x5555, 0x6555, 0x6555},
	{0x5800, 0x5800, 0x5800, 0x5a00, 0x6a00, 0x6a00, 0x6a00, 0xaa00},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x5455, 0x5455, 0x5455, 0x5455, 0x5455, 0x5455, 0x5455, 0x5455},
	{0x7fff, 0x5fff, 0x57ff, 0x57ff, 0x57ff, 0x57ff, 0x57ff, 0x57ff},
	{0xffaa, 0xffaa, 0xffaa, 0xffaa, 0xfeaa, 0xfeaa, 0xfeaa, 0xfeaa},
	{0x5657, 0x9657, 0x9695, 0xa595, 0xa595, 0xa5a5, 0xa965, 0xa969},
	{0xfffa, 0xffea, 0xffaa, 0xffaa, 0x7eaa, 0x7eaa, 0x5eab, 0x5eab},
	{0xabfe, 0xaffa, 0xbfea, 0xbfea, 0xffaa, 0xffaa, 0xffaa, 0xfeaa},
	{0x5400, 0x9500, 0xa500, 0xa940, 0xa950, 0xaa54, 0xaa55, 0xaa55},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0005, 0x0005, 0x0003, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x56a8, 0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0x3fff, 0x3fff},
	{0x0000, 0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0x0555, 0x5556, 0x555e, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xa555, 0xa555, 0xad55, 0xabff, 0xabff, 0xabff, 0xeaff, 0xeaff},
	{0xaa80, 0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0x0000, 0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0x5455, 0x5455, 0x5c55, 0xfcff, 0xfcff, 0xfcff, 0xfcff, 0xfcff},
	{0x57ff, 0x5400, 0x5400, 0xfc00, 0xfc00, 0xfc00, 0xfc00, 0xfc00},
	{0xfeaa, 0x02aa, 0x02aa, 0x02aa, 0x00aa, 0x00aa, 0x00aa, 0x00aa},
	{0xa969, 0xa95a, 0xa956, 0xabfe, 0xabfa, 0xabfa, 0xabfa, 0xabea},
	{0x56af, 0x9555, 0x9555, 0xafff, 0xbfff, 0xbfff, 0xffff, 0xffff},
	{0xfeaa, 0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xaa95, 0x5555, 0x5555, 0xffff, 0xfffc, 0xfff0, 0xffc0, 0xff00},
	{0x4000, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0fff, 0x03ff, 0x00ff, 0x003f, 0x000f, 0x0003, 0x0003, 0x0000},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xfabf, 0xfabf, 0xfaaf, 0xfa8f, 0xfe83, 0xfe83, 0xff03, 0xff00},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xfcff, 0xfcff, 0xfcff, 0xfcff, 0xfcff, 0xfcff, 0xfcff, 0xfcff},
	{0xfc00, 0xfc00, 0xfc00, 0xfc00, 0xf000, 0xf000, 0xf000, 0xf000},
	{0x002a, 0x002a, 0x002a, 0x002a, 0x000a, 0x000a, 0x000a, 0x000a},
	{0xafeb, 0xafab, 0xbfaf, 0xbeaf, 0xbebf, 0xfebf, 0xfeff, 0xfeff},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfffc, 0xfff0},
	{0xff00, 0xfc00, 0xf000, 0xc000, 0xc000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0005, 0x0015},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0x3fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x5405, 0x5805, 0x5a15},
	{0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x5000, 0x5000, 0x5000},
	{0xfc00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0155, 0x0555, 0x0555},
	{0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0xfcff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x4000},
	{0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0055, 0x0055, 0x0155},
	{0x000a, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0xf2ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x5554, 0x5555, 0x5555},
	{0xfff0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0015, 0x4095, 0x50a5},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x5555, 0x5555, 0x5555},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x5400, 0x5500},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001},
	{0x0015, 0x0155, 0x0156, 0x0556, 0x155a, 0x1555, 0x5555, 0x5555},
	{0x7fff, 0xaaff, 0xaabf, 0xaaab, 0xaaaa, 0x5555, 0x5555, 0x5555},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5555, 0x5555, 0x5555},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x557f, 0x55af, 0x56ab},
	{0xfa95, 0xfe55, 0xfd55, 0xfd55, 0xfd55, 0xf555, 0xf555, 0xf555},
	{0x5800, 0x6a00, 0x6a80, 0x6aa0, 0xaaa0, 0x6aa8, 0x5aaa, 0x5aa9},
	{0x0557, 0x155a, 0x155a, 0x156a, 0x555a, 0x5555, 0x5555, 0x5555},
	{0xffff, 0xffff, 0xbfff, 0xbfff, 0xafff, 0x5555, 0x5555, 0x5555},
	{0xfd55, 0xff55, 0xff55, 0xff55, 0xff55, 0x5555, 0x5555, 0x5555},
	{0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x5555, 0x5555, 0x5555},
	{0x0155, 0x0155, 0x0555, 0x0555, 0x0555, 0x0655, 0x4655, 0x46b5},
	{0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x5fff, 0x5555, 0x5555, 0x5555},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x5555, 0x5555, 0x5555},
	{0xfff5, 0xffe9, 0xffa9, 0xfeaa, 0xfeab, 0x5555, 0x5555, 0x5555},
	{0x56af, 0x56ff, 0x55ff, 0x55ff, 0xffff, 0x55ff, 0x55ff, 0x557f},
	{0xffff, 0xfffe, 0xfffa, 0xffaa, 0xffaa, 0xfeaa, 0xfaaa, 0xeaaa},
	{0xe557, 0xaa55, 0xaa55, 0xaa55, 0xaa55, 0xaa95, 0xaaa5, 0xaaa5},
	{0xffff, 0xfffc, 0x7ff0, 0x7f00, 0x5f00, 0x5500, 0x5540, 0x5555},
	{0xfc00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0005, 0x0015, 0x0055, 0x0055, 0x0155, 0x0555, 0x1555, 0x1555},
	{0x5555, 0x5556, 0x555a, 0x556a, 0x556a, 0x55aa, 0x56aa, 0x56aa},
	{0x7fff, 0xabff, 0xaabf, 0xaaab, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xbfff, 0xafff, 0xaaff, 0xaabf},
	{0xfeaa, 0xfffa, 0xfffe, 0xffff, 0xffff, 0xfffd, 0xfffd, 0xfff5},
	{0xf555, 0x9555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555},
	{0x56a9, 0x5aa5, 0x5aa5, 0x5a95, 0x5a95, 0x5a95, 0x5a95, 0x6a55},
	{0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555, 0x5556},
	{0x5fff, 0x6fff, 0x6bff, 0xabff, 0xaaff, 0xaaff, 0xaabf, 0xaabf},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xfd55, 0xff55, 0xff15, 0xff15, 0xff15, 0xff15, 0xff15, 0xff15},
	{0x46bf, 0x5aff, 0x5aff, 0x5ad5, 0x5b55, 0x5755, 0x5755, 0x5755},
	{0xffff, 0xffff, 0xffff, 0xffff, 0x7fff, 0x7fff, 0x5fff, 0x5555},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xfffe, 0xfffa, 0xffea, 0x5555},
	{0xfd55, 0xe955, 0xea55, 0xaa55, 0xaa55, 0xaa55, 0xaa55, 0x5555},
	{0x555f, 0x5556, 0x5556, 0x5555, 0x5555, 0x5555, 0x5555, 0x5555},
	{0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0x6aaa, 0x6aaa, 0x6aaa},
	{0xaaa9, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa},
	{0x5555, 0x5555, 0x5555, 0x9555, 0xa555, 0xa555, 0xa955, 0xaa55},
	{0x5000, 0x5400, 0x5500, 0x5500, 0x5540, 0x5540, 0x5550, 0x5554},
	{0x5555, 0x1555, 0x03ff, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x5aaa, 0x6aaa, 0xfaaa, 0xffea, 0x3ffe, 0x03ff, 0x000f, 0x0000},
	{0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xeaaa, 0xffaa, 0x3ffe},
	{0xaaab, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa},
	{0xfff5, 0xaff5, 0xaaff, 0xaabf, 0xaaab, 0xaaaa, 0xaaaa, 0xaaaa},
	{0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xbfff, 0xafff, 0xabff},
	{0x6a55, 0xaa95, 0xeabf, 0xfaab, 0xfaaa, 0xffaa, 0xffea, 0xfffa},
	{0x5556, 0x555a, 0xfffe, 0xffff, 0xffff, 0xbfff, 0xafff, 0xafff},
	{0xaaaf, 0xaaab, 0xaaab, 0xaaaa, 0xeaaa, 0xfaaa, 0xfaaa, 0xfaaa},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xbfff, 0xbfff, 0xafff},
	{0xff15, 0xff15, 0xff3f, 0xff3f, 0xff3f, 0xff3f, 0xff3f, 0xff3f},
	{0x5755, 0x57d5, 0xfbff, 0xfbff, 0xfbff, 0xfbff, 0xffff, 0xffff},
	{0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0x5555, 0x5555, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfffa},
	{0x5555, 0x5556, 0xffea, 0xffaa, 0xfeaa, 0xeaaa, 0xaaaa, 0xaaaa},
	{0x6aaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa},
	{0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaab, 0xaabf, 0xaaff, 0xbfff},
	{0xaa55, 0xaa95, 0xaaff, 0xafff, 0xffff, 0xffc0, 0xfc00, 0xc000},
	{0x5554, 0x5550, 0xff00, 0xf000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x03ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xeaaa, 0x3ffa, 0x03ff, 0x000f, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xaaaa, 0xaaaa, 0xeaaa, 0xfaaa, 0x3fea, 0x03fe, 0x000f, 0x0000},
	{0xaabf, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xaaaa, 0xfaaa, 0x3faa},
	{0xffff, 0xbfff, 0xa03f, 0xa00f, 0xa000, 0x8000, 0x8000, 0x8000},
	{0xabff, 0xfaaf, 0xfaab, 0xffaa, 0xffea, 0x0ffa, 0x0ffe, 0x00ff},
	{0xfeaa, 0xffaa, 0xffea, 0xfffa, 0xbffe, 0xafff, 0xafff, 0xe3ff},
	{0xafff, 0xa800, 0xa000, 0xa000, 0xa000, 0xa000, 0xa000, 0xe000},
	{0xff3f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f},
	{0xefff, 0xefff, 0xffff, 0xffff, 0xbfff, 0xbfff, 0xbfff, 0x3fff},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xfff0, 0xffc0, 0xfc00, 0xfc00},
	{0xffea, 0xfeaa, 0xcaaa, 0x0aaa, 0x02aa, 0x02aa, 0x02aa, 0x02af},
	{0xaaaa, 0xaaaa, 0xaaaa, 0xaaab, 0xaaff, 0xabff, 0xbff0, 0xff00},
	{0xaaab, 0xabff, 0xbffc, 0xffc0, 0xfc00, 0x0000, 0x0000, 0x0000},
	{0xfff0, 0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x03fe, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x000f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xf03f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x003c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x3fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xf000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x02ff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xc000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
	{0xaaaa, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xaaaa, 0xffff, 0xfd55, 0xfd7d, 0xfd7d, 0xfd7d, 0xfd7d, 0xfd55},
	{0xaaaa, 0xffff, 0xffff, 0x7fff, 0x5575, 0x57d7, 0x57d7, 0xd7d5},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0x7f57, 0x5d75, 0x5d7f, 0x5d55},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0xf57f, 0xd75f, 0xd7ff, 0xd55f},
	{0xaaaa, 0xffff, 0xf5fd, 0xf5fd, 0xf5f5, 0xfff5, 0xfff5, 0xfff5},
	{0xaaaa, 0xffff, 0x5f5f, 0x5f5f, 0xd75f, 0xd7ff, 0xd7ff, 0x57ff},
	{0xaaaa, 0xffff, 0xf5ff, 0xf5ff, 0xf557, 0xf5f5, 0xf5f5, 0xf5f5},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0xd7d5, 0xd7d7, 0xd7d7, 0xd7d7},
	{0xaaaa, 0xffff, 0xdfdf, 0x5f5f, 0x5557, 0x5f5f, 0x5f5f, 0x5f5f},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0xd57d, 0x5f5d, 0x5f5d, 0x5f5d},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0x55ff, 0x7d7f, 0x7d7f, 0x7d7f},
	{0xaaaa, 0xffff, 0xf7ff, 0xd7ff, 0x55f5, 0xd7d7, 0xd7d7, 0xd7d7},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0x5ffd, 0xd7fd, 0xd7fd, 0xd7fd},
	{0xaaaa, 0xffff, 0xfff5, 0xfff5, 0x55f5, 0x7d75, 0x7d75, 0x7d75},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0xf57d, 0xd75d, 0xff5d, 0xf55f},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0x75ff, 0x75ff, 0x75ff, 0x77ff},
	{0xaaaa, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff},
	{0xaaaa, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe},
	{0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xaaaa},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xfd7f, 0xfd7f, 0xfd7f, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xd7d7, 0xd7d7, 0xd7f5, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xfff5, 0x5d75, 0x7f57, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xff5f, 0xd75f, 0xf57f, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xfff5, 0xffd7, 0xffd7, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xd7ff, 0xf5ff, 0xf5ff, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xf5f5, 0xf5f5, 0xf557, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xd7d7, 0xd7d7, 0xf557, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0x5f5f, 0x5f5f, 0xd7d7, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0x5f5d, 0x5f5d, 0xd57d, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0x7d7f, 0x7d7f, 0x7d7f, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xd7d7, 0xd7d7, 0xf5f5, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xd7fd, 0xd7fd, 0x5ffd, 0xfffd, 0xfffd, 0xfffd, 0xffff, 0xaaaa},
	{0x7d75, 0x7d75, 0x55f5, 0x7fff, 0x7fff, 0x7fff, 0xffff, 0xaaaa},
	{0xd75f, 0xd75f, 0xf55f, 0xffff, 0xffff, 0xfffd, 0xffff, 0xaaaa},
	{0x77ff, 0x57ff, 0x57ff, 0xdfff, 0x5fff, 0x7fff, 0xffff, 0xaaaa},
	{0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xaaaa},
	{0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xaaaa}
};

const JUNOLEVEL LevelData[MAX_LEVELS]=
{
	{{0,0,0},{0,3,10},{0,7,7},{8,2,8},0},
	{{0,0,4},{3,10,0},{7,7,0},{8,2,2},1},
	{{0,4,0},{10,3,0},{7,0,7},{2,2,2},2}
};

// copies a new tile graphic into tile memory.
void CopySpriteTile(u16 * SpriteTiles, u16 TileNumber, u8 AnimNumber)
{
	u8 i;
	u16 * TileRam = TILE_RAM;
	//Our input parameter. NOT a global constant
	u16 * theSpriteAnim = (u16 *) SpriteTiles;

	TileRam += (TileNumber * 8);
	theSpriteAnim += (AnimNumber * 8);

	//We're only copying a single tile!
	for (i = 0; i < 8; i ++)
	{
		TileRam[i] = *theSpriteAnim++;
	}
}

u8 SpriteCollision(u8 xPosition1, u8 yPosition1, u8 xPosition2, u8 yPosition2)
{
	u8 xCollision;
	u8 yCollision;
	u8 RetVal;
	RetVal=0;
	if (xPosition1>=xPosition2)
	  xCollision = ((xPosition1-xPosition2)<=8);
	else
	  xCollision = ((xPosition2-xPosition1)<=8);

	if (yPosition1>=yPosition2)
	  yCollision = ((yPosition1-yPosition2)<=8);
	else
	  yCollision = ((yPosition2-yPosition1)<=8);

	if (xCollision && yCollision)
	{
	  //Collision!
	  RetVal=1;
	}
	return RetVal;
}

void DrawExplosion(u16 * BitmapAddress, u8 BitmapWidth, u8 BitmapHeight, u8 xPosition, u8 yPosition, u8 Size)
{
	if (yPosition >= Size)
	{
		if (xPosition >= Size)
			SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition - Size, yPosition - Size, 3);
		SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition, yPosition - Size, 3);
		if (xPosition + Size <= BitmapWidth)
			SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition + Size, yPosition - Size, 3);
	}
	if (xPosition >= Size)
		SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition - Size, yPosition, 3);
	if (xPosition + Size <= BitmapWidth)
		SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition + Size, yPosition, 3);
	if (yPosition + Size <= BitmapHeight)
	{
		if (xPosition >= Size)
			SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition - Size, yPosition + Size, 3);
		SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition, yPosition + Size, 3);
		if (xPosition + Size <= BitmapWidth)
			SetPixel((u16 *)BitmapAddress, BitmapWidth, xPosition + Size, yPosition + Size, 3);
	}
}

void InitialiseQuickRandom()
{
	RandomNumberCounter=0;
}

unsigned char QuickRandom()
{
	//Um. RandomNumberCounter is an unsigned char...
	//which means that this routine will never get beyond the first
	//255 elements of the random number array?
	//Oh well. Should be good enough for my uses anyway...
	return QuickRandomNumbers[RandomNumberCounter++];
}

void AttractMode()
{
	u16 iLoopX;
	u16 iLoopY;
	u8 iSpriteLoop;

	//Install the logo tileset
	InstallTileSet(Logo, sizeof(Logo)/2);
	//Clear the screen

	SetBackgroundColour(0);
   	ClearScreen(SCR_1_PLANE);
   	ClearScreen(SCR_2_PLANE);

   	//Also, clear the sprites....
   	for (iSpriteLoop=0;iSpriteLoop<64;iSpriteLoop++)
	{
		SetSprite(iSpriteLoop, 32, 0, 0, 0, 0, 24);
	}

	//Paint the logo.
   	for (iLoopX=0;iLoopX<=19;iLoopX++)
   	{
   		for (iLoopY=0;iLoopY<=9;iLoopY++)
   		{
   			PutTile(SCR_1_PLANE, 1, iLoopX, iLoopY+4, CustomTileBase+(iLoopY*20)+iLoopX);
		}
	}

	//Wait for a bit
	Sleep(30);

	//Display an informative message

   	for (iLoopX=0;iLoopX<=19;iLoopX++)
   	{
   		for (iLoopY=10;iLoopY<=11;iLoopY++)
   		{
   			PutTile(SCR_1_PLANE, 2, iLoopX, iLoopY+4, CustomTileBase+(iLoopY*20)+iLoopX);
		}
	}

	//Wait a while longer
	Sleep(30);

	//Wait for a button press
	while (!(JOYPAD & J_A));

	//Reinstall the game tile set
	InstallTileSet(ShootyTile, sizeof(ShootyTile)/2);

	//Clear the screen
   	ClearScreen(SCR_1_PLANE);
   	ClearScreen(SCR_2_PLANE);

}

void CreateGame()
{
	u8 iAlienLoop;
	u8 iBulletLoop;

	sPlayer.xPosition=80;
	sPlayer.yPosition=0;
	sPlayer.Velocity=0;
	//Setup Player sprite
	SetSprite(ShipSprite, ShipTile, 0, sPlayer.xPosition, sPlayer.yPosition+32, 0, 24);

	//Setup Enemy sprites
	iSpawnCount=224;
	iNextAlien=0;
	iNextAlienBullet=0;
	iLevelNumber=MAX_LEVELS;
	for (iAlienLoop=0;iAlienLoop<MAX_ALIENS;iAlienLoop++)
	{
		aAliens[iAlienLoop].Flags=FlagInactive;
		aAliens[iAlienLoop].DeathFrame=8;
		aAliens[iAlienLoop].yPosition=0;
		aAliens[iAlienLoop].xPosition=0;
		aAliens[iAlienLoop].Direction=0;
		aAliens[iAlienLoop].Velocity=0;
		aAliens[iAlienLoop].Drift=0;

		//Try this

		aAliens[iAlienLoop].yOffset=aAliens[iAlienLoop].yPosition - sPlayer.yPosition + 112 + (sPlayer.Velocity*2);
		aAliens[iAlienLoop].Direction=DirDown;

		aAliens[iAlienLoop].Animation=0;
		//yPosition must be generated relative to the players position.
		SetSprite(AlienSprite+iAlienLoop, AlienTile+iAlienLoop, 0, aAliens[iAlienLoop].xPosition, aAliens[iAlienLoop].yPosition+32, 1, 24);
	}

	//Setup bullets
	for (iBulletLoop=0;iBulletLoop<MAX_BULLETS;iBulletLoop++)
	{
		bBullets[iBulletLoop].Flags=FlagDead;
		bAlienBullets[iBulletLoop].Flags=FlagDead;
	}

	//Wait for start of game

	//Game loop
	sPlayer.Lives=5;
	sPlayer.Score=0;
	sPlayer.Flags=0;
	iLevelAliens=8;
}

void CheckLevel()
{
	u8 iAlienLoop;
	u8 iBulletLoop;

	if (sPlayer.Flags==FlagDead)
	{
		sPlayer.Lives--;
	}
	else
	{
		//Must be a new level...
		iLevelNumber++;
		if (iLevelNumber>=MAX_LEVELS)
		{
			iLevelNumber=0;
			iLevelAliens+=8;
			if (iLevelAliens>MAX_ALIENS)
				iLevelAliens=MAX_ALIENS;
		}
		//Set Palette and Background colour
		SetBackgroundColour(RGB(LevelData[iLevelNumber].BackgroundColour.Red,LevelData[iLevelNumber].BackgroundColour.Green,LevelData[iLevelNumber].BackgroundColour.Blue));
		//Alien
		SetPalette(SPRITE_PLANE, 1, 0, RGB(LevelData[iLevelNumber].AlienPrimaryColour.Red,LevelData[iLevelNumber].AlienPrimaryColour.Green,LevelData[iLevelNumber].AlienPrimaryColour.Blue), RGB(LevelData[iLevelNumber].AlienSecondaryColour.Red,LevelData[iLevelNumber].AlienSecondaryColour.Green,LevelData[iLevelNumber].AlienSecondaryColour.Blue), RGB(LevelData[iLevelNumber].AlienTertiaryColour.Red,LevelData[iLevelNumber].AlienTertiaryColour.Green,LevelData[iLevelNumber].AlienTertiaryColour.Blue));
		//Setup Enemy sprites
		iSpawnCount=224;
		iNextAlien=0;
		iNextAlienBullet=0;
		for (iAlienLoop=0;iAlienLoop<MAX_ALIENS;iAlienLoop++)
		{
			aAliens[iAlienLoop].Flags=FlagInactive;
			aAliens[iAlienLoop].DeathFrame=8;
			aAliens[iAlienLoop].Direction=DirDown;
			if (LevelData[iLevelNumber].AlienAttackPattern==0)
			{
				aAliens[iAlienLoop].yPosition=GetRandom(255);
				aAliens[iAlienLoop].xPosition=GetRandom(151);
				if (GetRandom(256)>=128)
					aAliens[iAlienLoop].Direction+=DirLeft;
				else
					aAliens[iAlienLoop].Direction+=DirRight;
			}
			else if (LevelData[iLevelNumber].AlienAttackPattern==1)
			{
				aAliens[iAlienLoop].yPosition=iAlienLoop<<3;
				aAliens[iAlienLoop].xPosition=AlienFormation[aAliens[iAlienLoop].yPosition];
				if (iAlienLoop % 2 == 0)
					aAliens[iAlienLoop].Direction+=DirLeft;
				else
					aAliens[iAlienLoop].Direction+=DirRight;
			}
			else if (LevelData[iLevelNumber].AlienAttackPattern==2)
			{
				aAliens[iAlienLoop].yPosition=GetRandom(255);
				aAliens[iAlienLoop].xPosition=GetRandom(151);
				if (GetRandom(256)>=128)
					aAliens[iAlienLoop].Direction+=DirLeft;
				else
					aAliens[iAlienLoop].Direction+=DirRight;
				aAliens[iAlienLoop].Drift=0;
				aAliens[iAlienLoop].Velocity=0;
			}
			else
			{
				aAliens[iAlienLoop].yPosition=GetRandom(255);
				aAliens[iAlienLoop].xPosition=GetRandom(151);
				aAliens[iAlienLoop].Direction=GetRandom(360);
				aAliens[iAlienLoop].Velocity=GetRandom(4);
			}

			//Try this

			aAliens[iAlienLoop].yOffset=aAliens[iAlienLoop].yPosition - sPlayer.yPosition + 112 + (sPlayer.Velocity*2);;

			aAliens[iAlienLoop].Animation=0;
			//yPosition must be generated relative to the players position.
			SetSprite(AlienSprite+iAlienLoop, AlienTile+iAlienLoop, 0, aAliens[iAlienLoop].xPosition, aAliens[iAlienLoop].yPosition+32, 1, 24);
		}
		//Setup the "leader" alien
		aAliens[iLevelAliens-1].yPosition=GetRandom(255);
		aAliens[iLevelAliens-1].xPosition=GetRandom(151);
		aAliens[iLevelAliens-1].Direction=DirDown;
		aAliens[iLevelAliens-1].Flags+=FlagWorld;

		//Setup bullets
		for (iBulletLoop=0;iBulletLoop<MAX_BULLETS;iBulletLoop++)
		{
			//Player bullets
			bBullets[iBulletLoop].Flags=FlagDead;
			//Alien bullets
			bAlienBullets[iBulletLoop].Flags=FlagDead;
		}

		DeadAliens=0;
	}
	//Setup start of level/next life variables
	sPlayer.xPosition=80;
	sPlayer.yPosition=256;
	sPlayer.Velocity=0;
	sPlayer.Drift=0;
	sPlayer.Flags=0;
	sPlayer.SpawnFrame=16;
	SetPalette(SPRITE_PLANE, 0, 0, RGB(15,15,15), RGB(0,0,0), RGB(0,0,0));
	iNextBullet=0;

}

void DrawWorld()
{
	u16 iTopX;
	u16 iBottomX;

	//Draws lines in a "juno first" forced perspective kind of stylee,
	//which is quite effective...
	for (iTopX=160;iTopX<=328;iTopX+=20)
	{
		//Calculate the xPosition at the bottom of the line
		iBottomX=((iTopX-160)*2)+(160-sPlayer.xPosition);
		//And then draw it. DrawPartialBackgroundline() is optimised to draw mostly
		//vertical dotted lines, based on an offset of yPosition. Gives a nice
		//scrolly effect. It also assumes that <=1 pixel per eight pixel (horizontal) block)
		//For normal lines use DrawLine() or DrawDottedLine()
		DrawPartialBackgroundLine((u16 *)MyBitmap, 160, 160, iTopX, iBottomX, sPlayer.yPosition);
	}

	//And draw a horizon too.
	DrawDottedLine((u16 *)MyBitmap, 160, 0, 0, 160, 0, 1, 10);
}

void DrawLaser()
{
	u8 iBulletLoop;
	u8 iAlienLoop;

	//This is going to have to change if I want decaying missile trails...
	for (iBulletLoop=0;iBulletLoop<MAX_BULLETS;iBulletLoop++)
	{
		//Process player shots
		if (!(bBullets[iBulletLoop].Flags & FlagDead))
		{
			if (bBullets[iBulletLoop].yHeadPosition<0)
				bBullets[iBulletLoop].Flags=FlagDead;
			else
			{
				//I want my bullets to be *lines* rather than *points*
				//Defender style decay would also be rather cool...
				//This version of the DrawLine() function draws absolutely
				//vertical lines (i.e. no x-variation at all.
				DrawLineVertical((u16 *)MyBitmap, 160, bBullets[iBulletLoop].xHeadPosition, bBullets[iBulletLoop].yHeadPosition, bBullets[iBulletLoop].yHeadPosition+bBullets[iBulletLoop].Length, 3);

				//Have we hit a beastie?
				//How to tell...

				for (iAlienLoop=0;iAlienLoop<iLevelAliens;iAlienLoop++)
				{
					//Has *this* bullet hit *this* alien?

					//Question: Are the alien position and the bullet position drawn
					//to the same scale...
					//Answer  Of course they're bloody not. That would be too simple.

					//But we can use the aAliens[].yOffset value!
					if (!(aAliens[iAlienLoop].Flags & FlagDead || aAliens[iAlienLoop].Flags & FlagInactive))
						{
						if (AlienPosition[aAliens[iAlienLoop].yOffset]>=bBullets[iBulletLoop].yHeadPosition+32 && AlienPosition[aAliens[iAlienLoop].yOffset]<=bBullets[iBulletLoop].yHeadPosition+bBullets[iBulletLoop].Length+32 && bBullets[iBulletLoop].xHeadPosition>=aAliens[iAlienLoop].xPosition  && bBullets[iBulletLoop].xHeadPosition<=aAliens[iAlienLoop].xPosition+8)
						{
							//Well done player one!
							//Kill the beastie...
							if (aAliens[iAlienLoop].Flags & FlagLeader)
							{
								//You can't shoot the leader... You've got to run over him
							}
							else if (aAliens[iAlienLoop].Flags & FlagWorld)
							{
								aAliens[iAlienLoop].Flags-=FlagWorld;
								aAliens[iAlienLoop].Flags+=FlagLeader;
								aAliens[iAlienLoop].Direction=DirUp;
								sPlayer.Score+=200;
								//Start the "warp" screen
								//Set Palette and Background colour
								SetBackgroundColour(RGB(12,4,2));
							}
							else
							{
								aAliens[iAlienLoop].Flags=FlagDead;
								sPlayer.Score+=50;
							}
							//Kill the bullet
							bBullets[iBulletLoop].Flags=FlagDead;


							//Now I need to worry about a "dead alien animation"
							//They have to blow up!!!
							aAliens[iAlienLoop].DeathFrame=0;
						}
					}
				}

				//The bullet position needs to be calculated relative to it's
				//origin within the game plane. i.e. if it's fired from y-coord
				//76, then it "grows" for eight turns before it starts decaying.
				//After 16 turns (or whatever) it will fizzle out.
				//The draw position will therefore be:
				//Origin+Age
				//This then needs to be plotted relative to the current players
				//y-position within the game plane.
				//Gives us a few headaches when the game plane "wraps" at zero though...

				//At the moment, I'm cheating and drawing the bullets relative to the current ship
				//velocity. Which looks okay, but will suck when I'm also moving aliens around
				//within the game plan`e...
				//Actually, it doesn't look too bad at all...
				bBullets[iBulletLoop].yHeadPosition-=(16+sPlayer.Velocity);
				bBullets[iBulletLoop].Age++;
				if (bBullets[iBulletLoop].Length<24)
					bBullets[iBulletLoop].Length+=8;
			}
		}
		//Draw Alien Bullets
		//I really don't like this. The bullets move badly and the collision
		//detection is really horrible.
		if (!(bAlienBullets[iBulletLoop].Flags & FlagDead))
		{
			//Has the bullet left the playfield?

			//Assuming not.
			//Calculate the bullet position
			//Doesn't seem very good...
			if (bAlienBullets[iBulletLoop].Direction & DirLeft)
			{
				if (bAlienBullets[iBulletLoop].xPosition>=2)
					bAlienBullets[iBulletLoop].xPosition-=2;
				else
					bAlienBullets[iBulletLoop].Flags=FlagDead;
			}
			else
			{
				if (bAlienBullets[iBulletLoop].xPosition<=160)
					bAlienBullets[iBulletLoop].xPosition+=2;
				else
					bAlienBullets[iBulletLoop].Flags=FlagDead;
			}
			if (bAlienBullets[iBulletLoop].Direction & DirUp)
			{
				if (bAlienBullets[iBulletLoop].yPosition>=sPlayer.Velocity)
					bAlienBullets[iBulletLoop].yPosition+=sPlayer.Velocity;
				else
					bAlienBullets[iBulletLoop].Flags=FlagDead;
			}
			else
			{
				if (bAlienBullets[iBulletLoop].yPosition<=(96-sPlayer.Velocity))
					bAlienBullets[iBulletLoop].yPosition-=sPlayer.Velocity;
				else
					bAlienBullets[iBulletLoop].Flags=FlagDead;
			}
			//and draw it.
			if (!(bAlienBullets[iBulletLoop].Flags & FlagDead))
			{
				DrawExplosion((u16 *)MyBitmap, 160, 96, bAlienBullets[iBulletLoop].xPosition, bAlienBullets[iBulletLoop].yPosition, 1);
				//And finally...
				//Collision detection.
				if (sPlayer.SpawnFrame==0)
				{
					if (bAlienBullets[iBulletLoop].xPosition>=sPlayer.xPosition && bAlienBullets[iBulletLoop].xPosition<=(sPlayer.xPosition+8))
					{
						//Bullet is in the x plane...
						//Now then... How to test for collision in the y axis?
						//112 + (sPlayer.Velocity*2) - 32 + 4
						if (bAlienBullets[iBulletLoop].yPosition>=(112 + (sPlayer.Velocity*2) - 32 + 4 - 8) && bAlienBullets[iBulletLoop].yPosition<=(112 + (sPlayer.Velocity*2) - 32 + 4))
						{
							bAlienBullets[iBulletLoop].Flags=FlagDead;
							sPlayer.Flags=FlagDead;
						}
					}
				}
			}
		}
	}
}

void DrawAliens()
{
	u8 iAlienLoop;
	//Next!
	//What I really want to do is to warp the aliens in eight at a time
	//Then I can try and do the whole "planet" thang...
	//Check to see whether to spawn the next alien...
	if (iSpawnCount>=224)
	{
		if (iNextAlien<iLevelAliens)
		{
			//Create new alien
			aAliens[iNextAlien].Flags-=FlagInactive;
			iNextAlien++;
		}

	}
	iSpawnCount+=4;
	for (iAlienLoop=0;iAlienLoop<MAX_ALIENS;iAlienLoop++)
	{
		//Don't just do something. Sit around instead..
		//Completely crap, but at least they're moving...
		if (aAliens[iAlienLoop].Flags & FlagDead)
		{
			aAliens[iAlienLoop].Animation = 0;
			//Draw the explosion!
			//This is a bitmap operation...
			if (aAliens[iAlienLoop].DeathFrame<=16)
			{
				//One pixel at each extreme of the deathframe...
				//This can be a function...
				DrawExplosion((u16 *)MyBitmap, 160, 96, aAliens[iAlienLoop].xPosition + 4, AlienPosition[aAliens[iAlienLoop].yOffset] - 32 + 4, aAliens[iAlienLoop].DeathFrame);
				aAliens[iAlienLoop].DeathFrame++;
				if (aAliens[iAlienLoop].DeathFrame==16)
				{
					DeadAliens++;
				}
			}
		}
		else if (aAliens[iAlienLoop].Flags & FlagInactive)
		{
			//Ignore this alien... They're not in play yet...
		}
		else if (aAliens[iAlienLoop].DeathFrame>0)
		{
			//Alien is warping in...
			aAliens[iAlienLoop].Animation = 0;
			if (AlienPosition[aAliens[iAlienLoop].yOffset]>32)
				DrawExplosion((u16 *)MyBitmap, 160, 96, aAliens[iAlienLoop].xPosition + 4, AlienPosition[aAliens[iAlienLoop].yOffset] - 32 + 4, aAliens[iAlienLoop].DeathFrame);
			aAliens[iAlienLoop].DeathFrame--;

		}
		else
		{
			//Okey Dokey...
			//Alien is active! Do something with it...
			//First, check to see whether it is a leader or world alien
			if (aAliens[iAlienLoop].Flags & FlagWorld)
			{
				//World alien
				aAliens[iAlienLoop].yPosition++;
			}
			else if (aAliens[iAlienLoop].Flags & FlagLeader)
			{
				//Leader alien
				aAliens[iAlienLoop].yPosition--;
			}
			else if (LevelData[iLevelNumber].AlienAttackPattern==3)
			{
				aAliens[iAlienLoop].xPosition=aAliens[iAlienLoop].xPosition + ( (Sin(aAliens[iAlienLoop].Direction)/128) * aAliens[iAlienLoop].Velocity );
				aAliens[iAlienLoop].yPosition=aAliens[iAlienLoop].yPosition + ( (Cos(aAliens[iAlienLoop].Direction)/128) * aAliens[iAlienLoop].Velocity );
				if (QuickRandom()<48)
				{
					aAliens[iAlienLoop].Direction=GetRandom(360);
					aAliens[iAlienLoop].Velocity=GetRandom(4);
				}

			}
			else if (LevelData[iLevelNumber].AlienAttackPattern==2)
			{
				//Homing behaviour...
				//Well, it works, but since the aliens just sort of line up in front of the player
				//to be shot - it ain't exactly difficult. Still, worth having for a touch of
				//variety...
				if (aAliens[iAlienLoop].Direction & DirUp)
				{
					//Move alien Up the screen
					if (aAliens[iAlienLoop].Velocity > - 3)
					{
						aAliens[iAlienLoop].Velocity--;
					}
					if (QuickRandom()<16)
					{
						aAliens[iAlienLoop].Direction -= DirUp;
						aAliens[iAlienLoop].Direction += DirDown;
					}
				}
				else
				{
					//Move the alien down the screen#
					if (aAliens[iAlienLoop].Velocity < 6)
					{
						aAliens[iAlienLoop].Velocity++;
					}
					if (QuickRandom()<16)
					{
						aAliens[iAlienLoop].Direction -= DirDown;
						aAliens[iAlienLoop].Direction += DirUp;
					}
				}
				aAliens[iAlienLoop].yPosition+=aAliens[iAlienLoop].Velocity;

				if (aAliens[iAlienLoop].Direction & DirLeft)
				{
					//Move towards the player
					if ((aAliens[iAlienLoop].xPosition<sPlayer.xPosition) && aAliens[iAlienLoop].Drift<=3)
					{
						aAliens[iAlienLoop].Drift++;
					}
					else if ((aAliens[iAlienLoop].xPosition>sPlayer.xPosition) && aAliens[iAlienLoop].Drift>=-3)
					{
						aAliens[iAlienLoop].Drift--;
					}
					else if (aAliens[iAlienLoop].xPosition==sPlayer.xPosition)
					{
						aAliens[iAlienLoop].Direction=DirRight;
					}
					if (QuickRandom()<32)
					{
						aAliens[iAlienLoop].Direction-=DirLeft;
						aAliens[iAlienLoop].Direction+=DirRight;
					}
				}
				else
				{
					//Move away from the player
					if ((aAliens[iAlienLoop].xPosition>sPlayer.xPosition) && aAliens[iAlienLoop].Drift<=3)
					{
						aAliens[iAlienLoop].Drift++;
					}
					else if ((aAliens[iAlienLoop].xPosition<sPlayer.xPosition) && aAliens[iAlienLoop].Drift>=-3)
					{
						aAliens[iAlienLoop].Drift--;
					}
					if (QuickRandom()<32)
					{
						aAliens[iAlienLoop].Direction-=DirRight;
						aAliens[iAlienLoop].Direction+=DirLeft;
					}
				}
				if (aAliens[iAlienLoop].Drift>0)
				{
					if (aAliens[iAlienLoop].xPosition+aAliens[iAlienLoop].Drift>152)
					{
						//Hmmm... Bit extreme - not necessarily a bad thing...
						aAliens[iAlienLoop].Drift=(152-aAliens[iAlienLoop].xPosition)*-1;
						//Start moving towards the player
						aAliens[iAlienLoop].Direction=DirLeft;
					}
				}
				else
				{
					if ((aAliens[iAlienLoop].Drift*-1)>aAliens[iAlienLoop].xPosition)
					{
						aAliens[iAlienLoop].Drift=aAliens[iAlienLoop].xPosition;
						aAliens[iAlienLoop].Direction=DirLeft;
					}
				}
				aAliens[iAlienLoop].xPosition+=aAliens[iAlienLoop].Drift;

			}
			else
			{
				if (aAliens[iAlienLoop].Direction & DirUp)
				{
					aAliens[iAlienLoop].yPosition--;
				}
				else if (aAliens[iAlienLoop].Direction & DirDown)
				{
					aAliens[iAlienLoop].yPosition+=2;
				}
				if (aAliens[iAlienLoop].Direction & DirLeft)
				{
					if (LevelData[iLevelNumber].AlienAttackPattern==0)
					{
						aAliens[iAlienLoop].xPosition--;
						if (aAliens[iAlienLoop].xPosition==0)
						{
							aAliens[iAlienLoop].Direction-=DirLeft;
							aAliens[iAlienLoop].Direction+=DirRight;
						}
					}
					else
					{
						aAliens[iAlienLoop].xPosition=AlienFormation[aAliens[iAlienLoop].yPosition];
					}
				}
				else if (aAliens[iAlienLoop].Direction & DirRight)
				{
					if (LevelData[iLevelNumber].AlienAttackPattern==0)
					{
						aAliens[iAlienLoop].xPosition++;
						if (aAliens[iAlienLoop].xPosition>=152)
						{
							aAliens[iAlienLoop].Direction-=DirRight;
							aAliens[iAlienLoop].Direction+=DirLeft;
						}
					}
					else
					{
						aAliens[iAlienLoop].xPosition=152-AlienFormation[aAliens[iAlienLoop].yPosition];
					}
				}
			}

			//Needs to be offset against the player position...
			//Our basic calculation is something along the lines of...aAliens[iAlienLoop].yPosition-sPlayer.yPosition?
			//Which sort of works, needs to be changed so that when alien.yPosition>player.yPosition
			//or alien.yPosition<player.yPosition-$foo the sprite is displayed in the "dead" space
			//above the grid...
			//So, we want to display the alien full size if sPlayer.yPosition>=yPosition>=(sPlayer.yPosition-96)

			//Use iAlienOffsetY to store the *calculated* alien position
			//So...
			//0 to 169 = Top half of screen (shrunk)
			//160 to 255 = Bottom half (playable area)

			//In simple terms the calculated position will be:
			//AlienPosition-PlayerPosition

			//This works. But it's as slow as anything...
			//I can see a lookup table coming on...
			//aAliens[iAlienLoop].yOffset = aAliens[iAlienLoop].yPosition-sPlayer.yPosition;

			//Which gives us the relative position of the alien compared to the player position
			//i.e. slightly smaller will be "above" the baseline
			//     same will be zero
			//     slightly larger will be "below" the baseline
			//So, this needs to be offset by the players position on the grid...
			//which I can cut and paste from my "show" sprite function at the bottom
			//aAliens[iAlienLoop].yOffset += 112 + (sPlayer.Velocity*2);

			//So, we can combine these two calculations into one...
			aAliens[iAlienLoop].yOffset = aAliens[iAlienLoop].yPosition - sPlayer.yPosition + 112 + (sPlayer.Velocity*2);

			//Use a lookup table to set the alien position...
			SetSpritePosition(AlienSprite+iAlienLoop, aAliens[iAlienLoop].xPosition, AlienPosition[aAliens[iAlienLoop].yOffset]);
			if (aAliens[iAlienLoop].yOffset<=159)
			{
				//Display a shrunken alien
				if (aAliens[iAlienLoop].Flags & FlagWorld)
				{
					aAliens[iAlienLoop].Animation=3;
				}
				else if (aAliens[iAlienLoop].Flags & FlagLeader)
				{
					//If the leader is off the screen - then he's escaped...
					//Set Palette and Background colour
					SetBackgroundColour(RGB(LevelData[iLevelNumber].BackgroundColour.Red,LevelData[iLevelNumber].BackgroundColour.Green,LevelData[iLevelNumber].BackgroundColour.Blue));
					//Setup Enemy sprites
					aAliens[iAlienLoop].Animation=0;
					aAliens[iAlienLoop].Flags+=FlagDead;
				}
				else
				{
					aAliens[iAlienLoop].Animation=1;
				}
				//I'm guessing that this is the thing that's really slowing it down...
				//SetSpritePosition(AlienSprite+iAlienLoop, aAliens[iAlienLoop].xPosition, iAlienOffsetY/5);
				//Was indeed! Dividing is BAD!!!
			}
			else
			{
				//Display a full size beastie
				if (aAliens[iAlienLoop].Flags & FlagWorld)
				{
					aAliens[iAlienLoop].Animation=4;
				}
				else if (aAliens[iAlienLoop].Flags & FlagLeader)
				{
					aAliens[iAlienLoop].Animation=6;
				}
				else
				{
					aAliens[iAlienLoop].Animation=2;
				}
				//SetSpritePosition(AlienSprite+iAlienLoop, aAliens[iAlienLoop].xPosition, 32+(iAlienOffsetY-160));

				//Decide whether to shoot a bullet at the player!
				if ((bAlienBullets[iNextBullet].Flags & FlagDead))
				{
					if (QuickRandom()<16)
					{
						bAlienBullets[iNextBullet].Flags=0;
						bAlienBullets[iNextBullet].xPosition=aAliens[iAlienLoop].xPosition;
						bAlienBullets[iNextBullet].yPosition=aAliens[iAlienLoop].yOffset-160;
						//Try and aim the bullet at the player...
						if (aAliens[iAlienLoop].xPosition < sPlayer.xPosition)
							bAlienBullets[iNextBullet].Direction=DirRight;
						else
							bAlienBullets[iNextBullet].Direction=DirLeft;
						if (aAliens[iAlienLoop].yPosition < sPlayer.yPosition)
							bAlienBullets[iNextBullet].Direction+=DirUp;
						else
							bAlienBullets[iNextBullet].Direction+=DirDown;
						bAlienBullets[iNextBullet].Frame=0;
						if (++iNextBullet>=MAX_BULLETS)
							iNextBullet=0;
					}
				}

				if (sPlayer.SpawnFrame==0)
				{
					//Do some collision detection type stuff...
					if (SpriteCollision(aAliens[iAlienLoop].xPosition+4, AlienPosition[aAliens[iAlienLoop].yOffset]+4, sPlayer.xPosition+4, 112+(sPlayer.Velocity*2)+4))
					{
						if (aAliens[iAlienLoop].Flags & FlagLeader)
						{
							//Don't kill the player - kill the leader!
							//Set Palette and Background colour
							SetBackgroundColour(RGB(LevelData[iLevelNumber].BackgroundColour.Red,LevelData[iLevelNumber].BackgroundColour.Green,LevelData[iLevelNumber].BackgroundColour.Blue));
							aAliens[iAlienLoop].Flags = FlagDead;
							sPlayer.Score+=500;
						}
						else
						{
							sPlayer.Flags=FlagDead;
						}
					}
				}

			}
		}

		CopySpriteTile((u16 *) AlienAnimation, AlienTile+iAlienLoop, aAliens[iAlienLoop].Animation);
	}
}

void DrawPlayer()
{
	static u8 ButtonDown;

	//I quite like the inertia effect. Think I'll do that for the horizontal movement too..
	if ((JOYPAD & J_DOWN) && (sPlayer.Velocity<3))
		sPlayer.Velocity++;
	else if ((JOYPAD & J_UP) && (sPlayer.Velocity>-4))
		sPlayer.Velocity--;
	else if (!(JOYPAD & J_UP+J_DOWN))
	{
		//Inertia effects. Reduce velocity towards 2...
		if (sPlayer.Velocity>-2)
			sPlayer.Velocity--;
		else if (sPlayer.Velocity<-2)
			sPlayer.Velocity++;
	}

	if ((JOYPAD & J_LEFT) && (sPlayer.Drift<2))
		sPlayer.Drift--;
	else if ((JOYPAD & J_RIGHT) && (sPlayer.Drift>-2))
		sPlayer.Drift++;
	else
	{
		if (sPlayer.Drift>0)
			sPlayer.Drift--;
		else if (sPlayer.Drift<0)
			sPlayer.Drift++;
	}

	if ((JOYPAD & J_A) && !ButtonDown)
	{
		ButtonDown=1;
		//Create a new bullet.
		if (bBullets[iNextBullet].Flags & FlagDead)
		{
			bBullets[iNextBullet].xHeadPosition=(sPlayer.xPosition+4);
			//yBulletPosition[iNextBullet]=(yPosition)-(yPosition % 2);
			bBullets[iNextBullet].yHeadPosition=80+(sPlayer.Velocity*2);
			//Start the shot off with zero length and age...
			bBullets[iNextBullet].Length=0;
			bBullets[iNextBullet].Age=0;
			bBullets[iNextBullet].Flags=0;
			iNextBullet++;
			if (iNextBullet==MAX_BULLETS)
				iNextBullet=0;
		}
	}
	else
	{
		ButtonDown=0;
	}
	if (JOYPAD & J_B && sPlayer.SpawnFrame==0)
	{
		//Hyperspace
		//Actually. I think I prefer this as a kind of de-rez type operation.
		//Maybe limit this to 3 goes per level?
		//sPlayer.xPosition=GetRandom(152);`
		sPlayer.SpawnFrame=16;
		SetPalette(SPRITE_PLANE, 0, 0, RGB(15,15,15), RGB(0,0,0), RGB(0,0,0));
	}

	//Vertical position will be offset by the velocity...
	//Need to spend a bit of effort making sure that the velocity & drift
	//don't take the players ship off the screen... Maybe make them bounce around a bit
	//or something (invert velocity!)
	sPlayer.yPosition+=sPlayer.Velocity;
	//Need to introduce a bounds heck for the drift...
	//This is okay, but tends to be a bit abrubt when you get to the edge. What
	//if we make it bounce a bit when it hits the edge...
	if (sPlayer.Drift>0)
	{
		if (sPlayer.xPosition+sPlayer.Drift>152)
		{
			//Hmmm... Bit extreme - not necessarily a bad thing...
			sPlayer.Drift=(152-sPlayer.xPosition)*-1;
		}
	}
	else
	{
		if ((sPlayer.Drift*-1)>sPlayer.xPosition)
		{
			sPlayer.Drift=sPlayer.xPosition;
		}
	}
	sPlayer.xPosition+=sPlayer.Drift;


	if (sPlayer.SpawnFrame>0)
	{
		//Do the spawning animation...
		//One pixel at each extreme of the deathframe...
		DrawExplosion((u16 *)MyBitmap, 160, 96, sPlayer.xPosition + 4, 112 + (sPlayer.Velocity*2) - 32 + 4, sPlayer.SpawnFrame);
		sPlayer.SpawnFrame--;
		if (sPlayer.SpawnFrame==0)
		{
			//Set the pallete properly.
			SetPalette(SPRITE_PLANE, 0, 0, RGB(15,0,0), RGB(10,2,0), RGB(15,15,15));
		}
	}
	else
	{
		//Check collisions

	}

	SetSpritePosition(ShipSprite, sPlayer.xPosition, 112+(sPlayer.Velocity*2));
}