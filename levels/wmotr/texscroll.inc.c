void scroll_wmotr_dl_DL_wmotr_1_0xe013930_Obj_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 8;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wmotr_dl_DL_wmotr_1_0xe013930_Obj_mesh_layer_5_vtx_1);

	deltaY = (int)(0.1600000262260437 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wmotr_dl_DL_wmotr_1_0xe013c68_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 12;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wmotr_dl_DL_wmotr_1_0xe013c68_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wmotr() {
	scroll_wmotr_dl_DL_wmotr_1_0xe013930_Obj_mesh_layer_5_vtx_1();
	scroll_wmotr_dl_DL_wmotr_1_0xe013c68_Obj_mesh_layer_1_vtx_4();
};
