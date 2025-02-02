





ALIGNED8 const u8 blargg_belly_rgba16[] = {
#include "actors/Blargg_MOP/blargg_belly_custom.rgba16.inc.c"
};

ALIGNED8 const u8 blargg_nostril_ia8[] = {
#include "actors/Blargg_MOP/blargg_nostril_custom.ia8.inc.c"
};

ALIGNED8 const u8 blargg_eye_rgba16[] = {
#include "actors/Blargg_MOP/blargg_eye_custom.rgba16.inc.c"
};

ALIGNED8 const u8 blargg_mouth_rgba16[] = {
#include "actors/Blargg_MOP/blargg_mouth_custom.rgba16.inc.c"
};

Vtx blargg_000_offset_001_mesh_vtx_0[40] = {
	{{{-243, -48, -45},0, {-16, -16},{0xDE, 0xFB, 0x86, 0xFF}}},
	{{{-104, -120, -43},0, {-16, -16},{0x2D, 0xC8, 0x97, 0xFF}}},
	{{{-200, -235, -23},0, {-16, -16},{0x1, 0xCA, 0x8D, 0xFF}}},
	{{{-298, -186, -23},0, {-16, -16},{0xB9, 0xDA, 0x9E, 0xFF}}},
	{{{-243, -48, 45},0, {-16, -16},{0x8C, 0x2A, 0x1D, 0xFF}}},
	{{{-243, -48, -45},0, {-16, -16},{0x98, 0x20, 0xBF, 0xFF}}},
	{{{-298, -186, -23},0, {-16, -16},{0x83, 0x0, 0xEA, 0xFF}}},
	{{{-298, -186, 23},0, {-16, -16},{0x8E, 0x5, 0x39, 0xFF}}},
	{{{-104, -120, -43},0, {-16, -16},{0x5C, 0xAE, 0xE3, 0xFF}}},
	{{{-200, -235, 23},0, {-16, -16},{0x40, 0x94, 0x14, 0xFF}}},
	{{{-200, -235, -23},0, {-16, -16},{0x3E, 0xA0, 0xC9, 0xFF}}},
	{{{-104, -120, 47},0, {-16, -16},{0x4D, 0xB3, 0x40, 0xFF}}},
	{{{-298, -186, -23},0, {-16, -16},{0xA5, 0xA9, 0xEB, 0xFF}}},
	{{{-200, -235, -23},0, {-16, -16},{0xE5, 0x90, 0xCB, 0xFF}}},
	{{{-200, -235, 23},0, {-16, -16},{0xED, 0x84, 0x14, 0xFF}}},
	{{{-298, -186, 23},0, {-16, -16},{0xB6, 0xA9, 0x37, 0xFF}}},
	{{{-104, -120, 47},0, {-16, -16},{0xD, 0xDD, 0x79, 0xFF}}},
	{{{-243, -48, 45},0, {-16, -16},{0xBB, 0xB, 0x6A, 0xFF}}},
	{{{-298, -186, 23},0, {-16, -16},{0xD4, 0xE3, 0x74, 0xFF}}},
	{{{-200, -235, 23},0, {-16, -16},{0x7, 0xAE, 0x60, 0xFF}}},
	{{{-70, -105, -52},0, {-16, -16},{0xE6, 0xE7, 0x86, 0xFF}}},
	{{{113, -88, -52},0, {-16, -16},{0x42, 0xEB, 0x96, 0xFF}}},
	{{{99, -262, -27},0, {-16, -16},{0x1D, 0xD4, 0x8C, 0xFF}}},
	{{{-24, -273, -27},0, {-16, -16},{0xD9, 0xB8, 0x9F, 0xFF}}},
	{{{113, -88, -52},0, {-16, -16},{0x7B, 0xF2, 0xE3, 0xFF}}},
	{{{99, -262, 27},0, {-16, -16},{0x72, 0xCB, 0x15, 0xFF}}},
	{{{99, -262, -27},0, {-16, -16},{0x69, 0xD3, 0xC8, 0xFF}}},
	{{{113, -88, 53},0, {-16, -16},{0x6C, 0xED, 0x41, 0xFF}}},
	{{{-24, -273, -27},0, {-16, -16},{0xE2, 0x86, 0xEC, 0xFF}}},
	{{{99, -262, -27},0, {-16, -16},{0x25, 0x93, 0xCA, 0xFF}}},
	{{{99, -262, 27},0, {-16, -16},{0x32, 0x8D, 0x14, 0xFF}}},
	{{{-24, -273, 27},0, {-16, -16},{0xEF, 0x8E, 0x36, 0xFF}}},
	{{{113, -88, 53},0, {-16, -16},{0x1F, 0xEB, 0x79, 0xFF}}},
	{{{-70, -105, 53},0, {-16, -16},{0xC3, 0xDE, 0x6A, 0xFF}}},
	{{{-24, -273, 27},0, {-16, -16},{0xEB, 0xCF, 0x73, 0xFF}}},
	{{{99, -262, 27},0, {-16, -16},{0x33, 0xC0, 0x61, 0xFF}}},
	{{{-70, -105, 53},0, {-16, -16},{0x8A, 0xDB, 0x1D, 0xFF}}},
	{{{-70, -105, -52},0, {-16, -16},{0x9A, 0xDA, 0xBF, 0xFF}}},
	{{{-24, -273, -27},0, {-16, -16},{0x9A, 0xB7, 0xEB, 0xFF}}},
	{{{-24, -273, 27},0, {-16, -16},{0xA1, 0xC1, 0x37, 0xFF}}},
};

