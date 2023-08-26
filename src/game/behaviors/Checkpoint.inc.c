extern s8 gWantCheckpoint;

void bhv_checkpoint_flag_init(void){
	if(gWantCheckpoint == o->oBehParams2ndByte)
	{
        o->oAnimState = 1;
	}
	else
	{
        o->oAnimState = 0;
	}
}
//0 reg, 1 reset
void bhv_checkpoint_flag_loop(void){
	o->oIntangibleTimer=0;
	if (o->oDistanceToMario<150.0f || gMarioStates[0].interactObj == o){
		//don't set a real checkpoint because we don't have a real
		//warp node to set it to. Instead abuse the fact that
		//in game checkpoint only set the course num
		if (o->oAction==0 && o->oAnimState == 0) {
			cur_obj_play_sound_1(SOUND_GENERAL_OPEN_CHEST);
			gWantCheckpoint = o->oBehParams2ndByte;
			o->oAnimState = 1;
			o->oAction=1;
		}
	}else{
		o->oAction=0;
		if (gWantCheckpoint != o->oBehParams2ndByte)
		{
			o->oAnimState = 0;
		}
	}
}
