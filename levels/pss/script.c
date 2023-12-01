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
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 4, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_CASTLE_COURTYARD, 4, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_COURTYARD, 4, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(17, LEVEL_PSS, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(16, LEVEL_PSS, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_PSS, 1, 16, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_PSS, 1, 15, WARP_NO_CHECKPOINT),
		WARP_NODE(15, LEVEL_PSS, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_PSS, 1, 14, WARP_NO_CHECKPOINT),
		WARP_NODE(14, LEVEL_PSS, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_PSS, 1, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_PSS, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_PSS, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_PSS, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 4, 80, WARP_NO_CHECKPOINT),
		OBJECT(38, -1387, -4140, -999, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1387, -2684, -999, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1387, -1228, -999, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1387, 228, -999, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1387, 1684, -999, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1387, 3140, -999, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, 1445, -4140, -1498, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, -4140, -498, 0, -90, 0, 0xc0000, bhvDoorWarp),
		OBJECT(38, 1445, -2684, -1752, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, -2684, -1251, 0, -90, 0, 0xd0000, bhvDoorWarp),
		OBJECT(38, 1445, -2684, -751, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, -2684, -251, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, -1228, -251, 0, -90, 0, 0xe0000, bhvDoorWarp),
		OBJECT(38, 1445, -1228, -751, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, -1228, -1251, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, -1228, -1752, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 228, -1752, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 228, -1252, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 228, -751, 0, -90, 0, 0xf0000, bhvDoorWarp),
		OBJECT(38, 1445, 228, -251, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 1684, -1752, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 1684, -1251, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 1684, -751, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 1684, -251, 0, -90, 0, 0x100000, bhvDoorWarp),
		OBJECT(38, 1445, 3140, -1752, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 3140, -1251, 0, -90, 0, 0x110000, bhvDoorWarp),
		OBJECT(38, 1445, 3140, -751, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1445, 3140, -251, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(0, -1189, -4140, -1007, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, -1189, -2684, -1007, 0, 90, 0, 0x1e0000, bhvSpinAirborneWarp),
		OBJECT(0, -1189, -1228, -1007, 0, 90, 0, 0x280000, bhvSpinAirborneWarp),
		OBJECT(0, -1189, 228, -1007, 0, 90, 0, 0x320000, bhvSpinAirborneWarp),
		OBJECT(0, -1189, 1684, -1007, 0, 90, 0, 0x3c0000, bhvSpinAirborneWarp),
		OBJECT(0, -1189, 3140, -1007, 0, 90, 0, 0x460000, bhvSpinAirborneWarp),
		OBJECT(221, 692, -4140, -1120, 0, -110, 0, 0x81000000, bhvToadMessage),
		OBJECT(221, 692, -2684, -1120, 0, -110, 0, 0x82000000, bhvToadMessage),
		OBJECT(221, 692, -1228, -1120, 0, -110, 0, 0x83000000, bhvToadMessage),
		OBJECT(221, 692, 228, -1120, 0, -110, 0, 0x84000000, bhvToadMessage),
		OBJECT(221, 692, 1684, -1120, 0, -110, 0, 0x85000000, bhvToadMessage),
		OBJECT(221, 692, 3140, -1120, 0, -110, 0, 0x86000000, bhvToadMessage),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 19),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, pss_area_2),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 4, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_COURTYARD, 4, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_CASTLE_COURTYARD, 4, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_PSS, 2, 23, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_PSS, 2, 22, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_PSS, 2, 21, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_PSS, 2, 19, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_PSS, 2, 18, WARP_NO_CHECKPOINT),
		WARP_NODE(23, LEVEL_PSS, 2, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(22, LEVEL_PSS, 2, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(21, LEVEL_PSS, 2, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(19, LEVEL_PSS, 2, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(18, LEVEL_PSS, 2, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_PSS, 1, 17, WARP_NO_CHECKPOINT),
		OBJECT(38, -1177, -4140, -601, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1177, -2684, -601, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1177, -1228, -601, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1177, 228, -601, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1177, 1684, -601, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, -1177, 3140, -601, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, 1653, 3340, -600, 0, -90, 0, 0x140000, bhvDoorWarp),
		OBJECT(38, 1652, -4140, -1350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -4140, -851, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -4140, -350, 0, -90, 0, 0x120000, bhvDoorWarp),
		OBJECT(38, 1652, -4140, 150, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -2684, -1350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -2684, -851, 0, -90, 0, 0x130000, bhvDoorWarp),
		OBJECT(38, 1652, -2684, -350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -2684, 150, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -1228, -1350, 0, -90, 0, 0x150000, bhvDoorWarp),
		OBJECT(38, 1652, -1228, -851, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -1228, -350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, -1228, 150, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, 228, -1350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, 228, -851, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, 228, -350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, 228, 150, 0, -90, 0, 0x160000, bhvDoorWarp),
		OBJECT(38, 1652, 1684, -1350, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, 1684, -851, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(38, 1652, 1684, -350, 0, -90, 0, 0x170000, bhvDoorWarp),
		OBJECT(38, 1652, 1684, 150, 0, -90, 0, 0xb0000, bhvDoorWarp),
		OBJECT(0, -961, -4140, -602, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, -961, -2684, -602, 0, 90, 0, 0x1e0000, bhvSpinAirborneWarp),
		OBJECT(0, -961, -1228, -602, 0, 90, 0, 0x280000, bhvSpinAirborneWarp),
		OBJECT(0, -961, 228, -602, 0, 90, 0, 0x320000, bhvSpinAirborneWarp),
		OBJECT(0, -961, 1684, -602, 0, 90, 0, 0x3c0000, bhvSpinAirborneWarp),
		OBJECT(0, -762, 3140, -602, 0, 90, 0, 0x460000, bhvSpinAirborneWarp),
		// OBJECT(122, 838, 3604, -602, 0, 0, 0, 0x0, bhvStar),
		OBJECT(221, 929, -4140, -701, 0, -110, 0, 0x87000000, bhvToadMessage),
		OBJECT(221, 929, -2684, -701, 0, -110, 0, 0x88000000, bhvToadMessage),
		OBJECT(221, 929, -1228, -701, 0, -110, 0, 0x89000000, bhvToadMessage),
		OBJECT(221, 929, 228, -701, 0, -110, 0, 0x8a000000, bhvToadMessage),
		OBJECT(221, 929, 1684, -701, 0, -110, 0, 0x8b000000, bhvToadMessage),
		OBJECT(221, 350, 3340, -1093, 0, -110, 0, 0x8c000000, bhvToadMessage),
		TERRAIN(pss_area_2_collision),
		MACRO_OBJECTS(pss_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 19),
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
