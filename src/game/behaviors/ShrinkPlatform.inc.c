#define SHRINK_TIME 128

void bhv_shrinkplatform_loop(void) {
    if (o->oAction == 0) {
        if (cur_obj_is_mario_on_platform()) {
            o->oAction = 1;
        }
        load_object_collision_model();
    } 
    else if (o->oAction == 1) {
        if (o->oTimer == 0) {
           cur_obj_play_sound_1(SOUND_OBJ_UNK23);
        }

        if (o->oTimer > SHRINK_TIME) {
            spawn_mist_particles_variable(0, 0, 46.0f);
            o->oAction = 2;
        }
        cur_obj_scale(1.0f + (((f32) o->oTimer / SHRINK_TIME) * -1.0f));

        if (o->oTimer < SHRINK_TIME)
            load_object_collision_model();
    }
    else if (o->oAction == 2)
    {
        if (o->oTimer > 100)
        {
            o->oAction = 0;
            cur_obj_scale(1.0f);
        }
    }
}
