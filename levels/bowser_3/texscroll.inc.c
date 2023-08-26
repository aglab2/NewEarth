void scroll_bowser_3_dl_DL_bowser_3_1_0xe003e20_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 6;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bowser_3_dl_DL_bowser_3_1_0xe003e20_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bowser_3() {
	scroll_bowser_3_dl_DL_bowser_3_1_0xe003e20_Obj_mesh_layer_1_vtx_3();
};
