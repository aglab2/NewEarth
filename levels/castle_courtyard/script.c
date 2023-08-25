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
#include "levels/castle_courtyard/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_courtyard_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 2, 150, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_CASTLE_COURTYARD, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_WDW, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_CASTLE_COURTYARD, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_CASTLE, 2, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_TTM, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_COURTYARD, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE_COURTYARD, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 80, WARP_NO_CHECKPOINT),
		OBJECT(0, -5922, 400, 7438, 0, 90, 0, 0x3c0000, bhvDeathWarp),
		OBJECT(0, 6094, 400, 7438, 0, -90, 0, 0x500000, bhvDeathWarp),
		OBJECT(38, 89, 0, 5022, 0, -180, 0, 0x3c000000, bhvDoor),
		OBJECT(37, 166, 0, 9855, 0, -180, 0, 0xa0000, bhvDoorWarp),
		OBJECT(37, 18, 0, 9855, 0, 0, 0, 0x320000, bhvDoorWarp),
		OBJECT(124, 81, 0, 8244, 0, 0, 0, 0x3f0000, bhvMessagePanel),
		OBJECT(120, 81, 46, 7447, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, 91, 0, 5171, 0, 0, 0, 0x1e0000, bhvSpinAirborneWarp),
		OBJECT(0, 88, 0, 4778, 0, 0, 0, 0x140000, bhvWarp),
		OBJECT(0, 6493, 400, 7437, 0, -90, 0, 0x280000, bhvWarp),
		OBJECT(0, -6318, 400, 7435, 0, 90, 0, 0x460000, bhvWarp),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 35),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, castle_courtyard_area_2),
		WARP_NODE(241, LEVEL_CASTLE, 2, 150, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE_COURTYARD, 3, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_COURTYARD, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		OBJECT(38, -4187, 0, 3594, 0, -180, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -4187, 1000, -237, 0, 0, 0, 0x1e0000, bhvDoorWarp),
		OBJECT(0, -4197, 0, 3251, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		TERRAIN(castle_courtyard_area_2_collision),
		MACRO_OBJECTS(castle_courtyard_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 35),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, castle_courtyard_area_3),
		WARP_NODE(241, LEVEL_CASTLE, 2, 150, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_CASTLE_COURTYARD, 4, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_CASTLE_COURTYARD, 4, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_CASTLE_COURTYARD, 2, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_CASTLE_COURTYARD, 3, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE_COURTYARD, 3, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_TTC, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, 1467, 0, -6241, 0, 0, 0, 0x280000, bhvDeathWarp),
		OBJECT(38, 1482, 0, -6453, 0, -180, 0, 0x5a000000, bhvDoor),
		OBJECT(38, 1482, 0, -3626, 0, 0, 0, 0x320000, bhvDoorWarp),
		OBJECT(38, -517, 800, 1174, 0, 0, 0, 0x3c0000, bhvDoorWarp),
		OBJECT(38, 3482, 800, 1174, 0, 0, 0, 0x460000, bhvDoorWarp),
		OBJECT(0, 1470, 0, -4680, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 1467, 0, -6241, 0, 0, 0, 0x1e0000, bhvSpinAirborneWarp),
		OBJECT(0, 1482, 0, -6696, 0, 0, 0, 0x140000, bhvWarp),
		TERRAIN(castle_courtyard_area_3_collision),
		MACRO_OBJECTS(castle_courtyard_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 35),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, castle_courtyard_area_4),
		WARP_NODE(241, LEVEL_CASTLE, 2, 150, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_CASTLE_COURTYARD, 4, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_CASTLE_COURTYARD, 4, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_CASTLE_COURTYARD, 4, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_PSS, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_CASTLE_COURTYARD, 3, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_CASTLE_COURTYARD, 3, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_THI, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE_COURTYARD, 4, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_BITS, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 4, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, 11856, 800, -4795, 0, -180, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(0, 14408, 0, 430, 0, -90, 0, 0x5a0000, bhvDeathWarp),
		OBJECT(0, 6847, 510, 442, 0, 90, 0, 0x640000, bhvDeathWarp),
		OBJECT(38, 13852, 0, 4245, 0, -180, 0, 0x320000, bhvDoorWarp),
		OBJECT(38, 9853, 0, 4246, 0, -180, 0, 0x3c0000, bhvDoorWarp),
		OBJECT(38, 14668, 0, 431, 0, 90, 0, 0x460000, bhvDoorWarp),
		OBJECT(120, 11845, 46, 434, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, 11844, 180, 2816, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 14408, 0, 430, 0, -90, 0, 0x500000, bhvSpinAirborneWarp),
		OBJECT(213, 11771, 0, -1251, 0, 0, 0, 0x46000000, bhvStarDoor),
		OBJECT(213, 11926, 0, -1252, 0, -180, 0, 0x46000000, bhvStarDoor),
		OBJECT(23, 11848, 0, 3639, 0, 0, 0, 0x53000000, bhvTree),
		OBJECT(0, 11854, 204, -5574, 0, 0, 0, 0x1e140000, bhvWarp),
		OBJECT(0, 6450, 400, 422, 0, 90, 0, 0x280000, bhvWarp),
		TERRAIN(castle_courtyard_area_4_collision),
		MACRO_OBJECTS(castle_courtyard_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 35),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, castle_courtyard_area_5),
		WARP_NODE(241, LEVEL_CASTLE_GROUNDS, 1, 160, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_CASTLE, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_GROUNDS, 1, 151, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_GROUNDS, 1, 150, WARP_NO_CHECKPOINT),
		OBJECT(0, 0, 0, 0, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(37, -4020, 0, -73, 0, -90, 0, 0xa0000, bhvDoorWarp),
		OBJECT(37, -4020, 0, 75, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(37, 4017, 0, -74, 0, -90, 0, 0x1e0000, bhvDoorWarp),
		OBJECT(37, 4017, 0, 73, 0, 90, 0, 0x280000, bhvDoorWarp),
		OBJECT(124, 0, 0, -700, 0, 0, 0, 0x80000, bhvMessagePanel),
		TERRAIN(castle_courtyard_area_5_collision),
		MACRO_OBJECTS(castle_courtyard_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 36),
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
