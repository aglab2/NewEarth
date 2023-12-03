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
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group5_yay0SegmentRomStart, _group5_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(241, LEVEL_JRB, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_JRB, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_JRB, 3, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_JRB, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(41, LEVEL_JRB, 4, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_JRB, 2, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_JRB, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_JRB, 2, 10, WARP_NO_CHECKPOINT),
		OBJECT(140, 4974, 136, 1610, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(0, -3400, 0, -2542, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2590, 0, -504, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1001, 480, -4214, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1666, 458, 1150, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -2454, 0, 3138, 0, 90, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -6792, 153, 2027, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 1964, 0, 1608, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -5252, 131, -4493, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2667, 91, 6000, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(0, -2263, 458, 1113, 0, 0, 0, 0x280000, bhvDeathWarp),
		OBJECT(0, -2263, 458, 1113, 0, 0, 0, 0x290000, bhvDeathWarp),
		OBJECT(0, -5453, 456, 3786, 0, 90, 0, 0x460000, bhvDeathWarp),
		OBJECT(137, -3400, 426, -2542, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, 4867, 528, 6790, 0, 90, 0, 0x60000, bhvExclamationBox),
		OBJECT(180, 2102, 126, -2300, 0, 0, 0, 0, bhvFireSpitter),
		OBJECT(180, -1091, 746, 179, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -1091, 746, -1017, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 5933, 126, -2788, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(207, -6930, -646, -1347, 0, 0, 0, 0x0, bhvFloorSwitchAnimatesObject),
		OBJECT(118, 5328, 267, 2926, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 6282, 267, 3765, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 5381, 268, 4696, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 4528, 268, 3868, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 4744, 267, 3271, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 4809, 279, 4391, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 5943, 272, 3167, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 5979, 269, 4409, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(124, 2659, 91, 5494, 0, 0, 0, 0x120000, bhvMessagePanel),
		OBJECT(0, -1001, 137, 5175, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, 1010, 230, 3669, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, -4809, 97, 4470, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(0, -5358, 0, -3282, 0, 0, 0, 0x0, bhvPokey),
		// OBJECT(215, 1619, 0, -877, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 4027, 0, -1359, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 5953, 0, -388, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 6901, 0, -2790, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 4511, 480, -4240, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 2106, 480, -4242, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -290, 0, -2315, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -1729, 0, -3756, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(122, -2269, 1046, -902, 0, 0, 0, 0x0, bhvStar),
		OBJECT(27, 4293, 230, 5178, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 1082, 91, 6668, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 3764, 117, 1901, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -78, 0, 2319, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -4197, 65, 5170, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -6403, 321, 3542, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -4142, 0, 2000, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -8410, 0, -1510, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -5495, 0, -129, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -6380, 11, -4128, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -2670, 304, -5119, 0, 0, 0, 0x0, bhvTree),
		OBJECT(0, -2263, 458, 724, 0, 0, 0, 0xa140000, bhvWarp),
		OBJECT(0, -5690, -280, 3786, 0, 0, 0, 0x1e320000, bhvWarp),
		OBJECT(0, 3094, 222, 3049, 0, 0, 0, 0xa3c0000, bhvWarp),
		OBJECT(22, 2669, 91, 6700, 0, -180, 0, 0xa0000, bhvWarpPipe),
		
		OBJECT(122, -2271, 2710, -139, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 735, 952, -1681, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, 8816, 1923, -2031, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, -1027, -163, -4238, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 38),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, jrb_area_2),
		WARP_NODE(241, LEVEL_JRB, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_JRB, 4, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_JRB, 4, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_JRB, 1, 20, WARP_NO_CHECKPOINT),
		OBJECT(137, -94, 1317, 1821, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(0, 101, 569, -1151, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(124, 114, 0, -427, 0, -180, 0, 0x100000, bhvMessagePanel),
		OBJECT(0, 110, 30, -1928, 0, 0, 0, 0xa0a0000, bhvWarp),
		OBJECT(0, 101, 84, 1253, 0, 0, 0, 0x14140000, bhvWarp),
		
		OBJECT(122, -1787, 1440, 154, 0, 0, 0, 0x5000000, bhvStar),

		TERRAIN(jrb_area_2_collision),
		MACRO_OBJECTS(jrb_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 10),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, jrb_area_3),
		WARP_NODE(241, LEVEL_JRB, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_JRB, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 0, WARP_NO_CHECKPOINT),
		OBJECT(124, 0, -1200, 3643, 0, 0, 0, 0x150000, bhvMessagePanel),
		OBJECT(0, 0, -164, 4183, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, 0, -876, -4158, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(27, -406, -1432, 2562, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 536, -1432, 2342, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -253, -1432, 1370, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 533, -1432, 691, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -550, -1432, 154, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 402, -1432, -671, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -442, -1432, -1383, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, 432, -1432, -1935, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -411, -1432, -2645, 0, 0, 0, 0x0, bhvTree),
		OBJECT(0, 0, -874, -5449, 0, 0, 0, 0x1e140000, bhvWarp),
		
		OBJECT(122, 1105, -102, 1437, 0, 0, 0, 0x4000000, bhvStar),

		TERRAIN(jrb_area_3_collision),
		MACRO_OBJECTS(jrb_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 10),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, jrb_area_4),
		WARP_NODE(241, LEVEL_JRB, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_JRB, 2, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 4, 0, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_WOODEN_SIGNPOST, -8807, -2791, -1466, 0, 0, 0, 0x5e5e5e5e, bhvMessagePanel),
		OBJECT(0, -8799, -2784, 1645, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, -8807, -2791, 1066, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		
		OBJECT(122, -8277, -3662, 1647, 0, 0, 0, 0x6000000, bhvStar),

		TERRAIN(jrb_area_4_collision),
		MACRO_OBJECTS(jrb_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 10),
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
