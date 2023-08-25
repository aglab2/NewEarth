#include <PR/ultratypes.h>
#include <PR/gbi.h>

#include "macros.h"
#include "surface_terrains.h"
#include "types.h"
#include "make_const_nonconst.h"

#include "blue_coin_switch/model.inc.c"
#include "blue_coin_switch/collision.inc.c"
UNUSED static const u64 binid_0 = 0;

#include "amp/model.inc.c"
#include "amp/anims/data.inc.c"
#include "amp/anims/table.inc.c"
UNUSED static const u64 binid_1 = 1;

#include "cannon_lid/model.inc.c"
#include "cannon_lid/collision.inc.c"
UNUSED static const u64 binid_2 = 2;

#include "cannon_base/model.inc.c"
UNUSED static const u64 binid_3 = 3;

#include "cannon_barrel/model.inc.c"
UNUSED static const u64 binid_4 = 4;

#include "chuckya/model.inc.c"
#include "chuckya/anims/data.inc.c"
#include "chuckya/anims/table.inc.c"
UNUSED static const u64 binid_5 = 5;

#include "purple_switch/model.inc.c"
#include "purple_switch/collision.inc.c"
UNUSED static const u64 binid_6 = 6;

#include "checkerboard_platform/model.inc.c"
#include "checkerboard_platform/collision.inc.c"
UNUSED static const u64 binid_7 = 7;

#include "heart/model.inc.c"
UNUSED static const u64 binid_8 = 8;

#include "flyguy/model.inc.c"
#include "flyguy/anims/data.inc.c"
#include "flyguy/anims/table.inc.c"
UNUSED static const u64 binid_9 = 9;

#include "breakable_box/model.inc.c"
#include "breakable_box/collision.inc.c"
UNUSED static const u64 binid_10 = 10;

UNUSED static const u64 binid_11 = 11;

#include "exclamation_box/model.inc.c"
UNUSED static const u64 binid_12 = 12;

#include "goomba/model.inc.c"
#include "goomba/anims/data.inc.c"
#include "goomba/anims/table.inc.c"
UNUSED static const u64 binid_13 = 13;

#include "bobomb/model.inc.c"
#include "bobomb/anims/data.inc.c"
#include "bobomb/anims/table.inc.c"
UNUSED static const u64 binid_14 = 14;

#include "metal_box/model.inc.c"
#include "metal_box/collision.inc.c"
UNUSED static const u64 binid_15 = 15;

#include "exclamation_box_outline/model.inc.c"
#include "exclamation_box_outline/collision.inc.c"
UNUSED static const u64 binid_16 = 16;

#include "test_platform/model.inc.c"
#include "test_platform/collision.inc.c"
UNUSED static const u64 binid_17 = 17;

#include "koopa_shell/model.inc.c"
UNUSED static const u64 binid_18 = 18;

#include "actors/Noteblock_MOP/model.inc.h"
#include "actors/Noteblock_MOP/model.inc.c"
#include "actors/Noteblock_MOP/collision.inc.c"
#include "actors/Noteblock_MOP/texture.inc.c"

#include "actors/Checkpoint_Flag_MOP/model.inc.h"
#include "actors/Checkpoint_Flag_MOP/model.inc.c"
#include "actors/Checkpoint_Flag_MOP/texture.inc.c"

#include "actors/FlipBlock_MOP/model.inc.h"
#include "actors/FlipBlock_MOP/model.inc.c"
#include "actors/FlipBlock_MOP/collision.inc.c"
#include "actors/FlipBlock_MOP/texture.inc.c"

#include "actors/Flipswap_Platform_MOP/model.inc.h"
#include "actors/Flipswap_Platform_MOP/collision.inc.c"
#include "actors/Flipswap_Platform_MOP/model.inc.c"
#include "actors/Flipswap_Platform_MOP/texture.inc.c"

#include "actors/Flipswap_Platform_Border_MOP/model.inc.h"
#include "actors/Flipswap_Platform_Border_MOP/model.inc.c"
#include "actors/Flipswap_Platform_Border_MOP/texture.inc.c"

#include "actors/Flipswitch_Panel_MOP/model.inc.h"
#include "actors/Flipswitch_Panel_MOP/model.inc.c"
#include "actors/Flipswitch_Panel_MOP/collision.inc.c"
#include "actors/Flipswitch_Panel_MOP/texture.inc.c"

#include "actors/Green_Switchboard_MOP/model.inc.h"
#include "actors/Green_Switchboard_MOP/model.inc.c"
#include "actors/Green_Switchboard_MOP/collision.inc.c"
#include "actors/Green_Switchboard_MOP/texture.inc.c"

#include "actors/Green_Switchboard_Gears_MOP/model.inc.h"
#include "actors/Green_Switchboard_Gears_MOP/model.inc.c"
#include "actors/Green_Switchboard_Gears_MOP/texture.inc.c"

#include "actors/Moving_Rotating_Block_MOP/model.inc.h"
#include "actors/Moving_Rotating_Block_MOP/collision.inc.c"
#include "actors/Moving_Rotating_Block_MOP/model.inc.c"
#include "actors/Moving_Rotating_Block_MOP/texture.inc.c"

#include "actors/SandBlock_MOP/model.inc.h"
#include "actors/SandBlock_MOP/model.inc.c"
#include "actors/SandBlock_MOP/collision.inc.c"
#include "actors/SandBlock_MOP/texture.inc.c"

#include "actors/Shrink_Platform_MOP/model.inc.h"
#include "actors/Shrink_Platform_MOP/model.inc.c"
#include "actors/Shrink_Platform_MOP/collision.inc.c"
#include "actors/Shrink_Platform_MOP/texture.inc.c"

#include "actors/Shrink_Platform_Border_MOP/model.inc.h"
#include "actors/Shrink_Platform_Border_MOP/model.inc.c"
#include "actors/Shrink_Platform_Border_MOP/texture.inc.c"

#include "actors/Spring_MOP/model.inc.h"
#include "actors/Spring_MOP/model.inc.c"
#include "actors/Spring_MOP/texture.inc.c"

#include "actors/Switchblock_MOP/model.inc.h"
#include "actors/Switchblock_MOP/model.inc.c"
#include "actors/Switchblock_MOP/collision.inc.c"
#include "actors/Switchblock_MOP/texture.inc.c"

#include "actors/Switchblock_Switch_MOP/model.inc.h"
#include "actors/Switchblock_Switch_MOP/model.inc.c"
#include "actors/Switchblock_Switch_MOP/collision.inc.c"
#include "actors/Switchblock_Switch_MOP/texture.inc.c"

#include "actors/chain_chomp_gate/model.inc.c"
#include "actors/chain_chomp_gate/collision.inc.c"

#include "actors/grate_door/model.inc.c"
#include "actors/grate_door/collision.inc.c"

#include "star_door/model.inc.c"
#include "star_door/collision.inc.c"
