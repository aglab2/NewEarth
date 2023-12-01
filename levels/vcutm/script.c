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
#include "levels/vcutm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_vcutm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x07, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _vcutm_segment_7SegmentRomStart, _vcutm_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _vc_skybox_mio0SegmentRomStart, _vc_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_SEESAW_PLATFORM, vcutm_geo_0001F0), 
	LOAD_MODEL_FROM_GEO(MODEL_VCUTM_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, vcutm_area_1),
		WARP_NODE(241, LEVEL_VCUTM, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_VCUTM, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_VCUTM, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_VCUTM, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_SL, 2, 20, WARP_NO_CHECKPOINT),
		OBJECT(195, -139, 1368, 2498, 0, 0, 0, 0x570000, bhvBobombBuddy),
		OBJECT(0, -831, 216, -37, 0, 0, 0, 0x280000, bhvDeathWarp),
		OBJECT(137, -1908, 750, -757, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(0, 3665, 216, 1228, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, -7837, 1932, 229, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(124, -2008, 216, 17, 0, 90, 0, 0x3c0000, bhvMessagePanel),
		// OBJECT(215, 3752, 3848, 509, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 2266, 1224, 834, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2147, 1032, 1418, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 570, 216, -1237, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2335, 3336, 6904, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1158, 1368, 5397, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 64, 2952, 2511, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -522, 1160, -373, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(101, -1558, 216, 957, 0, 0, 0, 0x0, bhvScuttlebug),
		OBJECT(101, 1179, 216, 861, 0, 0, 0, 0x0, bhvScuttlebug),
		OBJECT(101, -1674, 1368, 6155, 0, 0, 0, 0x0, bhvScuttlebug),
		// OBJECT(122, -729, 3014, -371, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(0, -833, 223, -365, 0, 0, 0, 0xa0000, bhvWarp),
		
		OBJECT(122, 3741, 3174, 330, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, -2577, 2814, 6635, 0, 0, 0, 0x1000000, bhvStar),

		TERRAIN(vcutm_area_1_collision),
		MACRO_OBJECTS(vcutm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 56),
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
