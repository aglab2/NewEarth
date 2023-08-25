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
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		WARP_NODE(241, LEVEL_WMOTR, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_CASTLE_GROUNDS, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_WMOTR, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_WMOTR, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_WMOTR, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, 4079, 1800, 1969, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 5875, 1800, 1968, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 5876, 1800, 3764, 0, 0, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 5170, 1800, 2872, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 4069, 1800, 2768, 0, 90, 0, 0x1000000, Bhv_Custom_0x13005778),
		OBJECT(0, 3879, 1800, 2975, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 5294, 1800, 1963, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 5875, 1800, 2764, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 6075, 1800, 3167, 0, 90, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 4661, 1800, 3937, 0, 0, 0, 0x0, Bhv_Custom_0x13005778),
		OBJECT(0, 1685, 1819, 2865, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1327, 1819, 2865, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 173, 0, -1231, 0, 0, 0, 0x280000, bhvDeathWarp),
		OBJECT(137, -22, 3406, 4672, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(137, -4328, 4046, 2961, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(0, -831, 768, -522, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 173, 1800, 3267, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(180, -4122, 2119, 3548, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -4722, 2323, 2287, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -5716, 2725, 2350, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -5724, 2920, 3804, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(207, -4737, 400, 2892, 0, 0, 0, 0x0, bhvFloorSwitchGrills),
		OBJECT(0, 1368, 2333, -1149, 0, 0, 0, 0x2000000, bhvHiddenRedCoinStar),
		OBJECT(0, 2575, 2318, 2062, 0, 0, 0, 0x1000000, bhvHiddenStar),
		OBJECT(0, 3879, 1800, 2975, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 5294, 1800, 1963, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 5875, 1800, 2764, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 6075, 1800, 3167, 0, 90, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(0, 4661, 1800, 3937, 0, 0, 0, 0x0, bhvHiddenStarTrigger),
		OBJECT(124, 582, 0, -537, 0, -90, 0, 0x3d0000, bhvMessagePanel),
		OBJECT(123, 177, 44, 2276, 0, 0, 0, 0x640000, bhvNoteblock_MOP),
		OBJECT(0, -2218, 1800, 3974, 0, 0, 0, 0x0, bhvOpenableGrill),
		OBJECT(120, 175, 1852, 4262, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(215, -317, 2297, -635, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 973, 2000, -135, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1026, 2410, -25, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -723, 3800, -1237, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 1484, 3000, 169, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 472, 4000, -1221, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -322, 4600, -436, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 180, 1800, 673, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, 173, 0, -1231, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(122, 199, 3294, 1479, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(122, -2233, 2098, 4337, 0, 0, 0, 0x0, bhvStar),
		OBJECT(0, 177, 0, -1927, 0, 0, 0, 0x14320000, bhvWarp),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 5),
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
