#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_procedurals_to_primrefs_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_procedurals_to_primrefs_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 4 },
   { 36, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g51<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g124<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g51UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g52<1>UD        g51<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g35<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g31<1>D         g124<8,8,1>D    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g52UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g35.8<1>UW      g35<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g33<1>UD        g35<8,8,1>UW                    { align1 1H };
add(16)         g36<1>D         g31<1,1,0>D     g33<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
cmp.l.f0.0(16)  null<1>UD       g36<8,8,1>UD    g3.1<0,1,0>UD   { align1 1H I@1 };
and(16)         g27<1>UD        g3<0,1,0>UD     0x00ffffffUD    { align1 1H };
mov(16)         g29<1>UD        g3.3<0,1,0>UB                   { align1 1H };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g73<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g3.1<2>D        g2.7<0,1,0>D                    { align1 1Q };
mov(8)          g5.1<2>D        g2.7<0,1,0>D                    { align1 2Q };
mov(8)          g3<2>D          g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g5<2>D          g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g38UD           g3UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
mul(8)          acc0<1>UD       g36<8,8,1>UD    g42<16,8,2>UW   { align1 1Q $2.dst };
mul(16)         g48<1>D         g36<8,8,1>D     g42<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g65<1>D         g36<8,8,1>D     g42.1<16,8,2>UW { align1 1H };
mul(16)         g50<1>D         g36<8,8,1>D     g44<16,8,2>UW   { align1 1H $2.dst };
mul(16)         g67<1>D         g36<8,8,1>D     g44.1<16,8,2>UW { align1 1H };
mach(8)         g46<1>UD        g36<1,1,0>UD    g42<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g48.1<2>UW      g48.1<16,8,2>UW g65<16,8,2>UW   { align1 1H I@4 };
add(16)         g50.1<2>UW      g50.1<16,8,2>UW g67<16,8,2>UW   { align1 1H I@3 };
mul(8)          acc0<1>UD       g37<8,8,1>UD    g43<16,8,2>UW   { align1 2Q };
add(16)         g54<1>D         g38<1,1,0>D     g48<1,1,0>D     { align1 1H @3 $2.dst compacted };
mach(8)         g47<1>UD        g37<8,8,1>UD    g43<8,8,1>UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g60<2>UD        g54<4,4,1>UD                    { align1 1Q };
mov(8)          g62<2>UD        g55<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g52<1>D         g46<1,1,0>D     g50<1,1,0>D     { align1 1H I@4 compacted };
add3(16)        g58<1>D         g40<8,8,1>D     g52<8,8,1>D     -g56<1,1,1>D { align1 1H @1 $2.dst };
mov(8)          g60.1<2>UD      g58<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g62.1<2>UD      g59<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g64UD           g60UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
or(1)           a0.1<1>UD       g72<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g73UD           g64UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g75<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g76<1>UD        g73<1,1,0>UD    0x00000040UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g75<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g76UD           g66UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g78<1>UD        g73<1,1,0>UD    0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g68UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g79<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g80<1>UD        g73<1,1,0>UD    0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g79<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g80UD           g70UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
add(16)         g81<1>D         g54<1,1,0>D     16D             { align1 1H $7.src compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g96<1>UD        g73<1,1,0>UD    0x00000100UD    { align1 1H compacted };
cmp.l.f0.0(16)  g83<1>UD        g81<1,1,0>UD    g54<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g87<2>UD        g81<4,4,1>UD                    { align1 1Q };
mov(8)          g89<2>UD        g82<4,4,1>UD                    { align1 2Q };
add(16)         g85<1>D         -g83<1,1,0>D    g58<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g87.1<2>UD      g85<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g89.1<2>UD      g86<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g91UD           g87UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g96UD           g91UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
or(16)          g98<1>UD        g73<1,1,0>UD    0x00000140UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g93UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g99<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g102<1>F        (abs)g66<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.src compacted };
sel.l(16)       g126<1>F        g66<1,1,0>F     g91<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(16)       g15<1>F         g68<1,1,0>F     g93<1,1,0>F     { align1 1H $6.src compacted };
sel.ge(16)      g19<1>F         g66<1,1,0>F     g91<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g21<1>F         g68<1,1,0>F     g93<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g99<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g100UD          g73UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
cmp.l.f0.0(16)  g104<1>F        (abs)g100<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
sel.l(16)       g124<1>F        g100<1,1,0>F    g70<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g17<1>F         g100<1,1,0>F    g70<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g108<1>F        (abs)g68<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g112<1>F        (abs)g91<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g106<1>UD       g102<1,1,0>UD   g104<1,1,0>UD   { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g114<1>F        (abs)g70<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>F        (abs)g93<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g110<1>UD       g106<1,1,0>UD   g108<1,1,0>UD   { align1 1H A@1 compacted };
and(16)         g116<1>UD       g112<1,1,0>UD   g114<1,1,0>UD   { align1 1H F@2 compacted };
and(16)         g120<1>UD       g116<1,1,0>UD   g118<1,1,0>UD   { align1 1H A@1 compacted };
and.nz.f0.0(16) g122<1>UD       g110<1,1,0>UD   g120<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g9<1>UD         g17<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g11<1>UD        g19<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g13<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(+f0.0) sel(16) g3<1>UD         g124<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g5<1>UD         g126<8,8,1>UD   0x7f800000UD    { align1 1H $2.src };
(+f0.0) sel(16) g7<1>UD         g15<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g75<2>W         -g122<8,8,1>D                   { align1 1H I@7 };
mov(16)         g24<1>UW        g75<16,8,2>UW                   { align1 1H I@1 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g24<1>UW        0x0000UW                        { align1 1H I@2 };
mov(16)         g7<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g5<1>UD         0x7f800000UD                    { align1 1H I@7 };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@5 };
mov(16)         g13<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g11<1>UD        0xff800000UD                    { align1 1H };
mov(16)         g9<1>UD         0xff800000UD                    { align1 1H };

LABEL0:
endif(16)       JIP:  LABEL2                                    { align1 1H };

LABEL2:
and(16)         g22<1>UW        g24<1,1,0>UW    0x0001UW        { align1 1H I@3 compacted };
cmp.nz.f0.0(16) g25<1>W         g22<16,16,1>W   0W              { align1 1H I@1 };
mov(16)         g23<1>D         g25<8,8,1>W                     { align1 1H I@1 };
mov(1)          f0<1>UW         0x0000UW                        { align1 WE_all 1N };
cmp.nz.f0.0(16) null<1>UD       g23<8,8,1>UD    0x00000000UD    { align1 1H I@2 };
mov(16)         g31<1>UD        f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g38<1>UD        g33<8,8,1>D     0D              { align1 1H };
cbit(16)        g15<1>UD        g31<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g33<8,8,1>D     0D              { align1 1H };
and(16)         g40<1>UD        g31<1,1,0>UD    g38<1,1,0>UD    { align1 1H I@3 compacted };
cbit(16)        g42<1>UD        g40<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g44<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
cmp.l.f0.0(16)  g46<1>UD        g44<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g50<2>UD        g44<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N $1.src };
mov(8)          g52<2>UD        g45<4,4,1>UD                    { align1 2Q };
add(16)         g48<1>D         -g46<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g50.1<2>UD      g48<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g52.1<2>UD      g49<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g50UD           g15UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $1 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
add(16)         g51<1>D         g42<1,1,0>D     g25<0,1,0>D     { align1 1H I@3 compacted };
mov.nz.f0.0(16) null<1>D        g23<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g53<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $1.src };
shl(16)         g54<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H };
and(1)          g58<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g56<1>UD        g54<1,1,0>UD    0x000002c0UD    { align1 1H I@2 compacted };
or(16)          g59<1>UD        g54<1,1,0>UD    0x00000200UD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g53<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g16UD           g56UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g58<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
and(1)          g61<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
or(16)          g62<1>UD        g54<1,1,0>UD    0x00000240UD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g61<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
and(1)          g64<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
or(16)          g65<1>UD        g54<1,1,0>UD    0x00000280UD    { align1 1H F@7 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g64<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g7UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
and(1)          g67<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g67<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g56UD           g16UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g68<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@4 };
or(16)          g69<1>UD        g54<1,1,0>UD    0x000003c0UD    { align1 1H F@2 compacted };
and(1)          g71<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g72<1>UD        g54<1,1,0>UD    0x00000300UD    { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g68<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g69UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g71<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
and(1)          g74<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g75<1>UD        g54<1,1,0>UD    0x00000340UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g74<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g11UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
and(1)          g77<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g78<1>UD        g54<1,1,0>UD    0x00000380UD    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g77<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g13UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g17UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
shl(16)         g81<1>D         g29<8,8,1>D     0x0000001dUD    { align1 1H };
and(1)          g83<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g85<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g86<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g83<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g18UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g20UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g85<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g22UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g86<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g59UD           g18UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g62UD           g20UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g65UD           g22UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g56UD           g27UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g90<1>UD        g36<1,1,0>UD    g81<1,1,0>UD    { align1 1H A@3 compacted };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@1 };
and(1)          g94<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@1 };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
mov(16)         g29<1>UD        g90<8,8,1>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g72UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g93<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g36UD           g75UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g94<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g38UD           g78UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
mov(16)         g23<1>UD        g31<8,8,1>UD                    { align1 1H $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(16)         g25<1>UD        g36<8,8,1>UD                    { align1 1H $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g27<1>UD        g38<8,8,1>UD                    { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g72UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g75UD           g36UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g78UD           g38UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g69UD           g90UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
shl(16)         g99<1>D         g51<8,8,1>D     0x00000005UD    { align1 1H F@5 };
shr(16)         g101<1>UD       g51<1,1,0>UD    0x0000001bUD    { align1 1H F@5 compacted };
and(1)          g113<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g114<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g115<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g116<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g103<1>D        g2.4<0,1,0>D    g99<1,1,0>D     { align1 1H I@6 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g15UD           g59UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g114<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g62UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g115<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g19UD           g65UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g116<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g21UD           g56UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g109<2>UD       g103<4,4,1>UD                   { align1 1Q };
mov(8)          g111<2>UD       g104<4,4,1>UD                   { align1 2Q };
add3(16)        g107<1>D        g2.5<0,1,0>D    g101<8,8,1>D    -g105<1,1,1>D { align1 1H I@3 };
mov(8)          g109.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g109UD          g15UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };
add(16)         g117<1>D        g103<1,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g119<1>UD       g117<1,1,0>UD   g103<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g123<2>UD       g117<4,4,1>UD                   { align1 1Q };
mov(8)          g125<2>UD       g118<4,4,1>UD                   { align1 2Q };
add(16)         g121<1>D        -g119<1,1,0>D   g107<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g123.1<2>UD     g121<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g125.1<2>UD     g122<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g123UD          g23UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $1 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g124<1>F        g3<1,1,0>F      g9<1,1,0>F      { align1 1H $13.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g126<1>F        g5<1,1,0>F      g11<1,1,0>F     { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g15<1>F         g7<1,1,0>F      g13<1,1,0>F     { align1 1H I@7 compacted };
cmp.ge.f0.0(16) g17<1>F         g9<1,1,0>F      g3<1,1,0>F      { align1 1H $1.src compacted };
mov(16)         g42<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@4 compacted };
mov(16)         g42<1>F         g3<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(1)          g37<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $0.src };
shl(16)         g38<1>UD        g35<8,8,1>UW    0x00000002UD    { align1 1H $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g19<1>UD        g124<8,8,1>UD   0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g78<2>UD        g42.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
or(16)          g40<1>UD        g38<1,1,0>UD    0x00000580UD    { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g21<1>F         g11<1,1,0>F     g5<1,1,0>F      { align1 1H $1.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sel.l(8)        g76<2>F         g42<8,4,2>F     g78<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g23<1>UD        g126<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
mov(8)          g42.1<2>UD      g76<8,4,2>UD                    { align1 WE_all 1Q A@1 };
cmp.ge.f0.0(16) g25<1>F         g13<1,1,0>F     g7<1,1,0>F      { align1 1H $1.dst compacted };
mov(4)          g82<4>UD        g42.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g84<4>UD        g42.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
(+f0.0) sel(16) g27<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g80<4>F         g82<8,2,4>F     g84<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g17<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g42.2<4>UD      g80<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g29<1>UD        g124<8,8,1>UD   0xff800000UD    { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g88<4>UD        g42.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g90<4>UD        g42.3<8,2,4>UD                  { align1 WE_all 1N $8.src };
cmp.nz.f0.0(16) null<1>D        g21<8,8,1>D     0D              { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g86<4>F         g88<8,2,4>F     g90<8,2,4>F     { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g31<1>UD        g126<8,8,1>UD   0xff800000UD    { align1 1H $11.src };
mov(4)          g42.3<4>UD      g86<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g42.4<1>F       g42.3<0,1,0>F   g42.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g35<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H $0.src };
sel.l(8)        g43<1>F         g42.7<0,1,0>F   g43<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g44<1>UD        g43.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g37<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g40UD           g44UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
mov(16)         g73<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $11.src compacted };
mov(16)         g73<1>F         g5<1,1,0>F                      { align1 1H compacted };
and(1)          g42<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g43<1>UD        g38<1,1,0>UD    0x000005c0UD    { align1 1H $2.src compacted };
mov(8)          g93<2>UD        g73.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g91<2>F         g73<8,4,2>F     g93<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g73.1<2>UD      g91<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g97<4>UD        g73.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g99<4>UD        g73.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g95<4>F         g97<8,2,4>F     g99<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g73.2<4>UD      g95<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g103<4>UD       g73.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g105<4>UD       g73.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g101<4>F        g103<8,2,4>F    g105<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g73.3<4>UD      g101<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g73.4<1>F       g73.3<0,1,0>F   g73.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g74<1>F         g73.7<0,1,0>F   g74<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g45<1>UD        g74.7<0,1,0>UD                  { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g42<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g43UD           g45UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
mov(16)         g75<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $0.src compacted };
mov(16)         g75<1>F         g7<1,1,0>F                      { align1 1H compacted };
and(1)          g44<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $3.src };
or(16)          g45<1>UD        g38<1,1,0>UD    0x00000600UD    { align1 1H $3.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g108<2>UD       g75.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g106<2>F        g75<8,4,2>F     g108<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g75.1<2>UD      g106<8,4,2>UD                   { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g112<4>UD       g75.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g114<4>UD       g75.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.l(4)        g110<4>F        g112<8,2,4>F    g114<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g75.2<4>UD      g110<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g118<4>UD       g75.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g120<4>UD       g75.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g116<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g75.3<4>UD      g116<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g76<1>F         g75.7<0,1,0>F   g76<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g47<1>UD        g76.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g44<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g45UD           g47UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
mov(16)         g77<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g77<1>F         g9<1,1,0>F                      { align1 1H compacted };
and(1)          g46<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
or(16)          g47<1>UD        g38<1,1,0>UD    0x00000640UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(8)          g123<2>UD       g77.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g121<2>F        g77<8,4,2>F     g123<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g77.1<2>UD      g121<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g3<4>UD         g77.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g5<4>UD         g77.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g125<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g77.2<4>UD      g125<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g9<4>UD         g77.1<8,2,4>UD                  { align1 WE_all 1N A@1 };
mov(4)          g15<4>UD        g77.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g7<4>F          g9<8,2,4>F      g15<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g77.3<4>UD      g7<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g78<1>F         g77.7<0,1,0>F   g78<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g49<1>UD        g78.7<0,1,0>UD                  { align1 1H $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g46<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g47UD           g49UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g84<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g84<1>F         g11<1,1,0>F                     { align1 1H compacted };
and(1)          g49<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g50<1>UD        g38<1,1,0>UD    0x00000680UD    { align1 1H $5.src compacted };
mov(8)          g21<2>UD        g84.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g16<2>F         g84<8,4,2>F     g21<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g84.1<2>UD      g16<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(4)          g42<4>UD        g84.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g44<4>UD        g84.2<8,2,4>UD                  { align1 WE_all 1N $4.src };
sel.ge(4)       g25<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g84.2<4>UD      g25<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g54<4>UD        g84.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g56<4>UD        g84.3<8,2,4>UD                  { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sel.ge(4)       g52<4>F         g54<8,2,4>F     g56<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g84.3<4>UD      g52<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g84.4<1>F       g84.3<0,1,0>F   g84.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g85<1>F         g84.7<0,1,0>F   g85<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g52<1>UD        g85.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g49<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g50UD           g52UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
mov(16)         g86<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g86<1>F         g13<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
and(1)          g51<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g52<1>UD        g38<1,1,0>UD    0x000006c0UD    { align1 1H $6.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
mov(8)          g59<2>UD        g86.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g57<2>F         g86<8,4,2>F     g59<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g86.1<2>UD      g57<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g63<4>UD        g86.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g65<4>UD        g86.2<8,2,4>UD                  { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(4)       g61<4>F         g63<8,2,4>F     g65<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g86.2<4>UD      g61<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g69<4>UD        g86.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g71<4>UD        g86.3<8,2,4>UD                  { align1 WE_all 1N $11.src };
sel.ge(4)       g67<4>F         g69<8,2,4>F     g71<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g86.3<4>UD      g67<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g86.4<1>F       g86.3<0,1,0>F   g86.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g87<1>F         g86.7<0,1,0>F   g87<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g54<1>UD        g87.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g51<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g52UD           g54UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g53<1>D         g2.2<0,1,0>D    128D            { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
shl(16)         g58<1>D         g33<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
shr(16)         g60<1>UD        g33<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g55<1>UD        g53<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g62<1>D         g53<1,1,0>D     g58<1,1,0>D     { align1 1H compacted };
add(16)         g57<1>D         -g55<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.l.f0.0(16)  g64<1>UD        g62<1,1,0>UD    g53<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(8)          g68<2>UD        g62<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@4 };
mov(8)          g70<2>UD        g63<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add3(16)        g66<1>D         g57<8,8,1>D     g60<8,8,1>D     -g64<1,1,1>D { align1 1H };
mov(8)          g68.1<2>UD      g66<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g70.1<2>UD      g67<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g72<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g72<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $2.src };
send(16)        g55UD           g40UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g55<1>UD        g74.7<0,1,0>UD  g76.7<0,1,0>UD  { align1 1H @7 $2.dst };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g68UD           g55UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $5 };
add(16)         g73<1>D         g62<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g75<1>UD        g73<1,1,0>UD    g62<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g79<2>UD        g73<4,4,1>UD                    { align1 1Q };
mov(8)          g81<2>UD        g74<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g77<1>D         -g75<1,1,0>D    g66<1,1,0>D     { align1 1H compacted };
mov(8)          g79.1<2>UD      g77<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g81.1<2>UD      g78<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g83<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g83<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $5.src };
send(16)        g56UD           g47UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g56<1>UD        g85.7<0,1,0>UD  g87.7<0,1,0>UD  { align1 1H $5.dst };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g79UD           g56UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g87<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g87<1>F         g19<1,1,0>F                     { align1 1H compacted };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
or(16)          g85<1>UD        g38<1,1,0>UD    0x00000400UD    { align1 1H compacted };
mov(8)          g74<2>UD        g87.1<8,4,2>UD                  { align1 WE_all 1Q A@1 };
sel.l(8)        g72<2>F         g87<8,4,2>F     g74<8,4,2>F     { align1 WE_all 1Q A@1 };
mov(8)          g87.1<2>UD      g72<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
mov(4)          g78<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g80<4>UD        g87.2<8,2,4>UD                  { align1 WE_all 1N $7.src };
sel.l(4)        g76<4>F         g78<8,2,4>F     g80<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g87.2<4>UD      g76<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g89<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g91<4>UD        g87.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g82<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g87.3<4>UD      g82<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g88.4<1>F       g88.3<0,1,0>F   g88.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g88<1>F         g87.7<0,1,0>F   g88<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g57<1>UD        g88.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g85UD           g57UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
mov(16)         g113<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g113<1>F        g23<1,1,0>F                     { align1 1H compacted };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g88<1>UD        g38<1,1,0>UD    0x00000440UD    { align1 1H compacted };
mov(8)          g94<2>UD        g113.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g92<2>F         g113<8,4,2>F    g94<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g113.1<2>UD     g92<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g98<4>UD        g113.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g100<4>UD       g113.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g113.2<4>UD     g96<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g104<4>UD       g113.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g106<4>UD       g113.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g113.3<4>UD     g102<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g113.4<1>F      g113.3<0,1,0>F  g113.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g114<1>F        g113.7<0,1,0>F  g114<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g58<1>UD        g114.7<0,1,0>UD                 { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g88UD           g58UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
mov(16)         g115<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g115<1>F        g27<1,1,0>F                     { align1 1H compacted };
and(1)          g89<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
or(16)          g90<1>UD        g38<1,1,0>UD    0x00000480UD    { align1 1H compacted };
mov(8)          g109<2>UD       g115.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g107<2>F        g115<8,4,2>F    g109<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g115.1<2>UD     g107<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g117<4>UD       g115.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g119<4>UD       g115.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g111<4>F        g117<8,2,4>F    g119<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g115.2<4>UD     g111<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g123<4>UD       g115.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g125<4>UD       g115.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g121<4>F        g123<8,2,4>F    g125<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g115.3<4>UD     g121<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g116<1>F        g115.7<0,1,0>F  g116<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g59<1>UD        g116.7<0,1,0>UD                 { align1 1H $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g89<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g90UD           g59UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
mov(16)         g117<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g117<1>F        g29<1,1,0>F                     { align1 1H compacted };
and(1)          g91<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
or(16)          g92<1>UD        g38<1,1,0>UD    0x000004c0UD    { align1 1H compacted };
mov(8)          g3<2>UD         g117.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g126<2>F        g117<8,4,2>F    g3<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g117.1<2>UD     g126<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g7<4>UD         g117.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g9<4>UD         g117.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g5<4>F          g7<8,2,4>F      g9<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g117.2<4>UD     g5<8,2,4>UD                     { align1 WE_all 1N F@1 };
mov(4)          g13<4>UD        g117.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g15<4>UD        g117.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g11<4>F         g13<8,2,4>F     g15<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g117.3<4>UD     g11<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g117.4<1>F      g117.3<0,1,0>F  g117.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g118<1>F        g117.7<0,1,0>F  g118<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g60<1>UD        g118.7<0,1,0>UD                 { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g92UD           g60UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
mov(16)         g124<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g124<1>F        g31<1,1,0>F                     { align1 1H compacted };
and(1)          g94<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g95<1>UD        g38<1,1,0>UD    0x00000500UD    { align1 1H compacted };
mov(8)          g18<2>UD        g124.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g16<2>F         g124<8,4,2>F    g18<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g124.1<2>UD     g16<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g22<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g24<4>UD        g124.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g20<4>F         g22<8,2,4>F     g24<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g124.2<4>UD     g20<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g28<4>UD        g124.1<8,2,4>UD                 { align1 WE_all 1N A@1 };
mov(4)          g30<4>UD        g124.3<8,2,4>UD                 { align1 WE_all 1N F@3 };
sel.ge(4)       g26<4>F         g28<8,2,4>F     g30<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g124.3<4>UD     g26<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g124.4<1>F      g124.3<0,1,0>F  g124.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g125<1>F        g124.7<0,1,0>F  g125<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g61<1>UD        g125.7<0,1,0>UD                 { align1 1H $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g94<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g95UD           g61UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
mov(16)         g126<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g126<1>F        g35<1,1,0>F                     { align1 1H compacted };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g97<1>UD        g38<1,1,0>UD    0x00000540UD    { align1 1H compacted };
mov(8)          g35<2>UD        g126.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g31<2>F         g126<8,4,2>F    g35<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g126.1<2>UD     g31<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g42<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g44<4>UD        g126.2<8,2,4>UD                 { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.ge(4)       g40<4>F         g42<8,2,4>F     g44<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g126.2<4>UD     g40<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g48<4>UD        g126.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g50<4>UD        g126.3<8,2,4>UD                 { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sel.ge(4)       g46<4>F         g48<8,2,4>F     g50<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g126.3<4>UD     g46<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g127.4<1>F      g127.3<0,1,0>F  g127.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g127<1>F        g126.7<0,1,0>F  g127<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g62<1>UD        g127.7<0,1,0>UD                 { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g97UD           g62UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
shl(16)         g98<1>D         g33<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g100<1>UD       g33<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g102<1>D        g2<0,1,0>D      g98<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g108<2>UD       g102<4,4,1>UD                   { align1 1Q };
mov(8)          g110<2>UD       g103<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g106<1>D        g2.1<0,1,0>D    g100<8,8,1>D    -g104<1,1,1>D { align1 1H };
mov(8)          g108.1<2>UD     g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g110.1<2>UD     g107<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g112<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $8.src };
send(16)        g63UD           g85UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
(+f0.0) sel(16) g63<1>UD        g114.7<0,1,0>UD g116.7<0,1,0>UD { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g108UD          g63UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g113<1>D        g102<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g115<1>UD       g113<1,1,0>UD   g102<1,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g119<2>UD       g113<4,4,1>UD                   { align1 1Q };
mov(8)          g121<2>UD       g114<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g117<1>D        -g115<1,1,0>D   g106<1,1,0>D    { align1 1H compacted };
mov(8)          g119.1<2>UD     g117<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g121.1<2>UD     g118<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g123<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g123<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $8.src };
send(16)        g64UD           g92UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g33<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
(+f0.0) sel(16) g64<1>UD        g125.7<0,1,0>UD g127.7<0,1,0>UD { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g119UD          g64UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q F@1 };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_code[] = {
    0x80000065, 0x33058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x7c050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00330c, 0x00340000,
    0xe2343040, 0x04013303, 0x80030061, 0x23054410,
    0x00000000, 0x76543210, 0x00041b69, 0x1f058660,
    0x02467c05, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00340c, 0x00300000, 0x64231a40, 0x00802395,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x21050120, 0x00462305, 0x00000000,
    0xa0241940, 0x21001f02, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00041970, 0x00010220,
    0x52462405, 0x00000324, 0x00040065, 0x1b058220,
    0x02000304, 0x00ffffff, 0x00040061, 0x1d050020,
    0x0000031c, 0x00000000, 0x01040022, 0x0001c060,
    0x00000628, 0x000005b8, 0x80000065, 0x48058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x49058120,
    0x02462305, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x03260660,
    0x000002e4, 0x00000000, 0x00130061, 0x05260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x03060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x05060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x26440000,
    0xfb000324, 0x000c0000, 0x00032241, 0x20010220,
    0x01462405, 0x00562a06, 0x00042241, 0x30050660,
    0x01462405, 0x00562a06, 0x00040041, 0x41050660,
    0x01462405, 0x00562a16, 0x00042241, 0x32050660,
    0x01462405, 0x00562c06, 0x00040041, 0x43050660,
    0x01462405, 0x00562c16, 0x3e2e0049, 0x2a002403,
    0x00041c40, 0x30160110, 0x01563016, 0x00564106,
    0x00041b40, 0x32160110, 0x01563216, 0x00564306,
    0x00130041, 0x20010220, 0x01462505, 0x00562b06,
    0xa036b240, 0x30002602, 0x00130049, 0x2f050222,
    0x02462505, 0x00462b05, 0x27381a70, 0x26003603,
    0x00030061, 0x3c060220, 0x00343605, 0x00000000,
    0x00130061, 0x3e060220, 0x00343705, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa0341c40, 0x32002e02, 0x00049252, 0x3a040e68,
    0x0e2e2805, 0x38053405, 0x00031961, 0x3c260220,
    0x00343a05, 0x00000000, 0x00131a61, 0x3e260220,
    0x00343b05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x40440000,
    0xfb003c24, 0x000c0000, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004804, 0x0000008f, 0x00049431, 0x00020100,
    0xfa084914, 0x04004004, 0x80000065, 0x4b058220,
    0x020000a4, 0xfffffc00, 0xe04c3466, 0x04004903,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004b04, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084c14, 0x04004204,
    0x80003565, 0x4d058220, 0x020000a4, 0xfffffc00,
    0xe04e0066, 0x08004903, 0x80002301, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004d04, 0x0000008f, 0x00049631, 0x00020100,
    0xfa084e14, 0x04004404, 0x80003665, 0x4f058220,
    0x020000a4, 0xfffffc00, 0xe0500066, 0x0c004903,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004f04, 0x0000008f,
    0x00049731, 0x00020100, 0xfa085014, 0x04004604,
    0xa0513740, 0x01003603, 0x80000065, 0x5f058220,
    0x020000a4, 0xfffffc00, 0xe0600066, 0x10004903,
    0x27531b70, 0x36005103, 0x00030061, 0x57060220,
    0x00345105, 0x00000000, 0x00130061, 0x59060220,
    0x00345205, 0x00000000, 0xa0551b40, 0x3a025302,
    0x00031961, 0x57260220, 0x00345505, 0x00000000,
    0x00131a61, 0x59260220, 0x00345605, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x5b240000, 0xfb005724, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005f04, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086014, 0x04005b04,
    0x80003965, 0x61058220, 0x020000a4, 0xfffffc00,
    0xe0620066, 0x14004903, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa086214, 0x04005d04, 0x80003a65, 0x63058220,
    0x020000a4, 0xfffffc00, 0xe7663570, 0x7f834200,
    0x277e3962, 0x5b004200, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x270f3662, 0x5d004400,
    0x25130062, 0x5b004200, 0x25150062, 0x5d004400,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006304, 0x0000000f,
    0x00049b31, 0x64160100, 0xfa004914, 0x04000000,
    0xe7682b70, 0x7f836400, 0x277c3762, 0x46006400,
    0x25110062, 0x46006400, 0xe76c0070, 0x7f834400,
    0xe7700070, 0x7f835b00, 0x206a1565, 0x68006603,
    0xe7720070, 0x7f834600, 0xe7760070, 0x7f835d00,
    0x206e0965, 0x6c006a03, 0x20741265, 0x72007003,
    0x20780965, 0x76007403, 0x2e7a1965, 0x78006e03,
    0x01041562, 0x09058220, 0x02461105, 0xff800000,
    0x01041762, 0x0b058220, 0x02461305, 0xff800000,
    0x01041762, 0x0d058220, 0x02461505, 0xff800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x03058220, 0x02467c05, 0x7f800000,
    0x01043262, 0x05058220, 0x02467e05, 0x7f800000,
    0x01041762, 0x07058220, 0x02460f05, 0x7f800000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x4b062650, 0x00467a05, 0x00000000,
    0x00041961, 0x18050110, 0x00564b06, 0x00000000,
    0x00040024, 0x0001c060, 0x00000080, 0x00000080,
    0x00041a61, 0x18054110, 0x00000000, 0x00000000,
    0x00041d61, 0x07054220, 0x00000000, 0x7f800000,
    0x00041f61, 0x05054220, 0x00000000, 0x7f800000,
    0x00041d61, 0x03054220, 0x00000000, 0x7f800000,
    0x00040061, 0x0d054220, 0x00000000, 0xff800000,
    0x00040061, 0x0b054220, 0x00000000, 0xff800000,
    0x00040061, 0x09054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x60161b65, 0x00101805, 0x00041970, 0x19058550,
    0x25581605, 0x00000000, 0x00041961, 0x17050560,
    0x00461905, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22461705, 0x00000000, 0x00040061, 0x1f050120,
    0x00003000, 0x00000000, 0x00040079, 0x26058620,
    0x06462105, 0x00000000, 0x00041a4d, 0x0f050220,
    0x00461f05, 0x00000000, 0x00040070, 0x00018660,
    0x16462105, 0x00000000, 0x20281b65, 0x26001f03,
    0x0004194d, 0x2a050220, 0x00462805, 0x00000000,
    0x01040022, 0x0001c060, 0x000000b8, 0x000000b8,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02c0040, 0x02410203, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x272e1970, 0x02102c03,
    0x00030061, 0x32060220, 0x00342c05, 0x00000000,
    0x80103101, 0x00000000, 0x00000000, 0x00000000,
    0x00130061, 0x34060220, 0x00342d05, 0x00000000,
    0xa0301b40, 0x02122e12, 0x00031961, 0x32260220,
    0x00343005, 0x00000000, 0x00131a61, 0x34260220,
    0x00343105, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x19140000,
    0xfb183224, 0x01000f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0xa0331b40, 0x19102a02,
    0x00040061, 0x00010660, 0x20461705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000b38, 0x00000b38,
    0x80003165, 0x35058220, 0x020000a4, 0xfffffc00,
    0x00040069, 0x36058120, 0x02462305, 0x00000002,
    0x80000065, 0x3a058220, 0x020000a4, 0xfffffc00,
    0xe0381a66, 0x2c003603, 0xe03b3366, 0x20003603,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003504, 0x0000000f,
    0x00049c31, 0x10160100, 0xfa003814, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003a04, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa083b14, 0x04000304,
    0x80003365, 0x3d058220, 0x020000a4, 0xfffffc00,
    0xe03e3366, 0x24003603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003d04, 0x0000008f, 0x00049e31, 0x00020100,
    0xfa083e14, 0x04000504, 0x80003465, 0x40058220,
    0x020000a4, 0xfffffc00, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0xe0411766, 0x28003603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004004, 0x0000008f,
    0x00049f31, 0x00020100, 0xfa084114, 0x04000704,
    0x80001765, 0x43058220, 0x020000a4, 0xfffffc00,
    0x80002c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004304, 0x0000008f,
    0x00049031, 0x00020100, 0xfa083814, 0x04001004,
    0x80001465, 0x44058220, 0x020000a4, 0xfffffc00,
    0xe0451266, 0x3c003603, 0x80001265, 0x47058220,
    0x020000a4, 0xfffffc00, 0xe0483b66, 0x30003603,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004404, 0x0000000f,
    0x00049131, 0x11160100, 0xfa004514, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004704, 0x0000008f,
    0x00049231, 0x00020100, 0xfa084814, 0x04000904,
    0x80003b65, 0x4a058220, 0x020000a4, 0xfffffc00,
    0xe04b0066, 0x34003603, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004a04, 0x0000008f, 0x00049331, 0x00020100,
    0xfa084b14, 0x04000b04, 0x80000065, 0x4d058220,
    0x020000a4, 0xfffffc00, 0xe04e3666, 0x38003603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004d04, 0x0000008f,
    0x00049431, 0x00020100, 0xfa084e14, 0x04000d04,
    0x80003765, 0x50058220, 0x020000a4, 0xfffffc00,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005004, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084514, 0x04001104,
    0x00040069, 0x51058660, 0x02461d05, 0x0000001d,
    0x80000065, 0x53058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x54058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x55058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x56058220, 0x020000a4, 0xfffffc00,
    0x80003d01, 0x00000000, 0x00000000, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005304, 0x0000000f,
    0x00049631, 0x12160100, 0xfa003b14, 0x04000000,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005404, 0x0000000f,
    0x00049731, 0x14160100, 0xfa003e14, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005504, 0x0000000f,
    0x00049831, 0x16160100, 0xfa004114, 0x04000000,
    0x80002601, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005604, 0x0000008f,
    0x00049931, 0x00020100, 0xfa083b14, 0x04001204,
    0x80003865, 0x57058220, 0x020000a4, 0xfffffc00,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa083e14, 0x04001404,
    0x80003865, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa084114, 0x04001604,
    0x80003865, 0x59058220, 0x020000a4, 0xfffffc00,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005904, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa083814, 0x04001b04,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x205a0b66, 0x51002403, 0x80001365, 0x5c058220,
    0x020000a4, 0xfffffc00, 0x80001165, 0x5d058220,
    0x020000a4, 0xfffffc00, 0x80001165, 0x5e058220,
    0x020000a4, 0xfffffc00, 0x80000065, 0x5f058220,
    0x020000a4, 0xfffffc00, 0x00041d61, 0x1d050220,
    0x00465a05, 0x00000000, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005c04, 0x0000000f, 0x00049d31, 0x1f160100,
    0xfa004814, 0x04000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005d04, 0x0000000f, 0x00049e31, 0x24160100,
    0xfa004b14, 0x04000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005e04, 0x0000000f, 0x00049f31, 0x26160100,
    0xfa004e14, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x00042d61, 0x17050220,
    0x00461f05, 0x00000000, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00042e61, 0x19050220,
    0x00462405, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042f61, 0x1b050220,
    0x00462605, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005f04, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa084814, 0x04001f04, 0x80003965, 0x60058220,
    0x020000a4, 0xfffffc00, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006004, 0x0000008f, 0x00049031, 0x00020100,
    0xfa084b14, 0x04002404, 0x80000065, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000008f, 0x00049631, 0x00020100,
    0xfa084e14, 0x04002604, 0x80003a65, 0x62058220,
    0x020000a4, 0xfffffc00, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000008f, 0x00049831, 0x00020100,
    0xfa084514, 0x04005a04, 0x00041569, 0x63058660,
    0x02463305, 0x00000005, 0xe0651568, 0x01b03303,
    0x80000065, 0x71058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x72058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x73058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x74058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0671e40, 0x6301025a, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007104, 0x0000000f, 0x00049331, 0x0f160100,
    0xfa003b14, 0x04000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007204, 0x0000000f, 0x00049331, 0x11160100,
    0xfa003e14, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007304, 0x0000000f, 0x00049431, 0x13160100,
    0xfa004114, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007404, 0x0000000f, 0x00049131, 0x15160100,
    0xfa003814, 0x04000000, 0x27691970, 0x0210670b,
    0x00030061, 0x6d060220, 0x00346705, 0x00000000,
    0x00130061, 0x6f060220, 0x00346805, 0x00000000,
    0x00041b52, 0x6b040660, 0x0e2e02a4, 0x69056505,
    0x00031961, 0x6d260220, 0x00346b05, 0x00000000,
    0x00131a61, 0x6f260220, 0x00346c05, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044131, 0x00000000, 0xfb086d24, 0x000c0f44,
    0xa0750040, 0x01006703, 0x27771970, 0x67007503,
    0x00030061, 0x7b060220, 0x00347505, 0x00000000,
    0x00130061, 0x7d060220, 0x00347605, 0x00000000,
    0xa0791b40, 0x6b027702, 0x00031961, 0x7b260220,
    0x00347905, 0x00000000, 0x00131a61, 0x7d260220,
    0x00347a05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044131, 0x00000000,
    0xfb087b24, 0x000c1744, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x207c3d40, 0x09000300,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x207e3e40, 0x0b000500, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x200f1f40, 0x0d000700,
    0x25113170, 0x03000900, 0xa32a1c61, 0x7f810000,
    0x602a0061, 0x00100300, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003065, 0x25058220,
    0x020000a4, 0xfffffc00, 0x00043669, 0x26058120,
    0x02462305, 0x00000002, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x01041562, 0x13058220,
    0x02467c05, 0x7f800000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x4e060220,
    0x00442a26, 0x00000000, 0xe0281b66, 0x58002603,
    0x25153170, 0x05000b00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x4c060aa0,
    0x5a442a06, 0x00444e06, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x17058220,
    0x02467e05, 0x7f800000, 0x80030961, 0x2a260220,
    0x00444c06, 0x00000000, 0x25192170, 0x07000d00,
    0x80021961, 0x52070220, 0x00422a27, 0x00000000,
    0x80020061, 0x54070220, 0x00422a47, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x1b058220, 0x02460f05, 0x7f800000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x50070aa0, 0x5a425207, 0x00425407,
    0x00041670, 0x00018660, 0x26461105, 0x00000000,
    0x80021161, 0x2a470220, 0x00425007, 0x00000000,
    0x01043162, 0x1d058220, 0x02467c05, 0xff800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x58070220, 0x00422a27, 0x00000000,
    0x80023861, 0x5a070220, 0x00422a67, 0x00000000,
    0x00041470, 0x00018660, 0x26461505, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x56070aa0, 0x5a425807, 0x00425a07,
    0x01043b62, 0x1f058220, 0x02467e05, 0xff800000,
    0x80021161, 0x2a670220, 0x00425607, 0x00000000,
    0x00041370, 0x00018660, 0x26461905, 0x00000000,
    0x80021a62, 0x2a850aa0, 0x5a002a64, 0x00342a85,
    0x80021a62, 0x2b850aa0, 0x5a002b64, 0x00342b85,
    0x01043062, 0x23058220, 0x02460f05, 0xff800000,
    0x80031162, 0x2b050aa0, 0x5a002ae4, 0x00462b05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2c050220, 0x00002be4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002504, 0x0000008f,
    0x00049231, 0x00020100, 0xfa082814, 0x04002c04,
    0xa3493b61, 0x7f810000, 0x60490061, 0x00100500,
    0x80001265, 0x2a058220, 0x020000a4, 0xfffffc00,
    0xe02b3266, 0x5c002603, 0x80031161, 0x5d060220,
    0x00444926, 0x00000000, 0x80031962, 0x5b060aa0,
    0x5a444906, 0x00445d06, 0x80030961, 0x49260220,
    0x00445b06, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x61070220,
    0x00424927, 0x00000000, 0x80020061, 0x63070220,
    0x00424947, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x5f070aa0,
    0x5a426107, 0x00426307, 0x80021161, 0x49470220,
    0x00425f07, 0x00000000, 0x80021961, 0x67070220,
    0x00424927, 0x00000000, 0x80020061, 0x69070220,
    0x00424967, 0x00000000, 0x80021962, 0x65070aa0,
    0x5a426707, 0x00426907, 0x80021161, 0x49670220,
    0x00426507, 0x00000000, 0x80021962, 0x49850aa0,
    0x5a004964, 0x00344985, 0x80021962, 0x4a850aa0,
    0x5a004a64, 0x00344a85, 0x80031162, 0x4a050aa0,
    0x5a0049e4, 0x00464a05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043261, 0x2d050220,
    0x00004ae4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002a04, 0x0000008f, 0x00049331, 0x00020100,
    0xfa082b14, 0x04002d04, 0xa34b3061, 0x7f810000,
    0x604b0061, 0x00100700, 0x80003365, 0x2c058220,
    0x020000a4, 0xfffffc00, 0xe02d3366, 0x60002603,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x6c060220, 0x00444b26, 0x00000000,
    0x80031962, 0x6a060aa0, 0x5a444b06, 0x00446c06,
    0x80030961, 0x4b260220, 0x00446a06, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x70070220, 0x00424b27, 0x00000000,
    0x80020061, 0x72070220, 0x00424b47, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x6e070aa0, 0x5a427007, 0x00427207,
    0x80021161, 0x4b470220, 0x00426e07, 0x00000000,
    0x80021961, 0x76070220, 0x00424b27, 0x00000000,
    0x80020061, 0x78070220, 0x00424b67, 0x00000000,
    0x80021962, 0x74070aa0, 0x5a427607, 0x00427807,
    0x80021161, 0x4b670220, 0x00427407, 0x00000000,
    0x80021962, 0x4b850aa0, 0x5a004b64, 0x00344b85,
    0x80021962, 0x4c850aa0, 0x5a004c64, 0x00344c85,
    0x80031162, 0x4c050aa0, 0x5a004be4, 0x00464c05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2f050220, 0x00004ce4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002c04, 0x0000008f,
    0x00049431, 0x00020100, 0xfa082d14, 0x04002f04,
    0xa34d0061, 0xff810000, 0x604d0061, 0x00100900,
    0x80003465, 0x2e058220, 0x020000a4, 0xfffffc00,
    0xe02f3466, 0x64002603, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x7b060220,
    0x00444d26, 0x00000000, 0x80031962, 0x79060aa0,
    0x4a444d06, 0x00447b06, 0x80030961, 0x4d260220,
    0x00447906, 0x00000000, 0x80021961, 0x03070220,
    0x00424d27, 0x00000000, 0x80020061, 0x05070220,
    0x00424d47, 0x00000000, 0x80021962, 0x7d070aa0,
    0x4a420307, 0x00420507, 0x80021161, 0x4d470220,
    0x00427d07, 0x00000000, 0x80020961, 0x09070220,
    0x00424d27, 0x00000000, 0x80020061, 0x0f070220,
    0x00424d67, 0x00000000, 0x80021962, 0x07070aa0,
    0x4a420907, 0x00420f07, 0x80021161, 0x4d670220,
    0x00420707, 0x00000000, 0x80021962, 0x4d850aa0,
    0x4a004d64, 0x00344d85, 0x80021962, 0x4e850aa0,
    0x4a004e64, 0x00344e85, 0x80031162, 0x4e050aa0,
    0x4a004de4, 0x00464e05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043161, 0x31050220,
    0x00004ee4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002e04, 0x0000008f, 0x00049531, 0x00020100,
    0xfa082f14, 0x04003104, 0xa3540061, 0xff810000,
    0x60540061, 0x00100b00, 0x80003565, 0x31058220,
    0x020000a4, 0xfffffc00, 0xe0323566, 0x68002603,
    0x80031161, 0x15060220, 0x00445426, 0x00000000,
    0x80031962, 0x10060aa0, 0x4a445406, 0x00441506,
    0x80030961, 0x54260220, 0x00441006, 0x00000000,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x2a070220, 0x00425427, 0x00000000,
    0x80023461, 0x2c070220, 0x00425447, 0x00000000,
    0x80021962, 0x19070aa0, 0x4a422a07, 0x00422c07,
    0x80021161, 0x54470220, 0x00421907, 0x00000000,
    0x80021961, 0x36070220, 0x00425427, 0x00000000,
    0x80023161, 0x38070220, 0x00425467, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x34070aa0, 0x4a423607, 0x00423807,
    0x80021161, 0x54670220, 0x00423407, 0x00000000,
    0x80021962, 0x54850aa0, 0x4a005464, 0x00345485,
    0x80021962, 0x55850aa0, 0x4a005564, 0x00345585,
    0x80031162, 0x55050aa0, 0x4a0054e4, 0x00465505,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x34050220, 0x000055e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003104, 0x0000008f,
    0x00049631, 0x00020100, 0xfa083214, 0x04003404,
    0xa3560061, 0xff810000, 0x60560061, 0x00100d00,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003665, 0x33058220, 0x020000a4, 0xfffffc00,
    0xe0343666, 0x6c002603, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3b060220,
    0x00445626, 0x00000000, 0x80031962, 0x39060aa0,
    0x4a445606, 0x00443b06, 0x80030961, 0x56260220,
    0x00443906, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x3f070220,
    0x00425627, 0x00000000, 0x80023461, 0x41070220,
    0x00425647, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3d070aa0,
    0x4a423f07, 0x00424107, 0x80021161, 0x56470220,
    0x00423d07, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x45070220,
    0x00425627, 0x00000000, 0x80023b61, 0x47070220,
    0x00425667, 0x00000000, 0x80021962, 0x43070aa0,
    0x4a424507, 0x00424707, 0x80021161, 0x56670220,
    0x00424307, 0x00000000, 0x80021962, 0x56850aa0,
    0x4a005664, 0x00345685, 0x80021962, 0x57850aa0,
    0x4a005764, 0x00345785, 0x80031162, 0x57050aa0,
    0x4a0056e4, 0x00465705, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x36050220,
    0x000057e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003304, 0x0000008f, 0x00049531, 0x00020100,
    0xfa083414, 0x04003604, 0x00040070, 0x00018220,
    0x52462105, 0x00000003, 0x01040022, 0x0001c060,
    0x00000358, 0x00000358, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0353540, 0x08010243,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x3a058660, 0x02462105, 0x00000002,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0xe03c0068, 0x01e02103, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27373570, 0x0210352b,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa03e0040, 0x3a003502, 0xa0391a40, 0x0212371a,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x27400070, 0x35003e03, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x44060220,
    0x00343e05, 0x00000000, 0x80101401, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x46060220,
    0x00343f05, 0x00000000, 0x00040070, 0x00018220,
    0x52462105, 0x00000001, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x42040e68,
    0x0e2e3905, 0x40053c05, 0x00031961, 0x44260220,
    0x00344205, 0x00000000, 0x00131a61, 0x46260220,
    0x00344305, 0x00000000, 0x01040022, 0x0001c060,
    0x00000080, 0x00000060, 0x80001465, 0x48058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003266, 0x10218220,
    0x02004804, 0x0000000f, 0x00049231, 0x37160100,
    0xfa002814, 0x04000000, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00040070, 0x00018220,
    0x52462105, 0x00000002, 0x0104f262, 0x37050220,
    0x02004ae4, 0x00004ce4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80002201, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044531, 0x00000000,
    0xfb2a4424, 0x01003714, 0xa0490040, 0x00c03e03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x274b0070, 0x3e004903, 0x00040070, 0x00018220,
    0x52462105, 0x00000001, 0x00030061, 0x4f060220,
    0x00344905, 0x00000000, 0x00130061, 0x51060220,
    0x00344a05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa04d0040, 0x42024b02,
    0x00031961, 0x4f260220, 0x00344d05, 0x00000000,
    0x00131a61, 0x51260220, 0x00344e05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000080, 0x00000060,
    0x80000065, 0x53058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003566, 0x10218220, 0x02005304, 0x0000000f,
    0x00049531, 0x38160100, 0xfa002f14, 0x04000000,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00040070, 0x00018220, 0x52462105, 0x00000002,
    0x01042562, 0x38050220, 0x020055e4, 0x000057e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002501, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044731, 0x00000000, 0xfb2c4f24, 0x01003814,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa3571b61, 0x7f810000, 0x60570061, 0x00101300,
    0x80001765, 0x54058220, 0x020000a4, 0xfffffc00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0xe0550066, 0x40002603, 0x80030961, 0x4a060220,
    0x00445726, 0x00000000, 0x80030962, 0x48060aa0,
    0x5a445706, 0x00444a06, 0x80030961, 0x57260220,
    0x00444806, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x4e070220,
    0x00425727, 0x00000000, 0x80023761, 0x50070220,
    0x00425747, 0x00000000, 0x80021962, 0x4c070aa0,
    0x5a424e07, 0x00425007, 0x80021161, 0x57470220,
    0x00424c07, 0x00000000, 0x80021961, 0x59070220,
    0x00425727, 0x00000000, 0x80020061, 0x5b070220,
    0x00425767, 0x00000000, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x52070aa0,
    0x5a425907, 0x00425b07, 0x80021161, 0x57670220,
    0x00425207, 0x00000000, 0x80021962, 0x57850aa0,
    0x5a005764, 0x00345785, 0x80021962, 0x58850aa0,
    0x5a005864, 0x00345885, 0x80031162, 0x58050aa0,
    0x5a0057e4, 0x00465805, 0x80003701, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x39050220,
    0x000058e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005404, 0x0000008f, 0x00049831, 0x00020100,
    0xfa085514, 0x04003904, 0xa3710061, 0x7f810000,
    0x60710061, 0x00101700, 0x80001265, 0x57058220,
    0x020000a4, 0xfffffc00, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0xe0580066, 0x44002603,
    0x80031161, 0x5e060220, 0x00447126, 0x00000000,
    0x80031962, 0x5c060aa0, 0x5a447106, 0x00445e06,
    0x80030961, 0x71260220, 0x00445c06, 0x00000000,
    0x80021961, 0x62070220, 0x00427127, 0x00000000,
    0x80020061, 0x64070220, 0x00427147, 0x00000000,
    0x80021962, 0x60070aa0, 0x5a426207, 0x00426407,
    0x80021161, 0x71470220, 0x00426007, 0x00000000,
    0x80021961, 0x68070220, 0x00427127, 0x00000000,
    0x80020061, 0x6a070220, 0x00427167, 0x00000000,
    0x80021962, 0x66070aa0, 0x5a426807, 0x00426a07,
    0x80021161, 0x71670220, 0x00426607, 0x00000000,
    0x80021962, 0x71850aa0, 0x5a007164, 0x00347185,
    0x80021962, 0x72850aa0, 0x5a007264, 0x00347285,
    0x80031162, 0x72050aa0, 0x5a0071e4, 0x00467205,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043861, 0x3a050220, 0x000072e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000008f,
    0x00049931, 0x00020100, 0xfa085814, 0x04003a04,
    0xa3730061, 0x7f810000, 0x60730061, 0x00101b00,
    0x80003965, 0x59058220, 0x020000a4, 0xfffffc00,
    0xe05a0066, 0x48002603, 0x80031161, 0x6d060220,
    0x00447326, 0x00000000, 0x80031962, 0x6b060aa0,
    0x5a447306, 0x00446d06, 0x80030961, 0x73260220,
    0x00446b06, 0x00000000, 0x80021961, 0x75070220,
    0x00427327, 0x00000000, 0x80020061, 0x77070220,
    0x00427347, 0x00000000, 0x80021962, 0x6f070aa0,
    0x5a427507, 0x00427707, 0x80021161, 0x73470220,
    0x00426f07, 0x00000000, 0x80021961, 0x7b070220,
    0x00427327, 0x00000000, 0x80020061, 0x7d070220,
    0x00427367, 0x00000000, 0x80021962, 0x79070aa0,
    0x5a427b07, 0x00427d07, 0x80021161, 0x73670220,
    0x00427907, 0x00000000, 0x80021962, 0x73850aa0,
    0x5a007364, 0x00347385, 0x80021962, 0x74850aa0,
    0x5a007464, 0x00347485, 0x80031162, 0x74050aa0,
    0x5a0073e4, 0x00467405, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043961, 0x3b050220,
    0x000074e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005904, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa085a14, 0x04003b04, 0xa3750061, 0xff810000,
    0x60750061, 0x00101d00, 0x80003a65, 0x5b058220,
    0x020000a4, 0xfffffc00, 0xe05c0066, 0x4c002603,
    0x80031161, 0x03060220, 0x00447526, 0x00000000,
    0x80031962, 0x7e060aa0, 0x4a447506, 0x00440306,
    0x80030961, 0x75260220, 0x00447e06, 0x00000000,
    0x80021961, 0x07070220, 0x00427527, 0x00000000,
    0x80020061, 0x09070220, 0x00427547, 0x00000000,
    0x80021962, 0x05070aa0, 0x4a420707, 0x00420907,
    0x80021161, 0x75470220, 0x00420507, 0x00000000,
    0x80021961, 0x0d070220, 0x00427527, 0x00000000,
    0x80020061, 0x0f070220, 0x00427567, 0x00000000,
    0x80021962, 0x0b070aa0, 0x4a420d07, 0x00420f07,
    0x80021161, 0x75670220, 0x00420b07, 0x00000000,
    0x80021962, 0x75850aa0, 0x4a007564, 0x00347585,
    0x80021962, 0x76850aa0, 0x4a007664, 0x00347685,
    0x80031162, 0x76050aa0, 0x4a0075e4, 0x00467605,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043a61, 0x3c050220, 0x000076e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005b04, 0x0000008f,
    0x00049831, 0x00020100, 0xfa085c14, 0x04003c04,
    0xa37c0061, 0xff810000, 0x607c0061, 0x00101f00,
    0x80000065, 0x5e058220, 0x020000a4, 0xfffffc00,
    0xe05f0066, 0x50002603, 0x80031161, 0x12060220,
    0x00447c26, 0x00000000, 0x80031962, 0x10060aa0,
    0x4a447c06, 0x00441206, 0x80030961, 0x7c260220,
    0x00441006, 0x00000000, 0x80021961, 0x16070220,
    0x00427c27, 0x00000000, 0x80020061, 0x18070220,
    0x00427c47, 0x00000000, 0x80021962, 0x14070aa0,
    0x4a421607, 0x00421807, 0x80021161, 0x7c470220,
    0x00421407, 0x00000000, 0x80020961, 0x1c070220,
    0x00427c27, 0x00000000, 0x80021361, 0x1e070220,
    0x00427c67, 0x00000000, 0x80021962, 0x1a070aa0,
    0x4a421c07, 0x00421e07, 0x80021161, 0x7c670220,
    0x00421a07, 0x00000000, 0x80021962, 0x7c850aa0,
    0x4a007c64, 0x00347c85, 0x80021962, 0x7d850aa0,
    0x4a007d64, 0x00347d85, 0x80031162, 0x7d050aa0,
    0x4a007ce4, 0x00467d05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043861, 0x3d050220,
    0x00007de4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005e04, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa085f14, 0x04003d04, 0xa37e0061, 0xff810000,
    0x607e0061, 0x00102300, 0x80003b65, 0x60058220,
    0x020000a4, 0xfffffc00, 0xe0610066, 0x54002603,
    0x80031161, 0x23060220, 0x00447e26, 0x00000000,
    0x80031962, 0x1f060aa0, 0x4a447e06, 0x00442306,
    0x80030961, 0x7e260220, 0x00441f06, 0x00000000,
    0x80021961, 0x2a070220, 0x00427e27, 0x00000000,
    0x80020061, 0x2c070220, 0x00427e47, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x28070aa0, 0x4a422a07, 0x00422c07,
    0x80021161, 0x7e470220, 0x00422807, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x30070220, 0x00427e27, 0x00000000,
    0x80023661, 0x32070220, 0x00427e67, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x2e070aa0, 0x4a423007, 0x00423207,
    0x80021161, 0x7e670220, 0x00422e07, 0x00000000,
    0x80021962, 0x7e850aa0, 0x4a007e64, 0x00347e85,
    0x80021962, 0x7f850aa0, 0x4a007f64, 0x00347f85,
    0x80031162, 0x7f050aa0, 0x4a007ee4, 0x00467f05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043b61, 0x3e050220, 0x00007fe4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006004, 0x0000008f,
    0x00049831, 0x00020100, 0xfa086114, 0x04003e04,
    0x00040070, 0x00018220, 0x52462105, 0x00000003,
    0x01040022, 0x0001c060, 0x00000310, 0x00000310,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x62058660, 0x02462105, 0x00000002,
    0xe0640068, 0x01e02103, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0660040, 0x62010202,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27680070, 0x02106603, 0x00030061, 0x6c060220,
    0x00346605, 0x00000000, 0x00130061, 0x6e060220,
    0x00346705, 0x00000000, 0x00040070, 0x00018220,
    0x52462105, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6a040660,
    0x0e2e0224, 0x68056405, 0x00031961, 0x6c260220,
    0x00346a05, 0x00000000, 0x00131a61, 0x6e260220,
    0x00346b05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80000065, 0x70058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003866, 0x10218220,
    0x02007004, 0x0000000f, 0x00049831, 0x3f160100,
    0xfa005514, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52462105, 0x00000002, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x3f050220,
    0x020072e4, 0x000074e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000198, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044831, 0x00000000,
    0xfb2a6c24, 0x01003f14, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0710040, 0x01006603,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27730070, 0x66007103, 0x00040070, 0x00018220,
    0x52462105, 0x00000001, 0x00030061, 0x77060220,
    0x00347105, 0x00000000, 0x00130061, 0x79060220,
    0x00347205, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0750040, 0x6a027302,
    0x00031961, 0x77260220, 0x00347505, 0x00000000,
    0x00131a61, 0x79260220, 0x00347605, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x7b058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003866, 0x10218220, 0x02007b04, 0x0000000f,
    0x00049831, 0x40160100, 0xfa005c14, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52462105, 0x00000002,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x40050220, 0x02007de4, 0x00007fe4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xfb2c7724, 0x01004014,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80031161, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs = {
   .prog_data = {
      .base.nr_params = 18,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 11808,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_procedurals_to_primrefs_printfs,
      .base.uses_atomic_load_store = false,
      .local_size = { 16, 1, 1 },
      .prog_offset = { 0, 0, 0 },
      .prog_mask = 2,
      .prog_spilled = 0,
      .uses_barrier = false,
      .uses_num_work_groups = false,
      .push.per_thread.dwords = 0,
      .push.per_thread.regs = 0,
      .push.per_thread.size = 0,
      .push.cross_thread.dwords = 18,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 40,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_procedurals_to_primrefs_args,
   .code = gfx125_bvh_build_primref_procedurals_to_primrefs_code,
};
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_sha1 = "237146e363b0635e7066c9299f32027c5bf901ba";
