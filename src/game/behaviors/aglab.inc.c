extern const Texture *const gray_hud_lut[];
extern const Texture *const yellow_hud_lut[];
extern const Texture *const red_hud_lut[];
extern const Texture *const blue_hud_lut[];

extern Gfx mat_star_radar_expl_f3dlite_material_001[];
extern Gfx mat_star_radar_expl_f3dlite_material_002[];
extern Gfx mat_star_radar_expl_f3dlite_material_003[];
extern Gfx mat_star_radar_expl_f3dlite_material_004[];

void bhv_star_radar_explanation()
{
    Texture** grayLut = segmented_to_virtual(&gray_hud_lut);
    Texture** yellowLut = segmented_to_virtual(&yellow_hud_lut);
    Texture** redLut = segmented_to_virtual(&red_hud_lut);
    Texture** blueLut = segmented_to_virtual(&blue_hud_lut);

    Texture** tex;

    tex = (Texture**) segmented_to_virtual(mat_star_radar_expl_f3dlite_material_003);
    tex[9*2 + 1] = grayLut[(o->oTimer / 40) % 17];
    tex = (Texture**) segmented_to_virtual(mat_star_radar_expl_f3dlite_material_002);
    tex[9*2 + 1] = yellowLut[(o->oTimer) % 17];
    tex = (Texture**) segmented_to_virtual(mat_star_radar_expl_f3dlite_material_004);
    tex[9*2 + 1] = redLut[(o->oTimer * 2) % 17];
    tex = (Texture**) segmented_to_virtual(mat_star_radar_expl_f3dlite_material_001);
    tex[9*2 + 1] = blueLut[(o->oTimer / 10) % 17];
}
