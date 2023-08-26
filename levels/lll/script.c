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
#include "levels/lll/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_lll_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _fire_yay0SegmentRomStart, _fire_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _vc_skybox_mio0SegmentRomStart, _vc_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, lll_geo_0009E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, lll_geo_0009F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, lll_geo_000A10), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, lll_geo_000A28), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, lll_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, lll_geo_000A60), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, lll_geo_000A90), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, lll_geo_000AA8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, lll_geo_000AC0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, lll_geo_000AD8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, lll_geo_000AF0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART, lll_geo_000B20), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS, lll_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING, lll_geo_000BB0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM, lll_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS, lll_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM, lll_geo_000BF8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1, lll_geo_bowser_puzzle_piece_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2, lll_geo_bowser_puzzle_piece_2), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3, lll_geo_bowser_puzzle_piece_3), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4, lll_geo_bowser_puzzle_piece_4), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5, lll_geo_bowser_puzzle_piece_5), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6, lll_geo_bowser_puzzle_piece_6), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7, lll_geo_bowser_puzzle_piece_7), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8, lll_geo_bowser_puzzle_piece_8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9, lll_geo_bowser_puzzle_piece_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10, lll_geo_bowser_puzzle_piece_10), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11, lll_geo_bowser_puzzle_piece_11), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12, lll_geo_bowser_puzzle_piece_12), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13, lll_geo_bowser_puzzle_piece_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14, lll_geo_bowser_puzzle_piece_14), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK, lll_geo_000DD0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG, lll_geo_000DE8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM, lll_geo_000A78), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE, lll_geo_000B50), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE, lll_geo_000B68), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM, lll_geo_000B80), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM, lll_geo_000B98), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP, lll_geo_000EA8), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, lll_area_1),
		WARP_NODE(241, LEVEL_LLL, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_LLL, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_LLL, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_LLL, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_LLL, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_LLL, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_LLL, 3, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_LLL, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 40, WARP_NO_CHECKPOINT),
		OBJECT(87, -5986, 312, -3493, 0, 0, 0, 0x3000000, bhvBigBully),
		OBJECT(140, -3175, 792, -10841, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(0, 3338, 750, -9188, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 5163, 152, -5952, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -10542, 369, -8519, 0, 107, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -11702, 764, -8906, 0, 32, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2839, 152, -3681, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4784, 152, -931, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2638, 152, 5159, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2675, 152, 1132, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 703, 152, -1236, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3574, 152, -563, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3557, 152, -4478, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 5025, 152, 3989, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -5959, 312, -3497, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -31, 152, -9127, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6997, 152, -547, 0, 0, 0, 0x280000, bhvDeathWarp),
		OBJECT(0, -63, 472, -7941, 0, 0, 0, 0x460000, bhvDeathWarp),
		OBJECT(0, 8499, 152, -13229, 0, 0, 0, 0x500000, bhvDeathWarp),
		OBJECT(137, -6993, 584, -828, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(0, -6991, 986, -32, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(0, 1138, 1132, -7946, 0, 0, 0, 0x3c0000, bhvFadingWarp),
		OBJECT(118, -3956, 160, -8010, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -3846, 152, -9235, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -3297, 152, -9601, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -3571, 152, -5736, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -3380, 160, -7076, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(0, 5038, 416, 5160, 0, 0, 0, 0x1000000, bhvHiddenRedCoinStar),
		OBJECT(57, 4926, -8, -4350, 0, 0, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 4926, -8, -3081, 0, 0, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 3496, -8, -1074, 0, 90, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 2272, -8, -1045, 0, 90, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 717, -8, 3068, 0, 90, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 2107, -8, 3060, 0, 90, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 3735, -8, 3009, 0, 90, 0, 0x0, bhvLllRollingLog),
		OBJECT(57, 4735, -8, 1765, 0, 90, 0, 0x0, bhvLllRollingLog),
		OBJECT(62, -350, 0, -4810, 0, 0, 0, 0x0, bhvLllRotatingHexagonalRing),
		OBJECT(65, 6765, -145, -12776, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, 7626, -145, -11909, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, 1237, -145, -11692, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, 52, -145, -10805, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -1566, -145, -10570, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, 1806, -145, -5760, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, 3065, -145, -5823, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -3956, -145, -8010, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -3380, -145, -7076, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -6563, -145, -10371, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -7839, -145, -9728, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -8582, -145, -8463, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -7548, -145, -7784, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -6682, -145, -6732, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -5874, -145, -5655, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -5603, -145, -1338, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(65, -620, -145, -1020, 0, 0, 0, 0x0, bhvLllTiltingInvertedPyramid),
		OBJECT(124, 8981, 152, -13143, 0, -90, 0, 0x300000, bhvMessagePanel),
		OBJECT(124, -7339, 152, -826, 0, 90, 0, 0x510000, bhvMessagePanel),
		OBJECT(215, 2265, 456, -1763, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 3501, 456, -476, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 739, 456, 2460, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 2111, 456, 3061, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 3770, 456, 3644, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 4750, 456, 1763, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 4930, 456, -3053, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 4937, 456, -4345, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(86, 6017, 152, -8316, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, 5965, 152, -10763, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(86, 4450, 152, -12254, 0, 0, 0, 0x0, bhvSmallBully),
		OBJECT(122, -10351, 1789, -11289, 0, 0, 0, 0x0, bhvStar),
		OBJECT(122, -3606, 4305, 224, 0, 0, 0, 0x4000000, bhvStar),
		OBJECT(0, -3652, 0, 2178, 0, -90, 0, 0x28140000, bhvWarp),
		OBJECT(0, -349, 0, -4810, 0, -90, 0, 0x14320000, bhvWarp),
		OBJECT(22, 8495, 152, -13669, 0, 0, 0, 0xa0000, bhvWarpPipe),
		TERRAIN(lll_area_1_collision),
		MACRO_OBJECTS(lll_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 54),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, lll_area_2),
		WARP_NODE(241, LEVEL_LLL, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_LLL, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 10, WARP_NO_CHECKPOINT),
		OBJECT(0, -1495, 80, -3106, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, -7330, 135, -9089, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, -2355, 0, -11763, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 902, 0, -7418, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, -7596, 135, -4560, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, -2290, 160, -6470, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(137, -2290, 502, -6470, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(0, -2436, 160, -7827, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, -3081, 488, -7789, 0, 0, 0, 0x2000000, bhvHiddenStar),
		OBJECT(0, -1495, 80, -3106, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -7330, 135, -9089, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -2355, 0, -11763, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 902, 0, -7418, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -7596, 135, -4560, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, -2894, 1780, -7062, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		TERRAIN(lll_area_2_collision),
		MACRO_OBJECTS(lll_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 54),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, lll_area_3),
		WARP_NODE(241, LEVEL_LLL, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_LLL, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 10, WARP_NO_CHECKPOINT),
		OBJECT(0, 7464, 2200, -4522, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(137, 8709, 2580, -4549, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(0, 3197, 3400, -4535, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 6172, 2200, -4493, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 2132, 3802, -4530, 0, 0, 0, 0x5000000, bhvStar),
		TERRAIN(lll_area_3_collision),
		MACRO_OBJECTS(lll_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 54),
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
