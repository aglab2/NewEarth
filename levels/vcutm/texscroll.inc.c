void scroll_vcutm_dl_DL_vcutm_1_0xe0162f0_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(vcutm_dl_DL_vcutm_1_0xe0162f0_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_vcutm() {
	scroll_vcutm_dl_DL_vcutm_1_0xe0162f0_Obj_mesh_layer_1_vtx_4();
};
