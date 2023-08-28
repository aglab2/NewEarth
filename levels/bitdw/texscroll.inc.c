void scroll_bitdw_dl_DL_bitdw_1_0xe03f170_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 23;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bitdw_dl_DL_bitdw_1_0xe03f170_Obj_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.19999992847442627 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bitdw_dl_z_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 275;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bitdw_dl_z_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.16999995708465576 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bitdw() {
	scroll_bitdw_dl_DL_bitdw_1_0xe03f170_Obj_mesh_layer_1_vtx_0();
	scroll_bitdw_dl_z_mesh_layer_1_vtx_0();
};
