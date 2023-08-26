void scroll_bits_dl_DL_bits_1_0xe017770_Obj_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 29;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bits_dl_DL_bits_1_0xe017770_Obj_mesh_layer_1_vtx_5);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bits_dl_DL_bits_1_0xe017770_Obj_mesh_layer_1_vtx_12() {
	int i = 0;
	int count = 32;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bits_dl_DL_bits_1_0xe017770_Obj_mesh_layer_1_vtx_12);

	deltaY = (int)(0.10000002384185791 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bits() {
	scroll_bits_dl_DL_bits_1_0xe017770_Obj_mesh_layer_1_vtx_5();
	scroll_bits_dl_DL_bits_1_0xe017770_Obj_mesh_layer_1_vtx_12();
};
