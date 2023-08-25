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
#include "levels/totwc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_totwc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _totwc_segment_7SegmentRomStart, _totwc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, totwc_geo_000160), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, totwc_area_1),
		WARP_NODE(241, LEVEL_TOTWC, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_TOTWC, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CCM, 1, 20, WARP_NO_CHECKPOINT),
		OBJECT(195, 3104, 582, -5885, 0, 0, 0, 0x0, bhvBobombBuddyOpensCannon),
		OBJECT(201, -3375, 665, -5582, 0, 0, 0, 0x64820000, bhvCannonClosed),
		OBJECT(201, -7482, 2161, 3942, 0, 0, 0, 0x0, bhvCannonClosed),
		OBJECT(85, 6853, 741, -7446, 0, 0, 0, 0x0, bhvCapSwitch),
		OBJECT(0, 299, 249, 577, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(137, -4069, 1033, -4873, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, -7914, 952, -12802, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, 12418, 952, -6363, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, 9395, 952, 4628, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, -8140, 2479, 3927, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, 1175, 6525, -5269, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, -9968, 1662, -3117, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, 3426, 952, -13750, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(0, 635, 1003, -5572, 0, 0, 0, 0x1000000, bhvHiddenRedCoinStar),
		OBJECT(124, 633, 582, -5942, 0, 0, 0, 0x3b0000, bhvMessagePanel),
		OBJECT(215, 137, 253, 1380, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 7339, 803, -6911, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 11926, 552, -6423, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 9787, 445, 4370, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 3449, 547, -13455, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -8319, 538, -12897, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -9565, 1155, -3330, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -6708, 2080, 3947, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(122, 293, 6303, -5406, 0, 0, 0, 0x0, bhvStar),
		OBJECT(22, 914, 216, 889, 0, -180, 0, 0xa0000, bhvWarpPipe),
		TERRAIN(totwc_area_1_collision),
		MACRO_OBJECTS(totwc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 4),
		TERRAIN_TYPE(TERRAIN_SNOW),
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
