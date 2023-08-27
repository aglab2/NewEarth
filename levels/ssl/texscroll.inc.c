void scroll_ssl_dl_DL_ssl_1_0xe027160_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 156;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ssl_dl_DL_ssl_1_0xe027160_Obj_mesh_layer_1_vtx_0);

	deltaY = (int)(0.1600000262260437 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_ssl() {
	scroll_ssl_dl_DL_ssl_1_0xe027160_Obj_mesh_layer_1_vtx_0();
};