Gfx blargg_000_offset_001_mesh_tri_0[] = {
	gsSPVertex(blargg_000_offset_001_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_000_offset_001_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_000_offset_001_mesh_vtx_0 + 32, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_001_mesh_vtx_1[46] = {
	{{{133, 191, -247},0, {-16, -16},{0x3B, 0xD, 0x90, 0xFF}}},
	{{{286, 227, -123},0, {-16, -16},{0x74, 0xF7, 0xCD, 0xFF}}},
	{{{288, -17, -53},0, {-16, -16},{0x64, 0xD8, 0xBD, 0xFF}}},
	{{{92, 383, -173},0, {-16, -16},{0x1A, 0x29, 0x8B, 0xFF}}},
	{{{-233, 325, -113},0, {-16, -16},{0xCD, 0x12, 0x8D, 0xFF}}},
	{{{-233, 107, -161},0, {-16, -16},{0xC9, 0xEE, 0x8F, 0xFF}}},
	{{{146, 26, -196},0, {-16, -16},{0x23, 0xE7, 0x88, 0xFF}}},
	{{{127, -116, -102},0, {-16, -16},{0x25, 0x8A, 0xE2, 0xFF}}},
	{{{288, -17, 53},0, {-16, -16},{0x5A, 0xA8, 0xC, 0xFF}}},
	{{{127, -116, 102},0, {-16, -16},{0xF9, 0x8F, 0x39, 0xFF}}},
	{{{146, 26, 196},0, {-16, -16},{0x21, 0xE9, 0x79, 0xFF}}},
	{{{286, 227, 123},0, {-16, -16},{0x67, 0xFE, 0x4A, 0xFF}}},
	{{{133, 191, 247},0, {-16, -16},{0xFD, 0xFF, 0x7F, 0xFF}}},
	{{{199, 398, 86},0, {-16, -16},{0x64, 0x3B, 0x33, 0xFF}}},
	{{{92, 383, 173},0, {-16, -16},{0xEF, 0x44, 0x6A, 0xFF}}},
	{{{-16, 506, 43},0, {-16, -16},{0x2E, 0x6B, 0x33, 0xFF}}},
	{{{92, 383, 173},0, {-16, -16},{0xEF, 0x44, 0x6A, 0xFF}}},
	{{{-16, 506, 43},0, {-16, -16},{0x2E, 0x6B, 0x33, 0xFF}}},
	{{{-529, 486, 0},0, {-16, -16},{0x92, 0x20, 0xC9, 0xFF}}},
	{{{-233, 325, 113},0, {-16, -16},{0xD3, 0x12, 0x75, 0xFF}}},
	{{{-396, 298, 0},0, {-16, -16},{0x95, 0xDC, 0xC6, 0xFF}}},
	{{{-233, 325, -113},0, {-16, -16},{0xCD, 0x12, 0x8D, 0xFF}}},
	{{{92, 383, -173},0, {-16, -16},{0x1A, 0x29, 0x8B, 0xFF}}},
	{{{-16, 506, -43},0, {-16, -16},{0x2F, 0x6B, 0xCE, 0xFF}}},
	{{{199, 398, -86},0, {-16, -16},{0x57, 0x5B, 0xF5, 0xFF}}},
	{{{286, 227, -123},0, {-16, -16},{0x74, 0xF7, 0xCD, 0xFF}}},
	{{{-233, 107, -161},0, {-16, -16},{0xC9, 0xEE, 0x8F, 0xFF}}},
	{{{-396, 69, 0},0, {-16, -16},{0xA1, 0xAB, 0x0, 0xFF}}},
	{{{-183, -17, -128},0, {-16, -16},{0xD2, 0xC6, 0x99, 0xFF}}},
	{{{146, 26, -196},0, {-16, -16},{0x23, 0xE7, 0x88, 0xFF}}},
	{{{-114, -139, -64},0, {-16, -16},{0x6, 0x91, 0xC3, 0xFF}}},
	{{{127, -116, -102},0, {-16, -16},{0x25, 0x8A, 0xE2, 0xFF}}},
	{{{127, -116, -102},0, {-16, -16},{0x25, 0x8A, 0xE2, 0xFF}}},
	{{{-114, -139, 64},0, {-16, -16},{0x4, 0x88, 0x29, 0xFF}}},
	{{{-114, -139, -64},0, {-16, -16},{0x6, 0x91, 0xC3, 0xFF}}},
	{{{127, -116, 102},0, {-16, -16},{0xF9, 0x8F, 0x39, 0xFF}}},
	{{{-183, -17, 128},0, {-16, -16},{0xD8, 0xC5, 0x69, 0xFF}}},
	{{{146, 26, 196},0, {-16, -16},{0x21, 0xE9, 0x79, 0xFF}}},
	{{{133, 191, 247},0, {-16, -16},{0xFD, 0xFF, 0x7F, 0xFF}}},
	{{{-233, 107, 161},0, {-16, -16},{0xC9, 0xEE, 0x71, 0xFF}}},
	{{{92, 383, 173},0, {-16, -16},{0xEF, 0x44, 0x6A, 0xFF}}},
	{{{-233, 325, 113},0, {-16, -16},{0xD3, 0x12, 0x75, 0xFF}}},
	{{{-396, 69, 0},0, {-16, -16},{0xA1, 0xAB, 0x0, 0xFF}}},
	{{{-396, 298, 0},0, {-16, -16},{0x95, 0xDC, 0xC6, 0xFF}}},
	{{{-317, -48, 0},0, {-16, -16},{0xBD, 0x9F, 0x2F, 0xFF}}},
	{{{-183, -17, -128},0, {-16, -16},{0xD2, 0xC6, 0x99, 0xFF}}},
};

Gfx blargg_000_offset_001_mesh_tri_1[] = {
	gsSPVertex(blargg_000_offset_001_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(7, 2, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(blargg_000_offset_001_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(6, 5, 2, 0),
	gsSP1Triangle(7, 6, 2, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(10, 4, 5, 0),
	gsSP1Triangle(10, 11, 4, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(blargg_000_offset_001_mesh_vtx_1 + 32, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 7, 10, 0),
	gsSP1Triangle(12, 4, 7, 0),
	gsSP1Triangle(4, 12, 1, 0),
	gsSP1Triangle(1, 12, 2, 0),
	gsSP1Triangle(2, 12, 13, 0),
	gsSP1Triangle(13, 12, 10, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_001_mesh_vtx_2[9] = {
	{{{286, 227, -123},0, {-16, 400},{0x74, 0xF7, 0xCD, 0xFF}}},
	{{{288, -17, 53},0, {240, 176},{0x5A, 0xA8, 0xC, 0xFF}}},
	{{{288, -17, -53},0, {-16, 176},{0x64, 0xD8, 0xBD, 0xFF}}},
	{{{286, 227, 123},0, {240, 400},{0x67, 0xFE, 0x4A, 0xFF}}},
	{{{199, 398, -86},0, {-16, 560},{0x57, 0x5B, 0xF5, 0xFF}}},
	{{{199, 398, 86},0, {240, 560},{0x64, 0x3B, 0x33, 0xFF}}},
	{{{-16, 506, -43},0, {-16, 752},{0x2F, 0x6B, 0xCE, 0xFF}}},
	{{{-16, 506, 43},0, {240, 752},{0x2E, 0x6B, 0x33, 0xFF}}},
	{{{-529, 486, 0},0, {112, 976},{0x92, 0x20, 0xC9, 0xFF}}},
};

Gfx blargg_000_offset_001_mesh_tri_2[] = {
	gsSPVertex(blargg_000_offset_001_mesh_vtx_2 + 0, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSPEndDisplayList(),
};

Vtx blargg_000_offset_002_mesh_vtx_0[56] = {
	{{{326, 21, 307},0, {496, 1008},{0xC7, 0x4E, 0x52, 0xFF}}},
	{{{140, -168, 171},0, {3568, -400},{0xCC, 0xB2, 0x55, 0xFF}}},
	{{{295, -262, 175},0, {-2576, -400},{0x17, 0x9D, 0x4C, 0xFF}}},
	{{{326, 21, 307},0, {-2576, 1008},{0xC7, 0x4E, 0x52, 0xFF}}},
	{{{-88, 24, 119},0, {3568, 1008},{0xF6, 0x58, 0x5B, 0xFF}}},
	{{{140, -168, 171},0, {496, -400},{0xCC, 0xB2, 0x55, 0xFF}}},
	{{{662, 23, 0},0, {423, 2098},{0x35, 0x72, 0xEC, 0xFF}}},
	{{{617, 23, 154},0, {1980, 1375},{0xF, 0x6E, 0x3E, 0xFF}}},
	{{{555, -242, 127},0, {1131, -316},{0x35, 0xC1, 0x61, 0xFF}}},
	{{{617, 23, -154},0, {1980, 1375},{0xF, 0x5D, 0xAA, 0xFF}}},
	{{{662, 23, 0},0, {423, 2098},{0x35, 0x72, 0xEC, 0xFF}}},
	{{{555, -242, -127},0, {1131, -316},{0x51, 0xA1, 0xE6, 0xFF}}},
	{{{617, 23, -154},0, {-16, -16},{0xF, 0x5D, 0xAA, 0xFF}}},
	{{{555, -242, -127},0, {-16, -16},{0x51, 0xA1, 0xE6, 0xFF}}},
	{{{326, 21, -307},0, {-16, -16},{0xD5, 0x41, 0x9C, 0xFF}}},
	{{{295, -262, -175},0, {-16, -16},{0x15, 0x9D, 0xB4, 0xFF}}},
	{{{295, -262, -175},0, {-16, -16},{0x15, 0x9D, 0xB4, 0xFF}}},
	{{{555, -242, -127},0, {-16, -16},{0x51, 0xA1, 0xE6, 0xFF}}},
	{{{571, -260, 0},0, {-16, -16},{0x2E, 0x8E, 0xE1, 0xFF}}},
	{{{261, -308, 0},0, {-16, -16},{0xDD, 0x8A, 0xDF, 0xFF}}},
	{{{295, -262, 175},0, {-16, -16},{0x17, 0x9D, 0x4C, 0xFF}}},
	{{{555, -242, 127},0, {-16, -16},{0x35, 0xC1, 0x61, 0xFF}}},
	{{{326, 21, 307},0, {-16, -16},{0xC7, 0x4E, 0x52, 0xFF}}},
	{{{617, 23, 154},0, {-16, -16},{0xF, 0x6E, 0x3E, 0xFF}}},
	{{{-88, 24, -119},0, {-16, -16},{0xB0, 0x62, 0x4, 0xFF}}},
	{{{662, 23, 0},0, {-16, -16},{0x35, 0x72, 0xEC, 0xFF}}},
	{{{617, 23, -154},0, {-16, -16},{0xF, 0x5D, 0xAA, 0xFF}}},
	{{{326, 21, -307},0, {-16, -16},{0xD5, 0x41, 0x9C, 0xFF}}},
	{{{161, -168, -171},0, {-16, -16},{0xC2, 0xB5, 0xAF, 0xFF}}},
	{{{172, -204, 0},0, {-16, -16},{0x8B, 0xDD, 0x24, 0xFF}}},
	{{{140, -168, 171},0, {-16, -16},{0xCC, 0xB2, 0x55, 0xFF}}},
	{{{-62, -140, -183},0, {-16, -16},{0xA6, 0x5, 0xA6, 0xFF}}},
	{{{-88, 24, -119},0, {-16, -16},{0xB0, 0x62, 0x4, 0xFF}}},
	{{{-62, -140, -183},0, {-16, -16},{0xA6, 0x5, 0xA6, 0xFF}}},
	{{{-158, -149, 0},0, {-16, -16},{0x86, 0x1C, 0x13, 0xFF}}},
	{{{-107, -275, -91},0, {-16, -16},{0xC3, 0xAB, 0xB9, 0xFF}}},
	{{{78, -280, -177},0, {-16, -16},{0xA, 0xBD, 0x95, 0xFF}}},
	{{{161, -168, -171},0, {-16, -16},{0xC2, 0xB5, 0xAF, 0xFF}}},
	{{{66, -334, -93},0, {-16, -16},{0x2, 0x83, 0xEA, 0xFF}}},
	{{{-107, -275, 0},0, {-16, -16},{0xAE, 0xA5, 0x21, 0xFF}}},
	{{{66, -304, 0},0, {-16, -16},{0x6, 0x84, 0xE6, 0xFF}}},
	{{{130, -287, 0},0, {-16, -16},{0x2E, 0x8A, 0xFF, 0xFF}}},
	{{{66, -334, 93},0, {-16, -16},{0x4, 0x82, 0x10, 0xFF}}},
	{{{-107, -275, 91},0, {-16, -16},{0xC4, 0x9F, 0x37, 0xFF}}},
	{{{78, -280, 177},0, {-16, -16},{0x13, 0xBE, 0x6B, 0xFF}}},
	{{{-62, -140, 183},0, {-16, -16},{0xC2, 0x2D, 0x65, 0xFF}}},
	{{{140, -168, 171},0, {-16, -16},{0xCC, 0xB2, 0x55, 0xFF}}},
	{{{-88, 24, 119},0, {-16, -16},{0xF6, 0x58, 0x5B, 0xFF}}},
	{{{-88, 24, -119},0, {-16, -16},{0xB0, 0x62, 0x4, 0xFF}}},
	{{{-88, 24, 119},0, {-16, -16},{0xF6, 0x58, 0x5B, 0xFF}}},
	{{{326, 21, 307},0, {-16, -16},{0xC7, 0x4E, 0x52, 0xFF}}},
	{{{-62, -140, 183},0, {-16, -16},{0xC2, 0x2D, 0x65, 0xFF}}},
	{{{-158, -149, 0},0, {-16, -16},{0x86, 0x1C, 0x13, 0xFF}}},
	{{{-107, -275, 91},0, {-16, -16},{0xC4, 0x9F, 0x37, 0xFF}}},
	{{{-107, -275, 0},0, {-16, -16},{0xAE, 0xA5, 0x21, 0xFF}}},
	{{{-107, -275, -91},0, {-16, -16},{0xC3, 0xAB, 0xB9, 0xFF}}},
};

Gfx blargg_000_offset_002_mesh_tri_0[] = {
	gsSPVertex(blargg_000_offset_002_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(blargg_000_offset_002_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(11, 0, 12, 0),
	gsSP1Triangle(12, 0, 3, 0),
	gsSP1Triangle(3, 13, 12, 0),
	gsSP1Triangle(14, 13, 3, 0),
	gsSP1Triangle(3, 4, 14, 0),
	gsSP1Triangle(15, 8, 12, 0),
	gsSPVertex(blargg_000_offset_002_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(4, 6, 3, 0),
	gsSP1Triangle(6, 7, 3, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(7, 8, 10, 0),
	gsSP1Triangle(10, 11, 7, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSP1Triangle(13, 15, 2, 0),
	gsSP1Triangle(15, 0, 2, 0),
	gsSPVertex(blargg_000_offset_002_mesh_vtx_0 + 48, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_002_mesh_vtx_1[6] = {
	{{{662, 23, 0},0, {204, 1041},{0x35, 0x72, 0xEC, 0xFF}}},
	{{{555, -242, 127},0, {558, -166},{0x35, 0xC1, 0x61, 0xFF}}},
	{{{571, -260, 0},0, {-172, 94},{0x2E, 0x8E, 0xE1, 0xFF}}},
	{{{571, -260, 0},0, {-172, 94},{0x2E, 0x8E, 0xE1, 0xFF}}},
	{{{555, -242, -127},0, {558, -166},{0x51, 0xA1, 0xE6, 0xFF}}},
	{{{662, 23, 0},0, {204, 1041},{0x35, 0x72, 0xEC, 0xFF}}},
};

Gfx blargg_000_offset_002_mesh_tri_1[] = {
	gsSPVertex(blargg_000_offset_002_mesh_vtx_1 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_002_mesh_vtx_2[10] = {
	{{{66, -334, -93},0, {571, -664},{0x52, 0xA2, 0xE6, 0xFF}}},
	{{{78, -280, -177},0, {-590, -171},{0x4E, 0xB1, 0xC3, 0xFF}}},
	{{{130, -287, 0},0, {1627, 462},{0x5C, 0xA9, 0x4, 0xFF}}},
	{{{161, -168, -171},0, {-731, 1624},{0x3E, 0xC2, 0xA5, 0xFF}}},
	{{{172, -204, 0},0, {1486, 1624},{0x74, 0x25, 0xDD, 0xFF}}},
	{{{130, -287, 0},0, {1346, 328},{0x5C, 0xA9, 0x4, 0xFF}}},
	{{{78, -280, 177},0, {-274, 117},{0x4D, 0xB9, 0x47, 0xFF}}},
	{{{66, -334, 93},0, {466, -306},{0x4F, 0x9F, 0x15, 0xFF}}},
	{{{140, -168, 171},0, {-274, 1208},{0x41, 0xBA, 0x54, 0xFF}}},
	{{{172, -204, 0},0, {1275, 1173},{0x74, 0x25, 0xDD, 0xFF}}},
};

Gfx blargg_000_offset_002_mesh_tri_2[] = {
	gsSPVertex(blargg_000_offset_002_mesh_vtx_2 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 6, 5, 0),
	gsSP1Triangle(5, 9, 8, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_002_mesh_vtx_3[40] = {
	{{{544, -28, -99},0, {-16, -16},{0x4F, 0x14, 0x9E, 0xFF}}},
	{{{432, -25, -152},0, {-16, -16},{0xF4, 0x1A, 0x84, 0xFF}}},
	{{{443, 83, -131},0, {-16, -16},{0x1D, 0x2D, 0x8D, 0xFF}}},
	{{{524, 82, -92},0, {-16, -16},{0x54, 0x42, 0xBB, 0xFF}}},
	{{{432, -25, -152},0, {-16, -16},{0x9F, 0x19, 0xB1, 0xFF}}},
	{{{425, 84, -94},0, {-16, -16},{0x96, 0x40, 0xE3, 0xFF}}},
	{{{443, 83, -131},0, {-16, -16},{0xBE, 0x36, 0xA1, 0xFF}}},
	{{{401, -25, -88},0, {-16, -16},{0x85, 0x1C, 0xD, 0xFF}}},
	{{{524, 82, -92},0, {-16, -16},{0x30, 0x76, 0xFF, 0xFF}}},
	{{{443, 83, -131},0, {-16, -16},{0x1, 0x6F, 0xC2, 0xFF}}},
	{{{425, 84, -94},0, {-16, -16},{0xD5, 0x78, 0x0, 0xFF}}},
	{{{507, 82, -56},0, {-16, -16},{0x4, 0x6F, 0x3D, 0xFF}}},
	{{{513, -27, -35},0, {-16, -16},{0x62, 0x15, 0x4E, 0xFF}}},
	{{{544, -28, -99},0, {-16, -16},{0x7C, 0x17, 0xF3, 0xFF}}},
	{{{524, 82, -92},0, {-16, -16},{0x6D, 0x3B, 0x1D, 0xFF}}},
	{{{507, 82, -56},0, {-16, -16},{0x45, 0x32, 0x5E, 0xFF}}},
	{{{401, -25, -88},0, {-16, -16},{0xB3, 0x17, 0x62, 0xFF}}},
	{{{513, -27, -35},0, {-16, -16},{0xE, 0x19, 0x7C, 0xFF}}},
	{{{507, 82, -56},0, {-16, -16},{0xE6, 0x2E, 0x74, 0xFF}}},
	{{{425, 84, -94},0, {-16, -16},{0xAF, 0x44, 0x45, 0xFF}}},
	{{{524, 82, 92},0, {-16, -16},{0x49, 0x2C, 0x5E, 0xFF}}},
	{{{443, 83, 131},0, {-16, -16},{0x3, 0x42, 0x6C, 0xFF}}},
	{{{432, -25, 152},0, {-16, -16},{0x1B, 0x15, 0x7A, 0xFF}}},
	{{{544, -28, 99},0, {-16, -16},{0x69, 0x17, 0x43, 0xFF}}},
	{{{443, 83, 131},0, {-16, -16},{0xA8, 0x3F, 0x42, 0xFF}}},
	{{{425, 84, 94},0, {-16, -16},{0x8E, 0x37, 0xFA, 0xFF}}},
	{{{401, -25, 88},0, {-16, -16},{0x87, 0x1A, 0x1B, 0xFF}}},
	{{{432, -25, 152},0, {-16, -16},{0xBD, 0x1B, 0x69, 0xFF}}},
	{{{507, 82, 56},0, {-16, -16},{0x1E, 0x76, 0xDC, 0xFF}}},
	{{{425, 84, 94},0, {-16, -16},{0xD3, 0x71, 0xDB, 0xFF}}},
	{{{443, 83, 131},0, {-16, -16},{0xE7, 0x77, 0x25, 0xFF}}},
	{{{524, 82, 92},0, {-16, -16},{0x32, 0x6F, 0x25, 0xFF}}},
	{{{425, 84, 94},0, {-16, -16},{0xB9, 0x2F, 0xA2, 0xFF}}},
	{{{507, 82, 56},0, {-16, -16},{0x1, 0x43, 0x94, 0xFF}}},
	{{{513, -27, 35},0, {-16, -16},{0xE6, 0x16, 0x86, 0xFF}}},
	{{{401, -25, 88},0, {-16, -16},{0x98, 0x1B, 0xBD, 0xFF}}},
	{{{507, 82, 56},0, {-16, -16},{0x5B, 0x3B, 0xBF, 0xFF}}},
	{{{544, -28, 99},0, {-16, -16},{0x7B, 0x14, 0xE5, 0xFF}}},
	{{{513, -27, 35},0, {-16, -16},{0x45, 0x18, 0x98, 0xFF}}},
	{{{524, 82, 92},0, {-16, -16},{0x75, 0x31, 0x7, 0xFF}}},
};

Gfx blargg_000_offset_002_mesh_tri_3[] = {
	gsSPVertex(blargg_000_offset_002_mesh_vtx_3 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_000_offset_002_mesh_vtx_3 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_000_offset_002_mesh_vtx_3 + 32, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx blargg_000_offset_004_mesh_vtx_0[12] = {
	{{{556, -10, -56},0, {-16, -16},{0x6F, 0x3C, 0x11, 0xFF}}},
	{{{556, -128, 120},0, {-16, -16},{0x70, 0xC4, 0x3, 0xFF}}},
	{{{556, -128, -120},0, {-16, -16},{0x7C, 0xF2, 0xE7, 0xFF}}},
	{{{556, -10, 56},0, {-16, -16},{0x74, 0x1E, 0x2A, 0xFF}}},
	{{{410, 80, 203},0, {-16, -16},{0x1, 0x74, 0x33, 0xFF}}},
	{{{410, 80, -203},0, {-16, -16},{0xF4, 0x6A, 0xBA, 0xFF}}},
	{{{318, -84, -267},0, {-16, -16},{0x31, 0xB0, 0xAB, 0xFF}}},
	{{{111, 99, -96},0, {-16, -16},{0xB8, 0x5A, 0xCB, 0xFF}}},
	{{{-73, -8, -90},0, {-16, -16},{0x90, 0x34, 0x20, 0xFF}}},
	{{{111, 99, 96},0, {-16, -16},{0xDA, 0x78, 0x14, 0xFF}}},
	{{{-73, -8, 90},0, {-16, -16},{0xC8, 0x36, 0x64, 0xFF}}},
	{{{318, -84, 267},0, {-16, -16},{0x2B, 0x9B, 0x40, 0xFF}}},
};

Gfx blargg_000_offset_004_mesh_tri_0[] = {
	gsSPVertex(blargg_000_offset_004_mesh_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 0, 2, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(4, 9, 10, 0),
	gsSP1Triangle(4, 10, 11, 0),
	gsSP1Triangle(4, 11, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(7, 9, 4, 0),
	gsSP1Triangle(7, 4, 5, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_004_mesh_vtx_1[6] = {
	{{{556, -128, -120},0, {304, 1840},{0x7C, 0xF2, 0xE7, 0xFF}}},
	{{{556, -128, 120},0, {688, 1840},{0x70, 0xC4, 0x3, 0xFF}}},
	{{{318, -84, 267},0, {912, 1232},{0x2B, 0x9B, 0x40, 0xFF}}},
	{{{-73, -8, 90},0, {624, 176},{0xC8, 0x36, 0x64, 0xFF}}},
	{{{-73, -8, -90},0, {368, 176},{0x90, 0x34, 0x20, 0xFF}}},
	{{{318, -84, -267},0, {80, 1232},{0x31, 0xB0, 0xAB, 0xFF}}},
};

Gfx blargg_000_offset_004_mesh_tri_1[] = {
	gsSPVertex(blargg_000_offset_004_mesh_vtx_1 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSPEndDisplayList(),
};Vtx blargg_000_offset_004_mesh_vtx_2[40] = {
	{{{276, -51, 173},0, {-16, -16},{0xB0, 0xF7, 0x9E, 0xFF}}},
	{{{387, -68, 120},0, {-16, -16},{0xA, 0xE5, 0x84, 0xFF}}},
	{{{361, -176, 141},0, {-16, -16},{0xDF, 0xD7, 0x8C, 0xFF}}},
	{{{280, -163, 179},0, {-16, -16},{0xA4, 0xCB, 0xBA, 0xFF}}},
	{{{387, -68, 120},0, {-16, -16},{0x5D, 0xDA, 0xB2, 0xFF}}},
	{{{378, -178, 177},0, {-16, -16},{0x61, 0xB3, 0xE4, 0xFF}}},
	{{{361, -176, 141},0, {-16, -16},{0x3B, 0xC3, 0xA2, 0xFF}}},
	{{{417, -73, 184},0, {-16, -16},{0x76, 0xD3, 0xD, 0xFF}}},
	{{{378, -178, 177},0, {-16, -16},{0x1B, 0x84, 0x2, 0xFF}}},
	{{{280, -163, 179},0, {-16, -16},{0xC1, 0x92, 0xFF, 0xFF}}},
	{{{361, -176, 141},0, {-16, -16},{0xF0, 0x91, 0xC4, 0xFF}}},
	{{{298, -166, 216},0, {-16, -16},{0xEE, 0x92, 0x3D, 0xFF}}},
	{{{306, -56, 237},0, {-16, -16},{0x9C, 0xF9, 0x4F, 0xFF}}},
	{{{276, -51, 173},0, {-16, -16},{0x82, 0xFA, 0xF2, 0xFF}}},
	{{{280, -163, 179},0, {-16, -16},{0x8D, 0xD3, 0x1D, 0xFF}}},
	{{{298, -166, 216},0, {-16, -16},{0xB6, 0xD7, 0x5F, 0xFF}}},
	{{{417, -73, 184},0, {-16, -16},{0x4A, 0xDE, 0x61, 0xFF}}},
	{{{298, -166, 216},0, {-16, -16},{0x14, 0xCE, 0x73, 0xFF}}},
	{{{378, -178, 177},0, {-16, -16},{0x48, 0xB1, 0x44, 0xFF}}},
	{{{306, -56, 237},0, {-16, -16},{0xEF, 0xE9, 0x7C, 0xFF}}},
	{{{378, -178, -177},0, {-16, -16},{0x40, 0xC8, 0xA2, 0xFF}}},
	{{{298, -166, -216},0, {-16, -16},{0xF7, 0xBE, 0x94, 0xFF}}},
	{{{306, -56, -237},0, {-16, -16},{0x17, 0xE6, 0x86, 0xFF}}},
	{{{417, -73, -184},0, {-16, -16},{0x63, 0xD7, 0xBC, 0xFF}}},
	{{{298, -166, -216},0, {-16, -16},{0x9F, 0xD1, 0xBD, 0xFF}}},
	{{{280, -163, -179},0, {-16, -16},{0x85, 0xDF, 0x6, 0xFF}}},
	{{{276, -51, -173},0, {-16, -16},{0x84, 0xFC, 0xE5, 0xFF}}},
	{{{306, -56, -237},0, {-16, -16},{0xB9, 0xF1, 0x98, 0xFF}}},
	{{{361, -176, -141},0, {-16, -16},{0xA, 0x86, 0x24, 0xFF}}},
	{{{280, -163, -179},0, {-16, -16},{0xBF, 0x99, 0x26, 0xFF}}},
	{{{298, -166, -216},0, {-16, -16},{0xD2, 0x8F, 0xDB, 0xFF}}},
	{{{378, -178, -177},0, {-16, -16},{0x1F, 0x8B, 0xD9, 0xFF}}},
	{{{280, -163, -179},0, {-16, -16},{0xB2, 0xDE, 0x5E, 0xFF}}},
	{{{361, -176, -141},0, {-16, -16},{0xF6, 0xBE, 0x6C, 0xFF}}},
	{{{387, -68, -120},0, {-16, -16},{0xE3, 0xEF, 0x7B, 0xFF}}},
	{{{276, -51, -173},0, {-16, -16},{0x95, 0xF8, 0x44, 0xFF}}},
	{{{361, -176, -141},0, {-16, -16},{0x4F, 0xB6, 0x41, 0xFF}}},
	{{{417, -73, -184},0, {-16, -16},{0x75, 0xD6, 0x1A, 0xFF}}},
	{{{387, -68, -120},0, {-16, -16},{0x3F, 0xDC, 0x68, 0xFF}}},
	{{{378, -178, -177},0, {-16, -16},{0x6A, 0xBB, 0xF9, 0xFF}}},
};

Gfx blargg_000_offset_004_mesh_tri_2[] = {
	gsSPVertex(blargg_000_offset_004_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_000_offset_004_mesh_vtx_2 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(blargg_000_offset_004_mesh_vtx_2 + 32, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_teeth[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_body[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsSPLightColor(LIGHT_1, 0xfe0000ff),
    gsSPLightColor(LIGHT_2, 0x7f0000ff),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_belly[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPLoadTextureBlock(blargg_belly_rgba16, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 32, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 3, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx mat_revert_blargg_belly[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_nostril[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPLoadTextureBlock(blargg_nostril_ia8, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_CLAMP, G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLightColor(LIGHT_1, 0xfe0000ff),
    gsSPLightColor(LIGHT_2, 0x7f0000ff),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_eye[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPLoadTextureBlock(blargg_eye_rgba16, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx mat_revert_blargg_eye[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_blargg_mouth[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsDPLoadTextureBlock(blargg_mouth_rgba16, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLightColor(LIGHT_1, 0xfefefeff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx mat_revert_blargg_mouth[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx blargg_000_offset_001_mesh[] = {
	gsSPDisplayList(mat_blargg_teeth),
	gsSPDisplayList(blargg_000_offset_001_mesh_tri_0),
	gsSPDisplayList(mat_blargg_body),
	gsSPDisplayList(blargg_000_offset_001_mesh_tri_1),
	gsSPDisplayList(mat_blargg_belly),
	gsSPDisplayList(blargg_000_offset_001_mesh_tri_2),
	gsSPDisplayList(mat_revert_blargg_belly),
	gsSPEndDisplayList(),
};



Gfx blargg_000_offset_002_mesh[] = {
	gsSPDisplayList(mat_blargg_body),
	gsSPDisplayList(blargg_000_offset_002_mesh_tri_0),
	gsSPDisplayList(mat_blargg_nostril),
	gsSPDisplayList(blargg_000_offset_002_mesh_tri_1),
	gsSPDisplayList(mat_blargg_eye),
	gsSPDisplayList(blargg_000_offset_002_mesh_tri_2),
	gsSPDisplayList(mat_revert_blargg_eye),
	gsSPDisplayList(mat_blargg_teeth),
	gsSPDisplayList(blargg_000_offset_002_mesh_tri_3),
	gsSPEndDisplayList(),
};



Gfx blargg_000_offset_004_mesh[] = {
	gsSPDisplayList(mat_blargg_body),
	gsSPDisplayList(blargg_000_offset_004_mesh_tri_0),
	gsSPDisplayList(mat_blargg_mouth),
	gsSPDisplayList(blargg_000_offset_004_mesh_tri_1),
	gsSPDisplayList(mat_revert_blargg_mouth),
	gsSPDisplayList(mat_blargg_teeth),
	gsSPDisplayList(blargg_000_offset_004_mesh_tri_2),
	gsSPEndDisplayList(),
};



Gfx blargg_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
