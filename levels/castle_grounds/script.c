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
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group5_yay0SegmentRomStart, _group5_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(200, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(170, LEVEL_CASTLE_GROUNDS, 1, 170, WARP_NO_CHECKPOINT),
		WARP_NODE(171, LEVEL_BBH, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_JRB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(160, LEVEL_CASTLE_GROUNDS, 1, 160, WARP_NO_CHECKPOINT),
		WARP_NODE(151, LEVEL_CASTLE_COURTYARD, 5, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(150, LEVEL_CASTLE_COURTYARD, 5, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(140, LEVEL_BITDW, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(130, LEVEL_CASTLE_GROUNDS, 1, 130, WARP_NO_CHECKPOINT),
		WARP_NODE(110, LEVEL_CASTLE_GROUNDS, 1, 110, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_CASTLE_GROUNDS, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_WF, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(71, LEVEL_BOB, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_CCM, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_CASTLE_GROUNDS, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_WMOTR, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_CASTLE_GROUNDS, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE_GROUNDS, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_GROUNDS, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(195, 3443, 442, 3510, 0, -45, 0, 0x250000, bhvBobombBuddy),
		OBJECT(0, -763, 246, 6792, 0, -180, 0, 0x10000, bhvEndPeach),
		OBJECT(223, -7611, 0, -1473, 0, 0, 0, 0x0, bhvChuckya),
		OBJECT(0, -9083, 458, 11052, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6220, 208, -1799, 0, 70, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3320, 0, -7333, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -4140, 0, -511, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -12387, 1688, -6026, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -763, 246, 6792, 0, -180, 0, 0x140000, bhvDeathWarp),
		OBJECT(0, -4748, 0, -11616, 0, 0, 0, 0x6e0000, bhvDeathWarp),
		OBJECT(0, 1017, 1600, -6516, 0, 0, 0, 0xa00000, bhvDeathWarp),
		OBJECT(31, -5889, 832, -8180, 0, 0, 0, 0x7000000, bhvDoor),
		OBJECT(38, -4673, 0, -12478, 0, 0, 0, 0xf780000, bhvDoor),
		OBJECT(37, 928, 1600, -6811, 0, 0, 0, 0x2960000, bhvDoorWarp),
		OBJECT(37, 1082, 1600, -6811, 0, -180, 0, 0x2970000, bhvDoorWarp),
		OBJECT(38, -12720, 1688, -3443, 0, 0, 0, 0x460000, bhvDoorWarp),
		OBJECT(137, -10606, 390, 6807, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(207, -5378, -2459, 4136, 0, 0, 0, 0x0, bhvFloorSwitchGrills),
		OBJECT(0, -282, 4, 2484, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -3087, 0, -179, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, -7031, 0, 690, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 1843, 865, -1558, 0, 0, 0, 0x0, bhvHiddenRedCoinStar),
		OBJECT(124, 2868, 0, -6760, 0, 90, 0, 0xf0000, bhvMessagePanel),
		OBJECT(124, -1020, 246, 6642, 0, 90, 0, 0x200000, bhvMessagePanel),
		OBJECT(124, -455, 246, 6200, 0, 0, 0, 0x60000, bhvMessagePanel),
		OBJECT(100, -4148, 480, -520, 0, 0, 0, 0x0, bhvMips),
		OBJECT(123, 2303, 65, -5391, 0, 0, 0, 0x640000, bhvNoteblock_MOP),
		OBJECT(0, 2731, 0, -6384, 0, -90, 0, 0x0, bhvOpenableGrill),
		OBJECT(0, -5780, 0, 8463, 0, 0, 0, 0x0, bhvPokey),
		OBJECT(215, -3898, 1328, -4009, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -12933, 1688, -2002, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5225, 0, -14174, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -11173, 960, 10065, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -11548, 770, 6120, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 2606, 1800, -7390, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 652, 1200, -128, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -9269, 208, -274, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -763, 246, 6792, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 3027, 0, -5955, 0, 0, 0, 0x320000, bhvSpinAirborneWarp),
		OBJECT(0, 1853, 64, -2221, 0, -180, 0, 0x5a0000, bhvSpinAirborneWarp),
		OBJECT(0, -4674, 0, -12258, 0, 0, 0, 0x820000, bhvSpinAirborneWarp),
		OBJECT(0, -5888, 832, -8391, 0, -180, 0, 0xaa0000, bhvSpinAirborneWarp),
		OBJECT(27, -2834, 0, 8289, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -7585, 0, 12473, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -2969, 0, 1857, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -6623, 0, 297, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -10622, 0, 2002, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -9606, 0, 4465, 0, 0, 0, 0x0, bhvTree),
		OBJECT(27, -9110, 0, 8493, 0, 0, 0, 0x0, bhvTree),
		OBJECT(0, 2335, 0, -6374, 0, 0, 0, 0x143c0000, bhvWarp),
		OBJECT(0, -5892, 832, -7943, 0, 0, 0, 0xab0000, bhvWarp),
		OBJECT(0, 1846, 132, -1666, 0, 0, 0, 0xa500000, bhvWarp),
		OBJECT(0, -4670, 0, -12719, 0, 0, 0, 0x8c0000, bhvWarp),
		OBJECT(22, 3790, 442, 3249, 0, 0, 0, 0x470000, bhvWarpPipe),
		OBJECT(22, -8272, 0, 12093, 0, 0, 0, 0x640000, bhvWarpPipe),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 3),
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
