void scroll_bowser_1_dl_DL_bowser_1_1_0xe01e160_Obj_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 2344;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bowser_1_dl_DL_bowser_1_1_0xe01e160_Obj_001_mesh_layer_1_vtx_0);

	deltaY = (int)(0.3100000023841858 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bowser_1() {
	scroll_bowser_1_dl_DL_bowser_1_1_0xe01e160_Obj_001_mesh_layer_1_vtx_0();
};
