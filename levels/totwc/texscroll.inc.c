void scroll_totwc_dl_DL_totwc_1_0xe030dd0_Obj_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 2150;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(totwc_dl_DL_totwc_1_0xe030dd0_Obj_mesh_layer_1_vtx_6);

	deltaY = (int)(0.06999999284744263 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_totwc() {
	scroll_totwc_dl_DL_totwc_1_0xe030dd0_Obj_mesh_layer_1_vtx_6();
};
