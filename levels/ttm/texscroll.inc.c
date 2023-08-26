void scroll_ttm_dl_DL_ttm_2_0xe005ff0_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_DL_ttm_2_0xe005ff0_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ttm() {
	scroll_ttm_dl_DL_ttm_2_0xe005ff0_Obj_mesh_layer_1_vtx_2();
};
