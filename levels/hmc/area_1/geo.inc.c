#include "src/game/envfx_snow.h"

const GeoLayout hmc_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, hmc_dl_b_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, hmc_dl_c_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, hmc_dl_c1_mesh_layer_1),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_OPEN_NODE(),
			GEO_CULL(-32000, 32000, -32000, 32000, -9000, 32000, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_c2_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_c2_mesh_layer_4),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
		GEO_OPEN_NODE(),
			GEO_CULL(-32000, 32000, -32000, 32000, -11000, 32000, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_c2_001_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ROTATION_NODE_WITH_DL(LAYER_OPAQUE, 90, 0, 0, hmc_dl_DL_hmc_1_0xe03b1d0_Obj_mesh_layer_1),
		GEO_ROTATION_NODE_WITH_DL(LAYER_ALPHA, 90, 0, 0, hmc_dl_DL_hmc_1_0xe042780_Obj_mesh_layer_4),
		GEO_ROTATION_NODE_WITH_DL(LAYER_TRANSPARENT, 90, 0, 0, hmc_dl_DL_hmc_1_0xe047730_Obj_mesh_layer_5),
		GEO_ASM(0, geo_envfx_main),
		GEO_ASM(20480, geo_movtex_draw_water_regions),
		GEO_ASM(20481, geo_movtex_draw_water_regions),
		GEO_ASM(20482, geo_movtex_draw_water_regions),
		GEO_ASM(0, geo_cannon_circle_base),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_C6, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(14, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, hmc_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
