#include "src/game/envfx_snow.h"

const GeoLayout star_radar_expl_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, star_radar_expl_Plane_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, star_radar_expl_Plane_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, star_radar_expl_Plane_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
