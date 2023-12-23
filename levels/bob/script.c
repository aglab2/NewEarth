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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _c4_skybox_mio0SegmentRomStart, _c4_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(241, LEVEL_BOB, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_BOB, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_BOB, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_BOB, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_BOB, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_BOB, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 71, WARP_NO_CHECKPOINT),
		OBJECT(140, -3255, 115, 4017, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(195, -4197, 4484, -6369, 0, 90, 0, 0x240000, bhvBobombBuddy),
		OBJECT(102, -5176, -615, -3563, 0, 0, 0, 0x0, bhvChainChomp),
		OBJECT(102, -504, 4118, -6159, 0, 0, 0, 0x0, bhvChainChomp),
		OBJECT(223, -7956, 601, -6828, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, -563, -109, 1313, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, 1560, 2235, 8519, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(223, 9955, 1943, 3954, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, -2672, -573, -3755, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -3239, -204, 1089, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -5192, -381, -1556, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -8858, 373, -6338, 0, 119, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 772, -295, 5255, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 4978, -369, -1669, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 3134, -157, 7602, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -2420, 2516, 8910, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -3965, 4281, 7566, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 5674, 1836, 8835, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -504, 4118, -6159, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -1008, 1244, 4714, 0, -20, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 6587, -245, 7330, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 1743, 44, -1706, 0, 0, 0, 0x3c0000, bhvDeathWarp),
		OBJECT(137, -7232, 5586, -7791, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(0, -3561, 4484, -6355, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, -3433, 4484, -6844, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(0, -3254, 4484, -7506, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(0, -3126, 5474, -7990, 0, 0, 0, 0x320000, bhvFadingWarp),
		OBJECT(47, -2493, 4674, -5949, 0, -15, 0, 0x0, bhvFlipswap_Platform_MOP),
		// OBJECT(42, -3914, 4490, -7386, 0, -15, 0, 0x0, bhvFlipswitch_Panel_MOP),
		// OBJECT(0, -3914, 4884, -7386, 0, 0, 0, 0x0, bhvFlipswitch_Panel_StarSpawn_MOP),
		OBJECT(0, 4626, -246, 550, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 6913, -129, 4662, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 10442, 1948, -826, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -754, -261, -569, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -2031, -96, 2614, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, -3668, -96, 4865, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2933, -96, 5248, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -3456, -96, 5852, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2616, -96, 6255, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2937, -96, 6978, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		// OBJECT(104, -10173, -615, -1755, 0, 90, 0, 0x1020000, bhvKoopa),
		// OBJECT(0, 2204, 3938, -5210, 0, 90, 0, 0x0, bhvKoopaRaceEndpoint),
		OBJECT(124, -3307, 4484, -7164, 0, 77, 0, 0x0, bhvMessagePanel),
		OBJECT(124, 2218, 369, -2030, 0, -90, 0, 0x270000, bhvMessagePanel),
		OBJECT(124, -3048, 115, 4121, 0, -180, 0, 0x540000, bhvMessagePanel),
		OBJECT(123, -2394, 4565, -6880, 0, -15, 0, 0x0, bhvNoteblock_MOP),
		// OBJECT(215, 8329, 492, 7238, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -5176, -373, -3563, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -8477, -78, -31, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 5675, 2482, 10042, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 11899, 2565, -701, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -5377, 1225, -6006, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -504, 4360, -6159, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -7653, 120, -5108, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(152, -2231, 4596, -7788, 0, -15, 0, 0x0, bhvShrink_Platform_MOP),
		// OBJECT(122, 7269, 4413, 9248, 0, 0, 0, 0x2000000, bhvStar),
		// OBJECT(122, -4820, 6106, 5277, 0, 0, 0, 0x3000000, bhvStar),
		// OBJECT(122, 2122, 4289, 10699, 0, 0, 0, 0x5000000, bhvStar),
		OBJECT(22, 1758, 369, -2655, 0, 0, 0, 0xa0000, bhvWarpPipe),
		OBJECT(107, 8329, 250, 7238, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(107, -8477, -320, -31, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(107, 5675, 2240, 10042, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(107, 11899, 2323, -701, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(107, -5377, 983, -6006, 0, 0, 0, 0x0, bhvWoodenPost),
		OBJECT(107, -7653, -122, -5108, 0, 0, 0, 0x0, bhvWoodenPost),
		
		OBJECT(122, -1121, 53, 7974, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 12750, 5899, 2070, 0, 0, 0, 0x1000000, bhvStar),

		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x3b),
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
