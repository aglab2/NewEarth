#include "src/game/envfx_snow.h"

const GeoLayout ttc_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, -5000, 0, 10000, 90, 0, 0),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5000, 0, 10000, 90, 0, 0, ttc_dl_DL_ttc_1_0xe044680_Obj_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ttc_dl_DL_ttc_1_0xe050e40_Obj_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -5000, 0, 10000, 90, 0, 0, ttc_dl_DL_ttc_1_0xe050e40_Obj_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -5000, 0, 10000, 90, 0, 0, ttc_dl_DL_ttc_1_0xe052f60_Obj_mesh_layer_5),
		GEO_CULL(-4000, 32000, -32000, 32000, -32000, 32000, 0),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_dl_dz_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_dl_e_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_dl_e1_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5000, 0, 10000, 90, 0, 0, ttc_dl_f_mesh_layer_1),
		GEO_ASM(0, geo_cannon_circle_base),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -5000, 0, 10000),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ttc_dl_z_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ttc_dl_z_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ttc_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(14, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ttc_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
