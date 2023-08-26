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
#include "levels/thi/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_thi_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _thi_segment_7SegmentRomStart, _thi_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, thi_geo_0005F0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_HUGE_ISLAND_TOP, thi_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_TINY_ISLAND_TOP, thi_geo_0005C8), 
    LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR,       hazy_maze_door_geo),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, thi_area_1),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 4, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_THI, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_THI, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_THI, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_THI, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_THI, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_THI, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_THI, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_THI, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_THI, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 4, 40, WARP_NO_CHECKPOINT),
		OBJECT(0, 3059, 1000, -1906, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 3927, 1000, 625, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 5953, 1000, 1216, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 5946, 1000, -998, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 6944, 1051, -1992, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 8072, 1051, -927, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 8811, 1051, 466, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 3051, 1000, -373, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 9067, 1000, -1943, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 7542, 1000, 1222, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 5240, 1000, -2120, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 4945, 1000, -47, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(140, -1256, 2600, 900, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(195, 1062, 1000, -2609, 0, 0, 0, 0x560000, bhvBobombBuddy),
		OBJECT(0, 0, 600, 8161, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -10, 1000, 1077, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -11, 1000, -1493, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3731, 2000, 5282, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -3690, 4640, 6616, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -1943, 1489, -390, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -2859, -320, -5228, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -1213, 1000, 1756, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1250, 1000, -2503, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -5939, 2320, -4530, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4769, 1884, -10763, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8411, 2920, -10541, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -607, 1000, -366, 0, 90, 0, 0x280000, bhvDeathWarp),
		OBJECT(32, -783, 1000, -372, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(0, -12, 404, 658, 0, -180, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(0, 666, 4720, 6290, 0, 0, 0, 0x320000, bhvFadingWarp),
		OBJECT(0, -11, 1768, -374, 0, 0, 0, 0x3c0000, bhvFadingWarp),
		OBJECT(0, -5952, 2880, -2176, 0, 0, 0, 0x460000, bhvFadingWarp),
		OBJECT(0, -11, 1756, -370, 0, 0, 0, 0x500000, bhvFadingWarp),
		OBJECT(0, 9390, 2920, -7730, 0, 0, 0, 0x5a0000, bhvFadingWarp),
		OBJECT(0, -11, 1756, -370, 0, 0, 0, 0x640000, bhvFadingWarp),
		OBJECT(118, -1250, 2600, 351, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 2600, -282, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 2600, -806, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 2600, -1346, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 2600, -1825, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 2600, -2405, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 2306, -2405, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1250, 1976, -2405, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(0, 1250, 1384, -358, 0, 0, 0, 0x1000000, bhvHiddenStar),
		OBJECT(0, 3051, 1000, -373, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 9067, 1000, -1943, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 7542, 1000, 1222, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 5240, 1000, -2120, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 4945, 1000, -47, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(124, -12, 1200, 3066, 0, 0, 0, 0x1e0000, bhvMessagePanel),
		OBJECT(123, -12, -129, -1370, 0, 0, 0, 0x3c0000, bhvNoteblock_MOP),
		OBJECT(122, -5944, 3228, -2828, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(122, 688, 5056, 7063, 0, 0, 0, 0x0, bhvStar),
		OBJECT(122, 9395, 3226, -8639, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, -3, 60, -358, 0, 0, 0, 0x5000000, bhvStar),
		OBJECT(0, -12, 600, 7613, 0, -180, 0, 0xa0000, bhvWarp),
		TERRAIN(thi_area_1_collision),
		MACRO_OBJECTS(thi_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 47),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, thi_area_2),
		WARP_NODE(241, LEVEL_THI, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_THI, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_THI, 1, 20, WARP_NO_CHECKPOINT),
		OBJECT(32, 0, 0, -3482, 0, -180, 0, 0xa0000, bhvDoorWarp),
		OBJECT(0, -3401, 2560, -3106, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 750, 324, -2068, 0, 0, 0, 0x4000000, bhvHiddenRedCoinStar),
		OBJECT(215, -602, -400, -3252, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 2591, -1160, -3246, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1873, -1000, -1909, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1408, -400, -1843, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 3552, 800, -2543, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 280, 1200, -1837, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -3477, 1760, -3263, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2354, 960, -1852, 0, 0, 0, 0x0, bhvRedCoin),
		TERRAIN(thi_area_2_collision),
		MACRO_OBJECTS(thi_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 47),
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
