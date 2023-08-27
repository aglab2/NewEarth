#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bitdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _b1_skybox_mio0SegmentRomStart, _b1_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, geo_bitdw_0003C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, geo_bitdw_0003D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, geo_bitdw_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, geo_bitdw_000408), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, geo_bitdw_000420), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, geo_bitdw_000438), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, geo_bitdw_000450), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, geo_bitdw_000468), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, geo_bitdw_000480), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, geo_bitdw_000498), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, geo_bitdw_0004B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, geo_bitdw_0004C8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, geo_bitdw_0004E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, geo_bitdw_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, geo_bitdw_000510), 
	LOAD_MODEL_FROM_GEO(22, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM, geo_bitdw_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM, geo_bitdw_000540), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM, geo_bitdw_000528), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM, geo_bitdw_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4, geo_bitdw_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3, geo_bitdw_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2, geo_bitdw_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1, geo_bitdw_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE, geo_bitdw_000600), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bitdw_area_1),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 110, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_BITDW, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_BOWSER_1, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_GROUNDS, 1, 130, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 130, WARP_NO_CHECKPOINT),
		OBJECT(0, 3102, 6821, -8770, 0, 0, 0, 0x0, bhvBowserCourseRedCoinStar),
		OBJECT(129, -5044, 5184, 863, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -5244, 5184, 863, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -4844, 5184, 863, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -5244, 5384, 863, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -4863, 5184, 2451, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -4663, 5184, 2451, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(129, -4463, 5184, 2451, 0, 0, 0, 0x0, bhvBreakableBox),
		OBJECT(194, 965, 2440, -757, 0, 0, 0, 0x10000, bhvCirclingAmp),
		OBJECT(194, 2605, 2741, -877, 0, 0, 0, 0x10000, bhvCirclingAmp),
		OBJECT(194, 1416, 3241, 1609, 0, 0, 0, 0x10000, bhvCirclingAmp),
		OBJECT(194, 6056, 3509, 2951, 0, 0, 0, 0x20000, bhvCirclingAmp),
		OBJECT(0, 390, 2065, -2218, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -2541, 360, -3428, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3349, 775, -3108, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3606, 1380, -3731, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1408, 2379, -1014, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 472, 3260, 1376, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2048, 5576, 2750, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4518, 6652, -8770, 0, 90, 0, 0x280000, bhvDeathWarp),
		OBJECT(38, -4606, 440, -3433, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(57, 1922, 1712, -4173, 0, 0, 0, 0x10000, bhvFerrisWheelAxle),
		OBJECT(122, -515, 852, -4375, 0, 0, 0, 0x0, bhvFlamethrower),
		OBJECT(122, 4523, 1254, -4375, 0, 0, 0, 0x0, bhvFlamethrower),
		OBJECT(47, -2525, 5096, 1714, 0, -90, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, -1977, 5096, 1714, 0, 90, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 1360, 5496, -1750, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 1360, 5496, -2228, 0, -180, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 1360, 5496, -4088, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 1360, 5496, -5106, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 2743, 5496, -2976, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 3504, 5496, -2976, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(47, 4265, 5496, -2976, 0, 0, 0, 0x0, bhvFlipswap_Platform_MOP),
		OBJECT(207, -515, 720, -3822, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(129, -2533, -104, -3433, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2533, -104, -3233, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2533, -104, -3033, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2533, -104, -3633, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -2533, -104, -3833, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(194, 6441, 5584, -2972, 0, 0, 0, 0x20000, bhvHomingAmp),
		OBJECT(194, 7694, 5784, -3708, 0, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(194, 8407, 5880, -4791, 0, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(194, 8414, 5976, -6890, 0, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(194, 7049, 6149, -8749, 0, 0, 0, 0x0, bhvHomingAmp),
		OBJECT(124, -3930, 440, -4040, 0, 0, 0, 0x4e0000, bhvMessagePanel),
		OBJECT(123, -4768, 3444, 1700, 0, 0, 0, 0x640000, bhvNoteblock_MOP),
		OBJECT(120, -4149, 5237, 1708, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(215, -2543, 113, -3430, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 5195, 341, -3060, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6056, 3765, 2951, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -4273, 3455, -1064, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5044, 5184, 863, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 546, 6305, 2824, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1303, 5584, -6021, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 4118, 6492, -7735, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -4301, 440, -3445, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(54, 648, 532, -3753, 0, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, 1262, 532, -3137, 180, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(54, -2247, 3384, 966, 0, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, -1633, 3384, 1582, 180, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(54, -2861, 3384, -268, 180, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, -2247, 3384, 351, 0, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(54, -4090, 3384, -882, 0, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, -3476, 3384, -268, 180, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(54, -4090, 3384, 340, 0, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, -3476, 3384, 954, 180, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(16, 959, 424, -3427, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(16, -1904, 3280, 1279, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(16, -2560, 3280, 49, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(16, -3787, 3280, -565, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(16, -3787, 3280, 664, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(22, 4118, 6652, -8770, 0, 0, 0, 0x1e0000, bhvWarpPipe),
		TERRAIN(bitdw_area_1_collision),
		MACRO_OBJECTS(bitdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 2),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
