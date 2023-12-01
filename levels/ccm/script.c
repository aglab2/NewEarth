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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _c4_skybox_mio0SegmentRomStart, _c4_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(241, LEVEL_CCM, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_CCM, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_CCM, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_CCM, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CCM, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_TOTWC, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 70, WARP_NO_CHECKPOINT),
		OBJECT(140, -6629, 320, -11784, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(0, -6668, 320, -13111, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -1206, 320, -14986, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 3622, 1568, -9434, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2696, 3400, -13919, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -10603, 1779, -1295, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -13976, 4819, -3845, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -9059, 1619, -7083, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 1401, 320, -14354, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -6407, 1459, -8295, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -7748, 1459, -1574, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -13924, 4668, -5429, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -12781, 4648, -2363, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -13812, 4819, -6670, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -12742, 4672, -7698, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 182, 320, -13681, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(0, 4071, 1568, -10449, 0, 0, 0, 0x320000, bhvDeathWarp),
		OBJECT(38, 170, 320, -13985, 0, 0, 0, 0xa0000, bhvDoorWarp),
		OBJECT(137, 2742, 3796, -13752, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(207, -6295, 3520, -16130, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(89, -130, 320, -10512, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -4933, 320, -15138, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -1829, 320, -9762, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, 2413, 1848, -10455, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, 4088, 3120, -13314, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -6368, 1459, -8221, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -8057, 1459, -1735, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -15784, 6739, -7137, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -16097, 6259, -3543, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -13952, 4819, -3961, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -10512, 1779, -1251, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -6477, 1459, -3573, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -8991, 1619, -7077, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -7240, 3360, -15468, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(118, -6252, 382, -12171, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -5944, 382, -13234, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -5666, 382, -15224, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -4497, 382, -15604, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, -6517, 3210, -14018, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -6317, 3210, -14018, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -6517, 3210, -13818, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -6317, 3210, -13818, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -5717, 3410, -13818, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -5517, 3410, -13818, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -5717, 3410, -13618, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -5517, 3410, -13618, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -5117, 3610, -13418, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -5117, 3610, -13618, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4917, 3610, -13618, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4917, 3610, -13418, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4717, 3810, -13218, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4517, 3810, -13218, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4517, 3810, -13018, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -4717, 3810, -13018, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(194, -3154, 4183, -12945, 0, 0, 0, 0x20000, bhvHomingAmp),
		OBJECT(124, 657, 320, -13490, 0, -90, 0, 0x350000, bhvMessagePanel),
		OBJECT(123, -10870, 2159, -9123, 0, 0, 0, 0x8c0000, bhvNoteblock_MOP),
		OBJECT(123, -15024, 4879, -4204, 0, 0, 0, 0x500000, bhvNoteblock_MOP),
		// OBJECT(215, -5310, 1712, -3194, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -4310, 1962, -1968, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -4434, 1962, -4266, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -3346, 1587, -3196, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2435, 2211, -2144, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2698, 2339, -4920, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2498, 1837, -3200, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -930, 2461, -3616, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, 4071, 1568, -10449, 0, 0, 0, 0x3c0000, bhvSpinAirborneWarp),
		// OBJECT(122, 1997, 3733, -14634, 0, 0, 0, 0x0, bhvStar),
		// OBJECT(122, -14372, 7320, -9433, 0, 0, 0, 0x4000000, bhvStar),
		OBJECT(0, 3726, 1602, -11108, 0, -14, 0, 0xa280000, bhvWarp),
		OBJECT(22, -15834, 6822, -10937, 0, 0, 0, 0x140000, bhvWarpPipe),
		// OBJECT(103, -2754, 4183, -12937, 0, 90, 0, 0x1000000, bhvWhompKingBoss),
		
		OBJECT(122, -2502, 3318, -12915, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, -6873, 527, -3582, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -15942, 6335, -10715, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 24),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(241, LEVEL_CCM, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CCM, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		OBJECT(195, 325, 960, -2406, 0, -180, 0, 0x220000, bhvBobombBuddy),
		OBJECT(0, 73, 0, -812, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, -433, 1320, -2012, 0, 0, 0, 0x5000000, bhvStar),
		OBJECT(0, 151, 90, -1284, 0, -14, 0, 0xa140000, bhvWarp),
		
		OBJECT(122, -589, 975, 429, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 51),
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
