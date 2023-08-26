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
#include "actors/group12.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bowser_1/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bowser_1_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bowser_1_segment_7SegmentRomStart, _bowser_1_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group12_yay0SegmentRomStart, _group12_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group12_geoSegmentRomStart, _group12_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bowser_1_segment_7SegmentRomStart, _bowser_1_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _b1_skybox_mio0SegmentRomStart, _b1_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bowser_1_yellow_sphere_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bowser_1_area_1),
		WARP_NODE(241, LEVEL_BITDW, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_GROUNDS, 1, 130, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BITDW, 1, 30, WARP_NO_CHECKPOINT),
		OBJECT(38, 0, 7052, -4016, 0, 0, 0, 0x140000, bhvDoorWarp),
		OBJECT(180, 1000, 7190, 0, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -1000, 7190, 0, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(86, 0, 7052, -432, 0, 0, 0, 0x0, bhvKingBobomb),
		OBJECT(0, -11, 7052, 3591, 0, -90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 10, 5, 4902, 0, 0, 20, 115, RM_Scroll_Texture),
		TERRAIN(bowser_1_area_1_collision),
		MACRO_OBJECTS(bowser_1_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 17),
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
