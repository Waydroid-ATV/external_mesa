#include "intel/compiler/brw_kernel.h"

static const struct brw_shader_reloc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs[] = {
};
static const u_printf_info gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_printfs[] = {
};
static const struct brw_kernel_arg_desc gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_args[] = {
   { 0, 8 },
   { 8, 8 },
   { 16, 8 },
   { 24, 8 },
   { 32, 8 },
   { 40, 4 },
};

#if 0  /* BEGIN KERNEL ASSEMBLY */

and(1)          g54<1>UD        g0<0,1,0>UD     0xffffffc0UD    { align1 WE_all 1N };
mov(16)         g125<1>UD       g0.1<0,1,0>UD                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(1)         g1UD            g54UD           nullUD          0x0220d500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V16, transpose, L1STATE_L3MOCS dst_len = 2, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $0 };
add(1)          g55<1>UD        g54<0,1,0>UD    0x00000040UD    { align1 WE_all 1N $0.src compacted };
mov(8)          g36<1>UW        0x76543210V                     { align1 WE_all 1Q };
shl(16)         g32<1>D         g125<8,8,1>D    0x00000004UD    { align1 1H I@3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
send(1)         g3UD            g55UD           nullUD          0x0210c500                0x00000000
                            ugm MsgDesc: ( load, a32, d32, V8, transpose, L1STATE_L3MOCS dst_len = 1, src0_len = 1, src1_len = 0 flat )  base_offset 0  { align1 WE_all 1N $1 };
add(8)          g36.8<1>UW      g36<1,1,0>UW    0x0008UW        { align1 WE_all 1Q I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
mov(16)         g34<1>UD        g36<8,8,1>UW                    { align1 1H };
add(16)         g37<1>D         g32<1,1,0>D     g34<1,1,0>D     { align1 1H I@1 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
mov(8)          g4.1<2>D        g3.1<0,1,0>D                    { align1 1Q };
mov(8)          g6.1<2>D        g3.1<0,1,0>D                    { align1 2Q };
and(16)         g28<1>UD        g3.2<0,1,0>UD   0x00ffffffUD    { align1 1H };
mov(16)         g30<1>UD        g3.11<0,1,0>UB                  { align1 1H };
mov(8)          g4<2>D          g3<0,1,0>D                      { align1 1Q I@4 };
mov(8)          g6<2>D          g3<0,1,0>D                      { align1 2Q I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g26UD           g4UD            nullUD          0x08200580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $2 };
cmp.l.f0.0(16)  null<1>UD       g37<8,8,1>UD    g26<8,8,1>UD    { align1 1H @7 $2.dst };
(+f0.0) if(16)  JIP:  LABEL1          UIP:  LABEL0              { align1 1H };
and(1)          g73<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
shl(16)         g74<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
mov(8)          g5.1<2>D        g2.7<0,1,0>D                    { align1 1Q $2.src };
mov(8)          g7.1<2>D        g2.7<0,1,0>D                    { align1 2Q $2.src };
mov(8)          g5<2>D          g2.6<0,1,0>D                    { align1 1Q I@2 };
mov(8)          g7<2>D          g2.6<0,1,0>D                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g39UD           g5UD            nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $3 };
mul(8)          acc0<1>UD       g37<8,8,1>UD    g43<16,8,2>UW   { align1 1Q $3.dst };
mul(16)         g49<1>D         g37<8,8,1>D     g43<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g66<1>D         g37<8,8,1>D     g43.1<16,8,2>UW { align1 1H };
mul(16)         g51<1>D         g37<8,8,1>D     g45<16,8,2>UW   { align1 1H $3.dst };
mul(16)         g68<1>D         g37<8,8,1>D     g45.1<16,8,2>UW { align1 1H };
mach(8)         g47<1>UD        g37<1,1,0>UD    g43<1,1,0>UD    { align1 1Q compacted AccWrEnable };
add(16)         g49.1<2>UW      g49.1<16,8,2>UW g66<16,8,2>UW   { align1 1H I@4 };
add(16)         g51.1<2>UW      g51.1<16,8,2>UW g68<16,8,2>UW   { align1 1H I@3 };
mul(8)          acc0<1>UD       g38<8,8,1>UD    g44<16,8,2>UW   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
add(16)         g55<1>D         g39<1,1,0>D     g49<1,1,0>D     { align1 1H @3 $3.dst compacted };
mach(8)         g48<1>UD        g38<8,8,1>UD    g44<8,8,1>UD    { align1 2Q AccWrEnable };
cmp.l.f0.0(16)  g57<1>UD        g55<1,1,0>UD    g39<1,1,0>UD    { align1 1H I@2 compacted };
mov(8)          g61<2>UD        g55<4,4,1>UD                    { align1 1Q };
mov(8)          g63<2>UD        g56<4,4,1>UD                    { align1 2Q };
add(16)         g53<1>D         g47<1,1,0>D     g51<1,1,0>D     { align1 1H I@4 compacted };
add3(16)        g59<1>D         g41<8,8,1>D     g53<8,8,1>D     -g57<1,1,1>D { align1 1H @1 $3.dst };
mov(8)          g61.1<2>UD      g59<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g63.1<2>UD      g60<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g65UD           g61UD           nullUD          0x08803580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V4, L1STATE_L3MOCS dst_len = 8, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $4 };
or(1)           a0.1<1>UD       g73<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N $4.dst };
send(16)        nullUD          g74UD           g65UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g76<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g77<1>UD        g74<1,1,0>UD    0x00000040UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g76<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g77UD           g67UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g78<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g79<1>UD        g74<1,1,0>UD    0x00000080UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g78<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g79UD           g69UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
and(1)          g80<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g81<1>UD        g74<1,1,0>UD    0x000000c0UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g80<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g81UD           g71UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
add(16)         g82<1>D         g55<1,1,0>D     16D             { align1 1H $7.src compacted };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g97<1>UD        g74<1,1,0>UD    0x00000100UD    { align1 1H compacted };
cmp.l.f0.0(16)  g84<1>UD        g82<1,1,0>UD    g55<1,1,0>UD    { align1 1H I@3 compacted };
mov(8)          g88<2>UD        g82<4,4,1>UD                    { align1 1Q };
mov(8)          g90<2>UD        g83<4,4,1>UD                    { align1 2Q };
add(16)         g86<1>D         -g84<1,1,0>D    g59<1,1,0>D     { align1 1H I@3 compacted };
mov(8)          g88.1<2>UD      g86<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g90.1<2>UD      g87<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g92UD           g88UD           nullUD          0x08401580                0x00000000
                            ugm MsgDesc: ( load, a64, d32, V2, L1STATE_L3MOCS dst_len = 4, src0_len = 4, src1_len = 0 flat )  base_offset 0  { align1 1H $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@7 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g97UD           g92UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
and(1)          g98<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
or(16)          g99<1>UD        g74<1,1,0>UD    0x00000140UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g98<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g99UD           g94UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g100<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $10.src };
cmp.l.f0.0(16)  g103<1>F        (abs)g67<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.l(16)       g7<1>F          g67<1,1,0>F     g92<1,1,0>F     { align1 1H $9.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sel.l(16)       g15<1>F         g69<1,1,0>F     g94<1,1,0>F     { align1 1H $6.src compacted };
sel.ge(16)      g19<1>F         g67<1,1,0>F     g92<1,1,0>F     { align1 1H compacted };
sel.ge(16)      g21<1>F         g69<1,1,0>F     g94<1,1,0>F     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g100<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g101UD          g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
cmp.l.f0.0(16)  g105<1>F        (abs)g101<1,1,0>F 0x7f800000F  /* infF */ { align1 1H $11.dst compacted };
sel.l(16)       g125<1>F        g101<1,1,0>F    g71<1,1,0>F     { align1 1H $7.src compacted };
sel.ge(16)      g17<1>F         g101<1,1,0>F    g71<1,1,0>F     { align1 1H compacted };
cmp.l.f0.0(16)  g109<1>F        (abs)g69<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g113<1>F        (abs)g92<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g107<1>UD       g103<1,1,0>UD   g105<1,1,0>UD   { align1 1H F@5 compacted };
cmp.l.f0.0(16)  g115<1>F        (abs)g71<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
cmp.l.f0.0(16)  g119<1>F        (abs)g94<1,1,0>F 0x7f800000F  /* infF */ { align1 1H compacted };
and(16)         g111<1>UD       g107<1,1,0>UD   g109<1,1,0>UD   { align1 1H A@1 compacted };
and(16)         g117<1>UD       g113<1,1,0>UD   g115<1,1,0>UD   { align1 1H F@2 compacted };
and(16)         g121<1>UD       g117<1,1,0>UD   g119<1,1,0>UD   { align1 1H A@1 compacted };
and.nz.f0.0(16) g123<1>UD       g111<1,1,0>UD   g121<1,1,0>UD   { align1 1H I@1 compacted };
(+f0.0) sel(16) g9<1>UD         g17<8,8,1>UD    0xff800000UD    { align1 1H F@5 };
(+f0.0) sel(16) g11<1>UD        g19<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
(+f0.0) sel(16) g13<1>UD        g21<8,8,1>UD    0xff800000UD    { align1 1H F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
(+f0.0) sel(16) g3<1>UD         g125<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
(+f0.0) sel(16) g5<1>UD         g7<8,8,1>UD     0x7f800000UD    { align1 1H $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(16)         g76<2>W         -g123<8,8,1>D                   { align1 1H I@6 };
(+f0.0) sel(16) g7<1>UD         g15<8,8,1>UD    0x7f800000UD    { align1 1H F@7 };
mov(16)         g24<1>UW        g76<16,8,2>UW                   { align1 1H I@2 };
else(16)        JIP:  LABEL0          UIP:  LABEL0              { align1 1H };

LABEL1:
mov(16)         g24<1>UW        0x0000UW                        { align1 1H I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g7<1>UD         0x7f800000UD                    { align1 1H I@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g5<1>UD         0x7f800000UD                    { align1 1H I@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
mov(16)         g3<1>UD         0x7f800000UD                    { align1 1H I@6 };
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
mov(16)         g26<1>UD        f0<0,1,0>UW                     { align1 1H };
bfi1(16)        g32<1>UD        g34<8,8,1>D     0D              { align1 1H };
cbit(16)        g15<1>UD        g26<8,8,1>UD                    { align1 1H I@2 };
cmp.z.f0.0(16)  null<1>D        g34<8,8,1>D     0D              { align1 1H };
and(16)         g39<1>UD        g26<1,1,0>UD    g32<1,1,0>UD    { align1 1H I@3 compacted };
cbit(16)        g41<1>UD        g39<8,8,1>UD                    { align1 1H I@1 };
(+f0.0) if(16)  JIP:  LABEL3          UIP:  LABEL3              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g43<1>D         g2<0,1,0>D      36D             { align1 1H compacted };
cmp.l.f0.0(16)  g45<1>UD        g43<1,1,0>UD    g2<0,1,0>UD     { align1 1H I@1 compacted };
mov(8)          g49<2>UD        g43<4,4,1>UD                    { align1 1Q };
mov(8)          g51<2>UD        g44<4,4,1>UD                    { align1 2Q };
add(16)         g47<1>D         -g45<1,1,0>D    g2.1<0,1,0>D    { align1 1H I@3 compacted };
mov(8)          g49.1<2>UD      g47<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g51.1<2>UD      g48<4,4,1>UD                    { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        g25UD           g49UD           g15UD           0x0824058c                0x00000080
                            ugm MsgDesc: ( atomic_add, a64, d32, V1, L1UC_L3WB dst_len = 2, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $12 };

LABEL3:
endif(16)       JIP:  LABEL4                                    { align1 1H };

LABEL4:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
add(16)         g50<1>D         g41<1,1,0>D     g25<0,1,0>D     { align1 1H $12.dst compacted };
mov.nz.f0.0(16) null<1>D        g23<8,8,1>D                     { align1 1H };
(+f0.0) if(16)  JIP:  LABEL5          UIP:  LABEL5              { align1 1H };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
shl(16)         g53<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H };
and(1)          g57<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
or(16)          g55<1>UD        g53<1,1,0>UD    0x000002c0UD    { align1 1H I@2 compacted };
or(16)          g58<1>UD        g53<1,1,0>UD    0x00000200UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g52<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g16UD           g55UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g57<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g58UD           g3UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
and(1)          g60<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g61<1>UD        g53<1,1,0>UD    0x00000240UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g60<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g61UD           g5UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
and(1)          g63<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
or(16)          g64<1>UD        g53<1,1,0>UD    0x00000280UD    { align1 1H $4.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g63<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g64UD           g7UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
and(1)          g66<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g66<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g55UD           g16UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g67<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
or(16)          g68<1>UD        g53<1,1,0>UD    0x000003c0UD    { align1 1H F@4 compacted };
and(1)          g70<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@4 };
or(16)          g71<1>UD        g53<1,1,0>UD    0x00000300UD    { align1 1H F@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g67<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g68UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g70<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g71UD           g9UD            0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
and(1)          g73<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g74<1>UD        g53<1,1,0>UD    0x00000340UD    { align1 1H $11.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g73<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g74UD           g11UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
and(1)          g76<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g77<1>UD        g53<1,1,0>UD    0x00000380UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g76<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g77UD           g13UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
and(1)          g79<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g79<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g17UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
shl(16)         g80<1>D         g30<8,8,1>D     0x0000001dUD    { align1 1H $7.src };
and(1)          g82<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g83<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g85<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g82<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g18UD           g58UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g83<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g20UD           g61UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g22UD           g64UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $9 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g85<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g58UD           g18UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
and(1)          g86<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g86<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g61UD           g20UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g87<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g87<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g64UD           g22UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g55UD           g28UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
or(16)          g89<1>UD        g37<1,1,0>UD    g80<1,1,0>UD    { align1 1H I@7 compacted };
and(1)          g91<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
and(1)          g93<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@3 };
and(1)          g94<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g29<1>UD        g89<8,8,1>UD                    { align1 1H I@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g91<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g31UD           g71UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $14 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g37UD           g74UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $15 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g93<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N };
send(16)        g39UD           g77UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $0 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(16)         g23<1>UD        g31<8,8,1>UD                    { align1 1H $14.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.dst };
mov(16)         g25<1>UD        g37<8,8,1>UD                    { align1 1H $15.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
mov(16)         g27<1>UD        g39<8,8,1>UD                    { align1 1H $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $14.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g94<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g71UD           g31UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $15.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g74UD           g37UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
and(1)          g96<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g96<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g77UD           g39UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $2 };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g68UD           g89UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
shl(16)         g98<1>D         g50<8,8,1>D     0x00000005UD    { align1 1H $10.src };
shr(16)         g100<1>UD       g50<1,1,0>UD    0x0000001bUD    { align1 1H F@5 compacted };
and(1)          g112<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g113<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g114<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
and(1)          g115<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g102<1>D        g2.4<0,1,0>D    g98<1,1,0>D     { align1 1H A@5 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@5 };
or(1)           a0.1<1>UD       g112<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g15UD           g58UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $3 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g17UD           g61UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
or(1)           a0.1<1>UD       g114<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g19UD           g64UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
or(1)           a0.1<1>UD       g115<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N };
send(16)        g21UD           g55UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $1 };
cmp.l.f0.0(16)  g104<1>UD       g102<1,1,0>UD   g2.4<0,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g108<2>UD       g102<4,4,1>UD                   { align1 1Q };
mov(8)          g110<2>UD       g103<4,4,1>UD                   { align1 2Q };
add3(16)        g106<1>D        g2.5<0,1,0>D    g100<8,8,1>D    -g104<1,1,1>D { align1 1H I@3 };
mov(8)          g108.1<2>UD     g106<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g110.1<2>UD     g107<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g108UD          g15UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $12 };
add(16)         g116<1>D        g102<1,1,0>D    16D             { align1 1H compacted };
cmp.l.f0.0(16)  g118<1>UD       g116<1,1,0>UD   g102<1,1,0>UD   { align1 1H I@1 compacted };
mov(8)          g122<2>UD       g116<4,4,1>UD                   { align1 1Q };
mov(8)          g124<2>UD       g117<4,4,1>UD                   { align1 2Q };
add(16)         g120<1>D        -g118<1,1,0>D   g106<1,1,0>D    { align1 1H I@3 compacted };
mov(8)          g122.1<2>UD     g120<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g124.1<2>UD     g121<4,4,1>UD                   { align1 2Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
send(16)        nullUD          g122UD          g23UD           0x08003584                0x00000200
                            ugm MsgDesc: ( store, a64, d32, V4, L1STATE_L3MOCS dst_len = 0, src0_len = 4, src1_len = 8 flat )  base_offset 0  { align1 1H $12 };

LABEL5:
endif(16)       JIP:  LABEL6                                    { align1 1H };

LABEL6:
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g123<1>F        g3<1,1,0>F      g9<1,1,0>F      { align1 1H $14.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g125<1>F        g5<1,1,0>F      g11<1,1,0>F     { align1 1H $15.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
add(16)         g15<1>F         g7<1,1,0>F      g13<1,1,0>F     { align1 1H I@7 compacted };
cmp.ge.f0.0(16) g17<1>F         g9<1,1,0>F      g3<1,1,0>F      { align1 1H $12.src compacted };
mov(16)         g43<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@7 compacted };
mov(16)         g43<1>F         g3<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
and(1)          g38<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
shl(16)         g39<1>UD        g36<8,8,1>UW    0x00000002UD    { align1 1H $2.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g19<1>UD        g123<8,8,1>UD   0x7f800000UD    { align1 1H F@5 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $6.src };
mov(8)          g79<2>UD        g43.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
or(16)          g41<1>UD        g39<1,1,0>UD    0x00000580UD    { align1 1H I@3 compacted };
cmp.ge.f0.0(16) g21<1>F         g11<1,1,0>F     g5<1,1,0>F      { align1 1H $12.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $2.src };
sel.l(8)        g77<2>F         g43<8,4,2>F     g79<8,4,2>F     { align1 WE_all 1Q I@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g23<1>UD        g125<8,8,1>UD   0x7f800000UD    { align1 1H F@6 };
mov(8)          g43.1<2>UD      g77<8,4,2>UD                    { align1 WE_all 1Q A@1 };
cmp.ge.f0.0(16) g25<1>F         g13<1,1,0>F     g7<1,1,0>F      { align1 1H $12.dst compacted };
mov(4)          g83<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g85<4>UD        g43.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
(+f0.0) sel(16) g27<1>UD        g15<8,8,1>UD    0x7f800000UD    { align1 1H F@6 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.l(4)        g81<4>F         g83<8,2,4>F     g85<8,2,4>F     { align1 WE_all 1N I@2 };
cmp.nz.f0.0(16) null<1>D        g17<8,8,1>D     0D              { align1 1H F@6 };
mov(4)          g43.2<4>UD      g81<8,2,4>UD                    { align1 WE_all 1N F@1 };
(+f0.0) sel(16) g29<1>UD        g123<8,8,1>UD   0xff800000UD    { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g89<4>UD        g43.1<8,2,4>UD                  { align1 WE_all 1N I@2 };
mov(4)          g91<4>UD        g43.3<8,2,4>UD                  { align1 WE_all 1N $8.src };
cmp.nz.f0.0(16) null<1>D        g21<8,8,1>D     0D              { align1 1H F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.l(4)        g87<4>F         g89<8,2,4>F     g91<8,2,4>F     { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g31<1>UD        g125<8,8,1>UD   0xff800000UD    { align1 1H $1.src };
mov(4)          g43.3<4>UD      g87<8,2,4>UD                    { align1 WE_all 1N F@1 };
cmp.nz.f0.0(16) null<1>D        g25<8,8,1>D     0D              { align1 1H F@3 };
sel.l(4)        g43.4<1>F       g43.3<0,1,0>F   g43.4<4,4,1>F   { align1 WE_all 1N I@2 };
sel.l(4)        g44.4<1>F       g44.3<0,1,0>F   g44.4<4,4,1>F   { align1 WE_all 1N I@2 };
(+f0.0) sel(16) g36<1>UD        g15<8,8,1>UD    0xff800000UD    { align1 1H $11.src };
sel.l(8)        g44<1>F         g43.7<0,1,0>F   g44<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g45<1>UD        g44.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g38<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g41UD           g45UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
mov(16)         g74<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H $11.src compacted };
mov(16)         g74<1>F         g5<1,1,0>F                      { align1 1H compacted };
and(1)          g43<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
or(16)          g44<1>UD        g39<1,1,0>UD    0x000005c0UD    { align1 1H $4.src compacted };
mov(8)          g94<2>UD        g74.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.l(8)        g92<2>F         g74<8,4,2>F     g94<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g74.1<2>UD      g92<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
mov(4)          g98<4>UD        g74.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g100<4>UD       g74.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g96<4>F         g98<8,2,4>F     g100<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g74.2<4>UD      g96<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g104<4>UD       g74.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g106<4>UD       g74.3<8,2,4>UD                  { align1 WE_all 1N };
sel.l(4)        g102<4>F        g104<8,2,4>F    g106<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g74.3<4>UD      g102<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g74.4<1>F       g74.3<0,1,0>F   g74.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g75.4<1>F       g75.3<0,1,0>F   g75.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g75<1>F         g74.7<0,1,0>F   g75<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g46<1>UD        g75.7<0,1,0>UD                  { align1 1H $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g43<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g44UD           g46UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $5 };
mov(16)         g76<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g76<1>F         g7<1,1,0>F                      { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
and(1)          g45<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $5.src };
or(16)          g46<1>UD        g39<1,1,0>UD    0x00000600UD    { align1 1H $5.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
mov(8)          g109<2>UD       g76.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(8)        g107<2>F        g76<8,4,2>F     g109<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g76.1<2>UD      g107<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g113<4>UD       g76.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g115<4>UD       g76.2<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
sel.l(4)        g111<4>F        g113<8,2,4>F    g115<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g76.2<4>UD      g111<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g119<4>UD       g76.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g121<4>UD       g76.3<8,2,4>UD                  { align1 WE_all 1N $12.src };
sel.l(4)        g117<4>F        g119<8,2,4>F    g121<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g76.3<4>UD      g117<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g76.4<1>F       g76.3<0,1,0>F   g76.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g77.4<1>F       g77.3<0,1,0>F   g77.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g77<1>F         g76.7<0,1,0>F   g77<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g48<1>UD        g77.7<0,1,0>UD                  { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g45<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g46UD           g48UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $6 };
mov(16)         g78<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g78<1>F         g9<1,1,0>F                      { align1 1H compacted };
and(1)          g47<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $6.src };
or(16)          g48<1>UD        g39<1,1,0>UD    0x00000640UD    { align1 1H $6.src compacted };
mov(8)          g124<2>UD       g78.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g122<2>F        g78<8,4,2>F     g124<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g78.1<2>UD      g122<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g3<4>UD         g78.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g5<4>UD         g78.2<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g126<4>F        g3<8,2,4>F      g5<8,2,4>F      { align1 WE_all 1N I@1 };
mov(4)          g78.2<4>UD      g126<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g9<4>UD         g78.1<8,2,4>UD                  { align1 WE_all 1N A@1 };
mov(4)          g15<4>UD        g78.3<8,2,4>UD                  { align1 WE_all 1N };
sel.ge(4)       g7<4>F          g9<8,2,4>F      g15<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g78.3<4>UD      g7<8,2,4>UD                     { align1 WE_all 1N F@1 };
sel.ge(4)       g78.4<1>F       g78.3<0,1,0>F   g78.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g79.4<1>F       g79.3<0,1,0>F   g79.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g79<1>F         g78.7<0,1,0>F   g79<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g50<1>UD        g79.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g47<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g48UD           g50UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
mov(16)         g85<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g85<1>F         g11<1,1,0>F                     { align1 1H compacted };
and(1)          g50<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $12.src };
or(16)          g51<1>UD        g39<1,1,0>UD    0x00000680UD    { align1 1H $7.src compacted };
mov(8)          g21<2>UD        g85.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sel.ge(8)       g16<2>F         g85<8,4,2>F     g21<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g85.1<2>UD      g16<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $5.src };
mov(4)          g43<4>UD        g85.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g45<4>UD        g85.2<8,2,4>UD                  { align1 WE_all 1N $6.src };
sel.ge(4)       g25<4>F         g43<8,2,4>F     g45<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g85.2<4>UD      g25<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g55<4>UD        g85.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g57<4>UD        g85.3<8,2,4>UD                  { align1 WE_all 1N $3.src };
sel.ge(4)       g53<4>F         g55<8,2,4>F     g57<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g85.3<4>UD      g53<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g85.4<1>F       g85.3<0,1,0>F   g85.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g86.4<1>F       g86.3<0,1,0>F   g86.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g86<1>F         g85.7<0,1,0>F   g86<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g53<1>UD        g86.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g50<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g51UD           g53UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $8 };
mov(16)         g87<1>F         0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g87<1>F         g13<1,1,0>F                     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
and(1)          g52<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $8.src };
or(16)          g53<1>UD        g39<1,1,0>UD    0x000006c0UD    { align1 1H $8.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g60<2>UD        g87.1<8,4,2>UD                  { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $3.src };
sel.ge(8)       g58<2>F         g87<8,4,2>F     g60<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g87.1<2>UD      g58<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(4)          g64<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g66<4>UD        g87.2<8,2,4>UD                  { align1 WE_all 1N $4.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
sel.ge(4)       g62<4>F         g64<8,2,4>F     g66<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g87.2<4>UD      g62<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $1.src };
mov(4)          g70<4>UD        g87.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g72<4>UD        g87.3<8,2,4>UD                  { align1 WE_all 1N $1.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
sel.ge(4)       g68<4>F         g70<8,2,4>F     g72<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g87.3<4>UD      g68<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g87.4<1>F       g87.3<0,1,0>F   g87.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(4)       g88.4<1>F       g88.3<0,1,0>F   g88.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.ge(8)       g88<1>F         g87.7<0,1,0>F   g88<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g55<1>UD        g88.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g52<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g53UD           g55UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL7          UIP:  LABEL7              { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
add(16)         g54<1>D         g2.2<0,1,0>D    128D            { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
shl(16)         g59<1>D         g34<8,8,1>D     0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@6 };
shr(16)         g61<1>UD        g34<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@3 };
cmp.l.f0.0(16)  g56<1>UD        g54<1,1,0>UD    g2.2<0,1,0>UD   { align1 1H $7.src compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@3 };
add(16)         g63<1>D         g54<1,1,0>D     g59<1,1,0>D     { align1 1H compacted };
add(16)         g58<1>D         -g56<1,1,0>D    g2.3<0,1,0>D    { align1 1H I@2 compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@2 };
cmp.l.f0.0(16)  g65<1>UD        g63<1,1,0>UD    g54<1,1,0>UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@4 };
mov(8)          g69<2>UD        g63<4,4,1>UD                    { align1 1Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 3N F@4 };
mov(8)          g71<2>UD        g64<4,4,1>UD                    { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N A@4 };
add3(16)        g67<1>D         g58<8,8,1>D     g61<8,8,1>D     -g65<1,1,1>D { align1 1H };
mov(8)          g69.1<2>UD      g67<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g71.1<2>UD      g68<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL9          UIP:  LABEL8              { align1 1H };
and(1)          g73<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@4 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g73<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $4.src };
send(16)        g56UD           g41UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $4 };
else(16)        JIP:  LABEL8          UIP:  LABEL8              { align1 1H };

LABEL9:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g56<1>UD        g75.7<0,1,0>UD  g77.7<0,1,0>UD  { align1 1H @7 $4.dst };

LABEL8:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g69UD           g56UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $7 };
add(16)         g74<1>D         g63<1,1,0>D     12D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g76<1>UD        g74<1,1,0>UD    g63<1,1,0>UD    { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g80<2>UD        g74<4,4,1>UD                    { align1 1Q };
mov(8)          g82<2>UD        g75<4,4,1>UD                    { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g78<1>D         -g76<1,1,0>D    g67<1,1,0>D     { align1 1H compacted };
mov(8)          g80.1<2>UD      g78<4,4,1>UD                    { align1 1Q I@1 };
mov(8)          g82.1<2>UD      g79<4,4,1>UD                    { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL11         UIP:  LABEL10             { align1 1H };
and(1)          g84<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g84<0,1,0>UD    0x0000000fUD    { align1 WE_all 1N $7.src };
send(16)        g57UD           g48UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $7 };
else(16)        JIP:  LABEL10         UIP:  LABEL10             { align1 1H };

LABEL11:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
(+f0.0) sel(16) g57<1>UD        g86.7<0,1,0>UD  g88.7<0,1,0>UD  { align1 1H $7.dst };

LABEL10:
endif(16)       JIP:  LABEL7                                    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g80UD           g57UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $9 };

LABEL7:
endif(16)       JIP:  LABEL12                                   { align1 1H };

LABEL12:
mov(16)         g88<1>F         0x7f800000F      /* infF */     { align1 WE_all 1H I@3 compacted };
mov(16)         g88<1>F         g19<1,1,0>F                     { align1 1H compacted };
and(1)          g85<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@7 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@2 };
or(16)          g86<1>UD        g39<1,1,0>UD    0x00000400UD    { align1 1H compacted };
mov(8)          g75<2>UD        g88.1<8,4,2>UD                  { align1 WE_all 1Q A@1 };
sel.l(8)        g73<2>F         g88<8,4,2>F     g75<8,4,2>F     { align1 WE_all 1Q A@1 };
mov(8)          g88.1<2>UD      g73<8,4,2>UD                    { align1 WE_all 1Q A@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
mov(4)          g79<4>UD        g88.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g81<4>UD        g88.2<8,2,4>UD                  { align1 WE_all 1N $9.src };
sel.l(4)        g77<4>F         g79<8,2,4>F     g81<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g88.2<4>UD      g77<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g90<4>UD        g88.1<8,2,4>UD                  { align1 WE_all 1N I@1 };
mov(4)          g92<4>UD        g88.3<8,2,4>UD                  { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sel.l(4)        g83<4>F         g90<8,2,4>F     g92<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g88.3<4>UD      g83<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.l(4)        g88.4<1>F       g88.3<0,1,0>F   g88.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(4)        g89.4<1>F       g89.3<0,1,0>F   g89.4<4,4,1>F   { align1 WE_all 1N I@1 };
sel.l(8)        g89<1>F         g88.7<0,1,0>F   g89<8,8,1>F     { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $9.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g58<1>UD        g89.7<0,1,0>UD                  { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g85<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g86UD           g58UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
mov(16)         g114<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g114<1>F        g23<1,1,0>F                     { align1 1H compacted };
and(1)          g88<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N F@2 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@5 };
or(16)          g89<1>UD        g39<1,1,0>UD    0x00000440UD    { align1 1H compacted };
mov(8)          g95<2>UD        g114.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g93<2>F         g114<8,4,2>F    g95<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g114.1<2>UD     g93<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g99<4>UD        g114.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g101<4>UD       g114.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g97<4>F         g99<8,2,4>F     g101<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g114.2<4>UD     g97<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g105<4>UD       g114.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g107<4>UD       g114.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g103<4>F        g105<8,2,4>F    g107<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g114.3<4>UD     g103<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g114.4<1>F      g114.3<0,1,0>F  g114.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g115.4<1>F      g115.3<0,1,0>F  g115.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g115<1>F        g114.7<0,1,0>F  g115<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g59<1>UD        g115.7<0,1,0>UD                 { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g88<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g89UD           g59UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $11 };
mov(16)         g116<1>F        0x7f800000F      /* infF */     { align1 WE_all 1H compacted };
mov(16)         g116<1>F        g27<1,1,0>F                     { align1 1H compacted };
and(1)          g90<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $11.src };
or(16)          g91<1>UD        g39<1,1,0>UD    0x00000480UD    { align1 1H compacted };
mov(8)          g110<2>UD       g116.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.l(8)        g108<2>F        g116<8,4,2>F    g110<8,4,2>F    { align1 WE_all 1Q I@1 };
mov(8)          g116.1<2>UD     g108<8,4,2>UD                   { align1 WE_all 1Q A@1 };
mov(4)          g118<4>UD       g116.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g120<4>UD       g116.2<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g112<4>F        g118<8,2,4>F    g120<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g116.2<4>UD     g112<8,2,4>UD                   { align1 WE_all 1N F@1 };
mov(4)          g124<4>UD       g116.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g126<4>UD       g116.3<8,2,4>UD                 { align1 WE_all 1N };
sel.l(4)        g122<4>F        g124<8,2,4>F    g126<8,2,4>F    { align1 WE_all 1N I@1 };
mov(4)          g116.3<4>UD     g122<8,2,4>UD                   { align1 WE_all 1N F@1 };
sel.l(4)        g116.4<1>F      g116.3<0,1,0>F  g116.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(4)        g117.4<1>F      g117.3<0,1,0>F  g117.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.l(8)        g117<1>F        g116.7<0,1,0>F  g117<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g60<1>UD        g117.7<0,1,0>UD                 { align1 1H $11.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g90<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g91UD           g60UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $12 };
mov(16)         g118<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g118<1>F        g29<1,1,0>F                     { align1 1H compacted };
and(1)          g92<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $12.src };
or(16)          g93<1>UD        g39<1,1,0>UD    0x000004c0UD    { align1 1H compacted };
mov(8)          g5<2>UD         g118.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g3<2>F          g118<8,4,2>F    g5<8,4,2>F      { align1 WE_all 1Q I@1 };
mov(8)          g118.1<2>UD     g3<8,4,2>UD                     { align1 WE_all 1Q A@1 };
mov(4)          g9<4>UD         g118.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g11<4>UD        g118.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g7<4>F          g9<8,2,4>F      g11<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g118.2<4>UD     g7<8,2,4>UD                     { align1 WE_all 1N F@1 };
mov(4)          g15<4>UD        g118.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g17<4>UD        g118.3<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g13<4>F         g15<8,2,4>F     g17<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g118.3<4>UD     g13<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g118.4<1>F      g118.3<0,1,0>F  g118.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g119.4<1>F      g119.3<0,1,0>F  g119.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g119<1>F        g118.7<0,1,0>F  g119<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g61<1>UD        g119.7<0,1,0>UD                 { align1 1H $12.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g92<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g93UD           g61UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
mov(16)         g125<1>F        0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g125<1>F        g31<1,1,0>F                     { align1 1H compacted };
and(1)          g95<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
or(16)          g96<1>UD        g39<1,1,0>UD    0x00000500UD    { align1 1H compacted };
mov(8)          g20<2>UD        g125.1<8,4,2>UD                 { align1 WE_all 1Q F@1 };
sel.ge(8)       g18<2>F         g125<8,4,2>F    g20<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g125.1<2>UD     g18<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g24<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N I@1 };
mov(4)          g26<4>UD        g125.2<8,2,4>UD                 { align1 WE_all 1N };
sel.ge(4)       g22<4>F         g24<8,2,4>F     g26<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g125.2<4>UD     g22<8,2,4>UD                    { align1 WE_all 1N F@1 };
mov(4)          g30<4>UD        g125.1<8,2,4>UD                 { align1 WE_all 1N A@1 };
mov(4)          g32<4>UD        g125.3<8,2,4>UD                 { align1 WE_all 1N F@3 };
sel.ge(4)       g28<4>F         g30<8,2,4>F     g32<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g125.3<4>UD     g28<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g125.4<1>F      g125.3<0,1,0>F  g125.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(4)       g126.4<1>F      g126.3<0,1,0>F  g126.4<4,4,1>F  { align1 WE_all 1N I@1 };
sel.ge(8)       g126<1>F        g125.7<0,1,0>F  g126<8,8,1>F    { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g62<1>UD        g126.7<0,1,0>UD                 { align1 1H $10.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g95<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g96UD           g62UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $13 };
mov(16)         g3<1>F          0xff800000F      /* -infF */    { align1 WE_all 1H compacted };
mov(16)         g3<1>F          g36<1,1,0>F                     { align1 1H compacted };
and(1)          g97<1>UD        g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N $13.src };
or(16)          g98<1>UD        g39<1,1,0>UD    0x00000540UD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $4.src };
mov(8)          g41<2>UD        g3.1<8,4,2>UD                   { align1 WE_all 1Q F@1 };
sel.ge(8)       g36<2>F         g3<8,4,2>F      g41<8,4,2>F     { align1 WE_all 1Q I@1 };
mov(8)          g3.1<2>UD       g36<8,4,2>UD                    { align1 WE_all 1Q A@1 };
mov(4)          g45<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g47<4>UD        g3.2<8,2,4>UD                   { align1 WE_all 1N $7.src };
sel.ge(4)       g43<4>F         g45<8,2,4>F     g47<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g3.2<4>UD       g43<8,2,4>UD                    { align1 WE_all 1N F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $8.src };
mov(4)          g51<4>UD        g3.1<8,2,4>UD                   { align1 WE_all 1N I@1 };
mov(4)          g53<4>UD        g3.3<8,2,4>UD                   { align1 WE_all 1N $7.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $7.src };
sel.ge(4)       g49<4>F         g51<8,2,4>F     g53<8,2,4>F     { align1 WE_all 1N I@1 };
mov(4)          g3.3<4>UD       g49<8,2,4>UD                    { align1 WE_all 1N F@1 };
sel.ge(4)       g3.4<1>F        g3.3<0,1,0>F    g3.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(4)       g4.4<1>F        g4.3<0,1,0>F    g4.4<4,4,1>F    { align1 WE_all 1N I@1 };
sel.ge(8)       g4<1>F          g3.7<0,1,0>F    g4<8,8,1>F      { align1 WE_all 1Q F@1 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N F@1 };
mov(16)         g63<1>UD        g4.7<0,1,0>UD                   { align1 1H $13.src };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g97<0,1,0>UD    0x0000008fUD    { align1 WE_all 1N };
send(16)        nullUD          g98UD           g63UD           0x44000504                a0.1<0>UD
                            ugm MsgDesc: ( store, a32, d32, V1, L1STATE_L3MOCS dst_len = 0, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000003UD    { align1 1H };
(+f0.0) if(16)  JIP:  LABEL13         UIP:  LABEL13             { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.src };
shl(16)         g99<1>D         g34<8,8,1>D     0x00000002UD    { align1 1H };
shr(16)         g101<1>UD       g34<1,1,0>UD    0x0000001eUD    { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $0.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g103<1>D        g2<0,1,0>D      g99<1,1,0>D     { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g105<1>UD       g103<1,1,0>UD   g2<0,1,0>UD     { align1 1H compacted };
mov(8)          g109<2>UD       g103<4,4,1>UD                   { align1 1Q };
mov(8)          g111<2>UD       g104<4,4,1>UD                   { align1 2Q };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add3(16)        g107<1>D        g2.1<0,1,0>D    g101<8,8,1>D    -g105<1,1,1>D { align1 1H };
mov(8)          g109.1<2>UD     g107<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g111.1<2>UD     g108<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL15         UIP:  LABEL14             { align1 1H };
and(1)          g113<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g113<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $10.src };
send(16)        g64UD           g86UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
else(16)        JIP:  LABEL14         UIP:  LABEL14             { align1 1H };

LABEL15:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
(+f0.0) sel(16) g64<1>UD        g115.7<0,1,0>UD g117.7<0,1,0>UD { align1 1H };

LABEL14:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g109UD          g64UD           0x08040595                0x00000080
                            ugm MsgDesc: ( atomic_fmin, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $10 };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
add(16)         g114<1>D        g103<1,1,0>D    16D             { align1 1H compacted };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
cmp.l.f0.0(16)  g116<1>UD       g114<1,1,0>UD   g103<1,1,0>UD   { align1 1H compacted };
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000001UD    { align1 1H };
mov(8)          g120<2>UD       g114<4,4,1>UD                   { align1 1Q };
mov(8)          g122<2>UD       g115<4,4,1>UD                   { align1 2Q };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@4 };
add(16)         g118<1>D        -g116<1,1,0>D   g107<1,1,0>D    { align1 1H compacted };
mov(8)          g120.1<2>UD     g118<4,4,1>UD                   { align1 1Q I@1 };
mov(8)          g122.1<2>UD     g119<4,4,1>UD                   { align1 2Q I@2 };
(+f0.0) if(16)  JIP:  LABEL17         UIP:  LABEL16             { align1 1H };
and(1)          g124<1>UD       g0.5<0,1,0>UD   0xfffffc00UD    { align1 WE_all 1N };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@1 };
or(1)           a0.1<1>UD       g124<0,1,0>UD   0x0000000fUD    { align1 WE_all 1N $10.src };
send(16)        g65UD           g93UD           nullUD          0x44200500                a0.1<0>UD
                            ugm MsgDesc: ( load, a32, d32, V1, L1STATE_L3MOCS dst_len = 2, src0_len = 2, ss )  surface_state_index 0  { align1 1H @1 $10 };
else(16)        JIP:  LABEL16         UIP:  LABEL16             { align1 1H };

LABEL17:
cmp.l.f0.0(16)  null<1>UD       g34<8,8,1>UD    0x00000002UD    { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
(+f0.0) sel(16) g65<1>UD        g126.7<0,1,0>UD g4.7<0,1,0>UD   { align1 1H };

LABEL16:
endif(16)       JIP:  LABEL13                                   { align1 1H };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N $10.dst };
sync nop(1)                     null<0,1,0>UB                   { align1 WE_all 1N I@2 };
send(16)        nullUD          g120UD          g65UD           0x08040596                0x00000080
                            ugm MsgDesc: ( atomic_fmax, a64, d32, V1, L1UC_L3WB dst_len = 0, src0_len = 4, src1_len = 2 flat )  base_offset 0  { align1 1H $14 };

LABEL13:
endif(16)       JIP:  LABEL18                                   { align1 1H };

LABEL18:
mov(8)          g126<1>UD       g0<8,8,1>UD                     { align1 WE_all 1Q };
send(16)        nullUD          g126UD          nullUD          0x02000000                0x00000000
                            gateway MsgDesc: (open)  mlen 1 ex_mlen 0 rlen 0 { align1 WE_all 1H A@1 EOT };

#endif /* END KERNEL ASSEMBLY */
static const uint32_t gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code[] = {
    0x80000065, 0x36058220, 0x02000004, 0xffffffc0,
    0x00040061, 0x7d050220, 0x00000024, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80004031, 0x01140000, 0xfa00360c, 0x00340000,
    0xe2373040, 0x04013603, 0x80030061, 0x24054410,
    0x00000000, 0x76543210, 0x00041b69, 0x20058660,
    0x02467d05, 0x00000004, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80004131, 0x030c0000,
    0xfa00370c, 0x00300000, 0x64241a40, 0x00802495,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x22050120, 0x00462405, 0x00000000,
    0xa0251940, 0x22002002, 0x80002101, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x04260660,
    0x00000324, 0x00000000, 0x00130061, 0x06260660,
    0x00000324, 0x00000000, 0x00040065, 0x1c058220,
    0x02000344, 0x00ffffff, 0x00040061, 0x1e050020,
    0x0000035c, 0x00000000, 0x00031c61, 0x04060660,
    0x00000304, 0x00000000, 0x00131c61, 0x06060660,
    0x00000304, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044231, 0x1a140000,
    0xfb000424, 0x00000000, 0x0004f270, 0x00010220,
    0x52462505, 0x00461a05, 0x01040022, 0x0001c060,
    0x00000658, 0x000005b8, 0x80000065, 0x49058220,
    0x020000a4, 0xfffffc00, 0x00040069, 0x4a058120,
    0x02462405, 0x00000002, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x00033261, 0x05260660,
    0x000002e4, 0x00000000, 0x00133261, 0x07260660,
    0x000002e4, 0x00000000, 0x00031a61, 0x05060660,
    0x000002c4, 0x00000000, 0x00131a61, 0x07060660,
    0x000002c4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044331, 0x27440000,
    0xfb000524, 0x000c0000, 0x00032341, 0x20010220,
    0x01462505, 0x00562b06, 0x00042341, 0x31050660,
    0x01462505, 0x00562b06, 0x00040041, 0x42050660,
    0x01462505, 0x00562b16, 0x00042341, 0x33050660,
    0x01462505, 0x00562d06, 0x00040041, 0x44050660,
    0x01462505, 0x00562d16, 0x3e2f0049, 0x2b002503,
    0x00041c40, 0x31160110, 0x01563116, 0x00564206,
    0x00041b40, 0x33160110, 0x01563316, 0x00564406,
    0x00130041, 0x20010220, 0x01462605, 0x00562c06,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xa037b340, 0x31002702, 0x00130049, 0x30050222,
    0x02462605, 0x00462c05, 0x27391a70, 0x27003703,
    0x00030061, 0x3d060220, 0x00343705, 0x00000000,
    0x00130061, 0x3f060220, 0x00343805, 0x00000000,
    0xa0351c40, 0x33002f02, 0x00049352, 0x3b040e68,
    0x0e2e2905, 0x39053505, 0x00031961, 0x3d260220,
    0x00343b05, 0x00000000, 0x00131a61, 0x3f260220,
    0x00343c05, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044431, 0x41440000,
    0xfb003d24, 0x000c0000, 0x80002466, 0x10218220,
    0x02004904, 0x0000008f, 0x00049431, 0x00020100,
    0xfa084a14, 0x04004104, 0x80000065, 0x4c058220,
    0x020000a4, 0xfffffc00, 0xe04d3466, 0x04004a03,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004c04, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084d14, 0x04004304,
    0x80003565, 0x4e058220, 0x020000a4, 0xfffffc00,
    0xe04f0066, 0x08004a03, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004e04, 0x0000008f, 0x00049631, 0x00020100,
    0xfa084f14, 0x04004504, 0x80003665, 0x50058220,
    0x020000a4, 0xfffffc00, 0xe0510066, 0x0c004a03,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005004, 0x0000008f,
    0x00049731, 0x00020100, 0xfa085114, 0x04004704,
    0xa0523740, 0x01003703, 0x80000065, 0x60058220,
    0x020000a4, 0xfffffc00, 0xe0610066, 0x10004a03,
    0x27541b70, 0x37005203, 0x00030061, 0x58060220,
    0x00345205, 0x00000000, 0x00130061, 0x5a060220,
    0x00345305, 0x00000000, 0xa0561b40, 0x3b025402,
    0x00031961, 0x58260220, 0x00345605, 0x00000000,
    0x00131a61, 0x5a260220, 0x00345705, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044831, 0x5c240000, 0xfb005824, 0x00040000,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001f01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006004, 0x0000008f,
    0x00049931, 0x00020100, 0xfa086114, 0x04005c04,
    0x80003965, 0x62058220, 0x020000a4, 0xfffffc00,
    0xe0630066, 0x14004a03, 0x80002801, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006204, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa086314, 0x04005e04, 0x80003a65, 0x64058220,
    0x020000a4, 0xfffffc00, 0xe7673570, 0x7f834300,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x27073962, 0x5c004300, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x270f3662, 0x5e004500,
    0x25130062, 0x5c004300, 0x25150062, 0x5e004500,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006404, 0x0000000f,
    0x00049b31, 0x65160100, 0xfa004a14, 0x04000000,
    0xe7692b70, 0x7f836500, 0x277d3762, 0x47006500,
    0x25110062, 0x47006500, 0xe76d0070, 0x7f834500,
    0xe7710070, 0x7f835c00, 0x206b1565, 0x69006703,
    0xe7730070, 0x7f834700, 0xe7770070, 0x7f835e00,
    0x206f0965, 0x6d006b03, 0x20751265, 0x73007103,
    0x20790965, 0x77007503, 0x2e7b1965, 0x79006f03,
    0x01041562, 0x09058220, 0x02461105, 0xff800000,
    0x01041762, 0x0b058220, 0x02461305, 0xff800000,
    0x01041762, 0x0d058220, 0x02461505, 0xff800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x03058220, 0x02467d05, 0x7f800000,
    0x01043362, 0x05058220, 0x02460705, 0x7f800000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x4c062650, 0x00467b05, 0x00000000,
    0x01041762, 0x07058220, 0x02460f05, 0x7f800000,
    0x00041a61, 0x18050110, 0x00564c06, 0x00000000,
    0x00040024, 0x0001c060, 0x000000b0, 0x000000b0,
    0x00041a61, 0x18054110, 0x00000000, 0x00000000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041c61, 0x07054220, 0x00000000, 0x7f800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041f61, 0x05054220, 0x00000000, 0x7f800000,
    0x80003201, 0x00000000, 0x00000000, 0x00000000,
    0x00041e61, 0x03054220, 0x00000000, 0x7f800000,
    0x00040061, 0x0d054220, 0x00000000, 0xff800000,
    0x00040061, 0x0b054220, 0x00000000, 0xff800000,
    0x00040061, 0x09054220, 0x00000000, 0xff800000,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x60161b65, 0x00101805, 0x00041970, 0x19058550,
    0x25581605, 0x00000000, 0x00041961, 0x17050560,
    0x00461905, 0x00000000, 0x80000061, 0x30014110,
    0x00000000, 0x00000000, 0x00041a70, 0x00018220,
    0x22461705, 0x00000000, 0x00040061, 0x1a050120,
    0x00003000, 0x00000000, 0x00040079, 0x20058620,
    0x06462205, 0x00000000, 0x00041a4d, 0x0f050220,
    0x00461a05, 0x00000000, 0x00040070, 0x00018660,
    0x16462205, 0x00000000, 0x20271b65, 0x20001a03,
    0x0004194d, 0x29050220, 0x00462705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000098, 0x00000098,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa02b0040, 0x02410203, 0x272d1970, 0x02102b03,
    0x00030061, 0x31060220, 0x00342b05, 0x00000000,
    0x00130061, 0x33060220, 0x00342c05, 0x00000000,
    0xa02f1b40, 0x02122d12, 0x00031961, 0x31260220,
    0x00342f05, 0x00000000, 0x00131a61, 0x33260220,
    0x00343005, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x19140000,
    0xfb183124, 0x01000f14, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0xa0322c40, 0x19102902,
    0x00040061, 0x00010660, 0x20461705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000b58, 0x00000b58,
    0x80003c65, 0x34058220, 0x020000a4, 0xfffffc00,
    0x00040069, 0x35058120, 0x02462405, 0x00000002,
    0x80000065, 0x39058220, 0x020000a4, 0xfffffc00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0xe0371a66, 0x2c003503, 0xe03a0066, 0x20003503,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003404, 0x0000000f,
    0x00049d31, 0x10160100, 0xfa003714, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003904, 0x0000008f,
    0x00049e31, 0x00020100, 0xfa083a14, 0x04000304,
    0x80000065, 0x3c058220, 0x020000a4, 0xfffffc00,
    0xe03d3466, 0x24003503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003c04, 0x0000008f, 0x00049f31, 0x00020100,
    0xfa083d14, 0x04000504, 0x80003465, 0x3f058220,
    0x020000a4, 0xfffffc00, 0xe0403466, 0x28003503,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003f04, 0x0000008f,
    0x00049031, 0x00020100, 0xfa084014, 0x04000704,
    0x80003465, 0x42058220, 0x020000a4, 0xfffffc00,
    0x80002d01, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004204, 0x0000008f,
    0x00049131, 0x00020100, 0xfa083714, 0x04001004,
    0x80001765, 0x43058220, 0x020000a4, 0xfffffc00,
    0xe0441466, 0x3c003503, 0x80001465, 0x46058220,
    0x020000a4, 0xfffffc00, 0xe0471266, 0x30003503,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004304, 0x0000000f,
    0x00049231, 0x11160100, 0xfa004414, 0x04000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004604, 0x0000008f,
    0x00049331, 0x00020100, 0xfa084714, 0x04000904,
    0x80000065, 0x49058220, 0x020000a4, 0xfffffc00,
    0xe04a3b66, 0x34003503, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02004904, 0x0000008f, 0x00049431, 0x00020100,
    0xfa084a14, 0x04000b04, 0x80000065, 0x4c058220,
    0x020000a4, 0xfffffc00, 0xe04d0066, 0x38003503,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004c04, 0x0000008f,
    0x00049531, 0x00020100, 0xfa084d14, 0x04000d04,
    0x80003665, 0x4f058220, 0x020000a4, 0xfffffc00,
    0x80002201, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02004f04, 0x0000008f,
    0x00049631, 0x00020100, 0xfa084414, 0x04001104,
    0x00043769, 0x50058660, 0x02461e05, 0x0000001d,
    0x80000065, 0x52058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x53058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x54058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x55058220, 0x020000a4, 0xfffffc00,
    0x80003e01, 0x00000000, 0x00000000, 0x00000000,
    0x80003601, 0x00000000, 0x00000000, 0x00000000,
    0x80001c01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005204, 0x0000000f,
    0x00049731, 0x12160100, 0xfa003a14, 0x04000000,
    0x80003f01, 0x00000000, 0x00000000, 0x00000000,
    0x80001b01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005304, 0x0000000f,
    0x00049831, 0x14160100, 0xfa003d14, 0x04000000,
    0x80003001, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005404, 0x0000000f,
    0x00049931, 0x16160100, 0xfa004014, 0x04000000,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005504, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa083a14, 0x04001204,
    0x80000065, 0x56058220, 0x020000a4, 0xfffffc00,
    0x80002801, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005604, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa083d14, 0x04001404,
    0x80000065, 0x57058220, 0x020000a4, 0xfffffc00,
    0x80002901, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005704, 0x0000008f,
    0x00049c31, 0x00020100, 0xfa084014, 0x04001604,
    0x80003865, 0x58058220, 0x020000a4, 0xfffffc00,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000008f,
    0x00049d31, 0x00020100, 0xfa083714, 0x04001c04,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x20591f66, 0x50002503, 0x80003865, 0x5b058220,
    0x020000a4, 0xfffffc00, 0x80001365, 0x5c058220,
    0x020000a4, 0xfffffc00, 0x80001365, 0x5d058220,
    0x020000a4, 0xfffffc00, 0x80001165, 0x5e058220,
    0x020000a4, 0xfffffc00, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00041d61, 0x1d050220,
    0x00465905, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005b04, 0x0000000f, 0x00049e31, 0x1f160100,
    0xfa004714, 0x04000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005c04, 0x0000000f, 0x00049f31, 0x25160100,
    0xfa004a14, 0x04000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005d04, 0x0000000f, 0x00049031, 0x27160100,
    0xfa004d14, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042e61, 0x17050220,
    0x00461f05, 0x00000000, 0x80002c01, 0x00000000,
    0x00000000, 0x00000000, 0x00042f61, 0x19050220,
    0x00462505, 0x00000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x00042061, 0x1b050220,
    0x00462705, 0x00000000, 0x80003e01, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005e04, 0x0000008f, 0x00049131, 0x00020100,
    0xfa084714, 0x04001f04, 0x80001165, 0x5f058220,
    0x020000a4, 0xfffffc00, 0x80003f01, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005f04, 0x0000008f, 0x00049b31, 0x00020100,
    0xfa084a14, 0x04002504, 0x80000065, 0x60058220,
    0x020000a4, 0xfffffc00, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006004, 0x0000008f, 0x00049231, 0x00020100,
    0xfa084d14, 0x04002704, 0x80003965, 0x61058220,
    0x020000a4, 0xfffffc00, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02006104, 0x0000008f, 0x00049831, 0x00020100,
    0xfa084414, 0x04005904, 0x00043a69, 0x62058660,
    0x02463205, 0x00000005, 0xe0641568, 0x01b03203,
    0x80000065, 0x70058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x71058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x72058220, 0x020000a4, 0xfffffc00,
    0x80000065, 0x73058220, 0x020000a4, 0xfffffc00,
    0x80002001, 0x00000000, 0x00000000, 0x00000000,
    0xa0660d40, 0x6201025a, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80001d01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007004, 0x0000000f, 0x00049331, 0x0f160100,
    0xfa003a14, 0x04000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007104, 0x0000000f, 0x00049431, 0x11160100,
    0xfa003d14, 0x04000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007204, 0x0000000f, 0x00049431, 0x13160100,
    0xfa004014, 0x04000000, 0x80003d01, 0x00000000,
    0x00000000, 0x00000000, 0x80003b01, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02007304, 0x0000000f, 0x00049131, 0x15160100,
    0xfa003714, 0x04000000, 0x27681970, 0x0210660b,
    0x00030061, 0x6c060220, 0x00346605, 0x00000000,
    0x00130061, 0x6e060220, 0x00346705, 0x00000000,
    0x00041b52, 0x6a040660, 0x0e2e02a4, 0x68056405,
    0x00031961, 0x6c260220, 0x00346a05, 0x00000000,
    0x00131a61, 0x6e260220, 0x00346b05, 0x00000000,
    0x80002301, 0x00000000, 0x00000000, 0x00000000,
    0x80002401, 0x00000000, 0x00000000, 0x00000000,
    0x80002101, 0x00000000, 0x00000000, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x00044c31, 0x00000000, 0xfb086c24, 0x000c0f44,
    0xa0740040, 0x01006603, 0x27761970, 0x66007403,
    0x00030061, 0x7a060220, 0x00347405, 0x00000000,
    0x00130061, 0x7c060220, 0x00347505, 0x00000000,
    0xa0781b40, 0x6a027602, 0x00031961, 0x7a260220,
    0x00347805, 0x00000000, 0x00131a61, 0x7c260220,
    0x00347905, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x00044c31, 0x00000000,
    0xfb087a24, 0x000c1744, 0x00040025, 0x00004600,
    0x00000000, 0x00000010, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x207b3e40, 0x09000300,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x207d3f40, 0x0b000500, 0x80003001, 0x00000000,
    0x00000000, 0x00000000, 0x80003501, 0x00000000,
    0x00000000, 0x00000000, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x200f1f40, 0x0d000700,
    0x25113c70, 0x03000900, 0xa32b1f61, 0x7f810000,
    0x602b0061, 0x00100300, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80003b65, 0x26058220,
    0x020000a4, 0xfffffc00, 0x00043269, 0x27058120,
    0x02462405, 0x00000002, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x01041562, 0x13058220,
    0x02467b05, 0x7f800000, 0x80003601, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x4f060220,
    0x00442b26, 0x00000000, 0xe0291b66, 0x58002703,
    0x25153c70, 0x05000b00, 0x80003201, 0x00000000,
    0x00000000, 0x00000000, 0x80031a62, 0x4d060aa0,
    0x5a442b06, 0x00444f06, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x01041662, 0x17058220,
    0x02467d05, 0x7f800000, 0x80030961, 0x2b260220,
    0x00444d06, 0x00000000, 0x25192c70, 0x07000d00,
    0x80021961, 0x53070220, 0x00422b27, 0x00000000,
    0x80020061, 0x55070220, 0x00422b47, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x01041662, 0x1b058220, 0x02460f05, 0x7f800000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x51070aa0, 0x5a425307, 0x00425507,
    0x00041670, 0x00018660, 0x26461105, 0x00000000,
    0x80021161, 0x2b470220, 0x00425107, 0x00000000,
    0x01043c62, 0x1d058220, 0x02467b05, 0xff800000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a61, 0x59070220, 0x00422b27, 0x00000000,
    0x80023861, 0x5b070220, 0x00422b67, 0x00000000,
    0x00041470, 0x00018660, 0x26461505, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021a62, 0x57070aa0, 0x5a425907, 0x00425b07,
    0x01043162, 0x1f058220, 0x02467d05, 0xff800000,
    0x80021161, 0x2b670220, 0x00425707, 0x00000000,
    0x00041370, 0x00018660, 0x26461905, 0x00000000,
    0x80021a62, 0x2b850aa0, 0x5a002b64, 0x00342b85,
    0x80021a62, 0x2c850aa0, 0x5a002c64, 0x00342c85,
    0x01043b62, 0x24058220, 0x02460f05, 0xff800000,
    0x80031162, 0x2c050aa0, 0x5a002be4, 0x00462c05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x2d050220, 0x00002ce4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002604, 0x0000008f,
    0x00049431, 0x00020100, 0xfa082914, 0x04002d04,
    0xa34a3b61, 0x7f810000, 0x604a0061, 0x00100500,
    0x80001265, 0x2b058220, 0x020000a4, 0xfffffc00,
    0xe02c3466, 0x5c002703, 0x80031161, 0x5e060220,
    0x00444a26, 0x00000000, 0x80031962, 0x5c060aa0,
    0x5a444a06, 0x00445e06, 0x80030961, 0x4a260220,
    0x00445c06, 0x00000000, 0x80003a01, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x62070220,
    0x00424a27, 0x00000000, 0x80020061, 0x64070220,
    0x00424a47, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x60070aa0,
    0x5a426207, 0x00426407, 0x80021161, 0x4a470220,
    0x00426007, 0x00000000, 0x80021961, 0x68070220,
    0x00424a27, 0x00000000, 0x80020061, 0x6a070220,
    0x00424a67, 0x00000000, 0x80021962, 0x66070aa0,
    0x5a426807, 0x00426a07, 0x80021161, 0x4a670220,
    0x00426607, 0x00000000, 0x80021962, 0x4a850aa0,
    0x5a004a64, 0x00344a85, 0x80021962, 0x4b850aa0,
    0x5a004b64, 0x00344b85, 0x80031162, 0x4b050aa0,
    0x5a004ae4, 0x00464b05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043461, 0x2e050220,
    0x00004be4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002b04, 0x0000008f, 0x00049531, 0x00020100,
    0xfa082c14, 0x04002e04, 0xa34c0061, 0x7f810000,
    0x604c0061, 0x00100700, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0x80003565, 0x2d058220,
    0x020000a4, 0xfffffc00, 0xe02e3566, 0x60002703,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x6d060220, 0x00444c26, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80031962, 0x6b060aa0, 0x5a444c06, 0x00446d06,
    0x80030961, 0x4c260220, 0x00446b06, 0x00000000,
    0x80021961, 0x71070220, 0x00424c27, 0x00000000,
    0x80020061, 0x73070220, 0x00424c47, 0x00000000,
    0x80003c01, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x6f070aa0, 0x5a427107, 0x00427307,
    0x80021161, 0x4c470220, 0x00426f07, 0x00000000,
    0x80021961, 0x77070220, 0x00424c27, 0x00000000,
    0x80023c61, 0x79070220, 0x00424c67, 0x00000000,
    0x80021962, 0x75070aa0, 0x5a427707, 0x00427907,
    0x80021161, 0x4c670220, 0x00427507, 0x00000000,
    0x80021962, 0x4c850aa0, 0x5a004c64, 0x00344c85,
    0x80021962, 0x4d850aa0, 0x5a004d64, 0x00344d85,
    0x80031162, 0x4d050aa0, 0x5a004ce4, 0x00464d05,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043c61, 0x30050220, 0x00004de4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02002d04, 0x0000008f,
    0x00049631, 0x00020100, 0xfa082e14, 0x04003004,
    0xa34e0061, 0xff810000, 0x604e0061, 0x00100900,
    0x80003665, 0x2f058220, 0x020000a4, 0xfffffc00,
    0xe0303666, 0x64002703, 0x80031161, 0x7c060220,
    0x00444e26, 0x00000000, 0x80031962, 0x7a060aa0,
    0x4a444e06, 0x00447c06, 0x80030961, 0x4e260220,
    0x00447a06, 0x00000000, 0x80021961, 0x03070220,
    0x00424e27, 0x00000000, 0x80020061, 0x05070220,
    0x00424e47, 0x00000000, 0x80021962, 0x7e070aa0,
    0x4a420307, 0x00420507, 0x80021161, 0x4e470220,
    0x00427e07, 0x00000000, 0x80020961, 0x09070220,
    0x00424e27, 0x00000000, 0x80020061, 0x0f070220,
    0x00424e67, 0x00000000, 0x80021962, 0x07070aa0,
    0x4a420907, 0x00420f07, 0x80021161, 0x4e670220,
    0x00420707, 0x00000000, 0x80021962, 0x4e850aa0,
    0x4a004e64, 0x00344e85, 0x80021962, 0x4f850aa0,
    0x4a004f64, 0x00344f85, 0x80031162, 0x4f050aa0,
    0x4a004ee4, 0x00464f05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x32050220,
    0x00004fe4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02002f04, 0x0000008f, 0x00049731, 0x00020100,
    0xfa083014, 0x04003204, 0xa3550061, 0xff810000,
    0x60550061, 0x00100b00, 0x80003765, 0x32058220,
    0x020000a4, 0xfffffc00, 0x80003c01, 0x00000000,
    0x00000000, 0x00000000, 0xe0333766, 0x68002703,
    0x80031161, 0x15060220, 0x00445526, 0x00000000,
    0x80031962, 0x10060aa0, 0x4a445506, 0x00441506,
    0x80030961, 0x55260220, 0x00441006, 0x00000000,
    0x80003501, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x2b070220, 0x00425527, 0x00000000,
    0x80023661, 0x2d070220, 0x00425547, 0x00000000,
    0x80021962, 0x19070aa0, 0x4a422b07, 0x00422d07,
    0x80021161, 0x55470220, 0x00421907, 0x00000000,
    0x80003101, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x37070220, 0x00425527, 0x00000000,
    0x80023361, 0x39070220, 0x00425567, 0x00000000,
    0x80021962, 0x35070aa0, 0x4a423707, 0x00423907,
    0x80021161, 0x55670220, 0x00423507, 0x00000000,
    0x80021962, 0x55850aa0, 0x4a005564, 0x00345585,
    0x80021962, 0x56850aa0, 0x4a005664, 0x00345685,
    0x80031162, 0x56050aa0, 0x4a0055e4, 0x00465605,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00040061, 0x35050220, 0x000056e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02003204, 0x0000008f,
    0x00049831, 0x00020100, 0xfa083314, 0x04003504,
    0xa3570061, 0xff810000, 0x60570061, 0x00100d00,
    0x80003301, 0x00000000, 0x00000000, 0x00000000,
    0x80003865, 0x34058220, 0x020000a4, 0xfffffc00,
    0xe0353866, 0x6c002703, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80031161, 0x3c060220,
    0x00445726, 0x00000000, 0x80003301, 0x00000000,
    0x00000000, 0x00000000, 0x80031962, 0x3a060aa0,
    0x4a445706, 0x00443c06, 0x80030961, 0x57260220,
    0x00443a06, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x40070220,
    0x00425727, 0x00000000, 0x80023461, 0x42070220,
    0x00425747, 0x00000000, 0x80003401, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x3e070aa0,
    0x4a424007, 0x00424207, 0x80021161, 0x57470220,
    0x00423e07, 0x00000000, 0x80003101, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x46070220,
    0x00425727, 0x00000000, 0x80023161, 0x48070220,
    0x00425767, 0x00000000, 0x80003801, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x44070aa0,
    0x4a424607, 0x00424807, 0x80021161, 0x57670220,
    0x00424407, 0x00000000, 0x80021962, 0x57850aa0,
    0x4a005764, 0x00345785, 0x80021962, 0x58850aa0,
    0x4a005864, 0x00345885, 0x80031162, 0x58050aa0,
    0x4a0057e4, 0x00465805, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x37050220,
    0x000058e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02003404, 0x0000008f, 0x00049731, 0x00020100,
    0xfa083514, 0x04003704, 0x00040070, 0x00018220,
    0x52462205, 0x00000003, 0x01040022, 0x0001c060,
    0x00000358, 0x00000358, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0xa0363740, 0x08010243,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x3b058660, 0x02462205, 0x00000002,
    0x80001601, 0x00000000, 0x00000000, 0x00000000,
    0xe03d0068, 0x01e02203, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x80001b01, 0x00000000,
    0x00000000, 0x00000000, 0x27383770, 0x0210362b,
    0x80000b01, 0x00000000, 0x00000000, 0x00000000,
    0xa03f0040, 0x3b003602, 0xa03a1a40, 0x0212381a,
    0x80000a01, 0x00000000, 0x00000000, 0x00000000,
    0x27410070, 0x36003f03, 0x80001401, 0x00000000,
    0x00000000, 0x00000000, 0x00030061, 0x45060220,
    0x00343f05, 0x00000000, 0x80101401, 0x00000000,
    0x00000000, 0x00000000, 0x00130061, 0x47060220,
    0x00344005, 0x00000000, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x80000c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x43040e68,
    0x0e2e3a05, 0x41053d05, 0x00031961, 0x45260220,
    0x00344305, 0x00000000, 0x00131a61, 0x47260220,
    0x00344405, 0x00000000, 0x01040022, 0x0001c060,
    0x00000080, 0x00000060, 0x80001465, 0x49058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003466, 0x10218220,
    0x02004904, 0x0000000f, 0x00049431, 0x38160100,
    0xfa002914, 0x04000000, 0x00040024, 0x0001c060,
    0x00000030, 0x00000030, 0x00040070, 0x00018220,
    0x52462205, 0x00000002, 0x0104f462, 0x38050220,
    0x02004be4, 0x00004de4, 0x00040025, 0x00004600,
    0x00000000, 0x00000188, 0x80002401, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044731, 0x00000000,
    0xfb2a4524, 0x01003814, 0xa04a0040, 0x00c03f03,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x274c0070, 0x3f004a03, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x00030061, 0x50060220,
    0x00344a05, 0x00000000, 0x00130061, 0x52060220,
    0x00344b05, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa04e0040, 0x43024c02,
    0x00031961, 0x50260220, 0x00344e05, 0x00000000,
    0x00131a61, 0x52260220, 0x00344f05, 0x00000000,
    0x01040022, 0x0001c060, 0x00000080, 0x00000060,
    0x80000065, 0x54058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003766, 0x10218220, 0x02005404, 0x0000000f,
    0x00049731, 0x39160100, 0xfa003014, 0x04000000,
    0x00040024, 0x0001c060, 0x00000030, 0x00000030,
    0x00040070, 0x00018220, 0x52462205, 0x00000002,
    0x01042762, 0x39050220, 0x020056e4, 0x000058e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002701, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044931, 0x00000000, 0xfb2c5024, 0x01003914,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0xa3581b61, 0x7f810000, 0x60580061, 0x00101300,
    0x80001765, 0x55058220, 0x020000a4, 0xfffffc00,
    0x80001201, 0x00000000, 0x00000000, 0x00000000,
    0xe0560066, 0x40002703, 0x80030961, 0x4b060220,
    0x00445826, 0x00000000, 0x80030962, 0x49060aa0,
    0x5a445806, 0x00444b06, 0x80030961, 0x58260220,
    0x00444906, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021961, 0x4f070220,
    0x00425827, 0x00000000, 0x80023961, 0x51070220,
    0x00425847, 0x00000000, 0x80021962, 0x4d070aa0,
    0x5a424f07, 0x00425107, 0x80021161, 0x58470220,
    0x00424d07, 0x00000000, 0x80021961, 0x5a070220,
    0x00425827, 0x00000000, 0x80020061, 0x5c070220,
    0x00425867, 0x00000000, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80021962, 0x53070aa0,
    0x5a425a07, 0x00425c07, 0x80021161, 0x58670220,
    0x00425307, 0x00000000, 0x80021962, 0x58850aa0,
    0x5a005864, 0x00345885, 0x80021962, 0x59850aa0,
    0x5a005964, 0x00345985, 0x80031162, 0x59050aa0,
    0x5a0058e4, 0x00465905, 0x80003901, 0x00000000,
    0x00000000, 0x00000000, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00040061, 0x3a050220,
    0x000059e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005504, 0x0000008f, 0x00049a31, 0x00020100,
    0xfa085614, 0x04003a04, 0xa3720061, 0x7f810000,
    0x60720061, 0x00101700, 0x80001265, 0x58058220,
    0x020000a4, 0xfffffc00, 0x80001501, 0x00000000,
    0x00000000, 0x00000000, 0xe0590066, 0x44002703,
    0x80031161, 0x5f060220, 0x00447226, 0x00000000,
    0x80031962, 0x5d060aa0, 0x5a447206, 0x00445f06,
    0x80030961, 0x72260220, 0x00445d06, 0x00000000,
    0x80021961, 0x63070220, 0x00427227, 0x00000000,
    0x80020061, 0x65070220, 0x00427247, 0x00000000,
    0x80021962, 0x61070aa0, 0x5a426307, 0x00426507,
    0x80021161, 0x72470220, 0x00426107, 0x00000000,
    0x80021961, 0x69070220, 0x00427227, 0x00000000,
    0x80020061, 0x6b070220, 0x00427267, 0x00000000,
    0x80021962, 0x67070aa0, 0x5a426907, 0x00426b07,
    0x80021161, 0x72670220, 0x00426707, 0x00000000,
    0x80021962, 0x72850aa0, 0x5a007264, 0x00347285,
    0x80021962, 0x73850aa0, 0x5a007364, 0x00347385,
    0x80031162, 0x73050aa0, 0x5a0072e4, 0x00467305,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043a61, 0x3b050220, 0x000073e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005804, 0x0000008f,
    0x00049b31, 0x00020100, 0xfa085914, 0x04003b04,
    0xa3740061, 0x7f810000, 0x60740061, 0x00101b00,
    0x80003b65, 0x5a058220, 0x020000a4, 0xfffffc00,
    0xe05b0066, 0x48002703, 0x80031161, 0x6e060220,
    0x00447426, 0x00000000, 0x80031962, 0x6c060aa0,
    0x5a447406, 0x00446e06, 0x80030961, 0x74260220,
    0x00446c06, 0x00000000, 0x80021961, 0x76070220,
    0x00427427, 0x00000000, 0x80020061, 0x78070220,
    0x00427447, 0x00000000, 0x80021962, 0x70070aa0,
    0x5a427607, 0x00427807, 0x80021161, 0x74470220,
    0x00427007, 0x00000000, 0x80021961, 0x7c070220,
    0x00427427, 0x00000000, 0x80020061, 0x7e070220,
    0x00427467, 0x00000000, 0x80021962, 0x7a070aa0,
    0x5a427c07, 0x00427e07, 0x80021161, 0x74670220,
    0x00427a07, 0x00000000, 0x80021962, 0x74850aa0,
    0x5a007464, 0x00347485, 0x80021962, 0x75850aa0,
    0x5a007564, 0x00347585, 0x80031162, 0x75050aa0,
    0x5a0074e4, 0x00467505, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043b61, 0x3c050220,
    0x000075e4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005a04, 0x0000008f, 0x00049c31, 0x00020100,
    0xfa085b14, 0x04003c04, 0xa3760061, 0xff810000,
    0x60760061, 0x00101d00, 0x80003c65, 0x5c058220,
    0x020000a4, 0xfffffc00, 0xe05d0066, 0x4c002703,
    0x80031161, 0x05060220, 0x00447626, 0x00000000,
    0x80031962, 0x03060aa0, 0x4a447606, 0x00440506,
    0x80030961, 0x76260220, 0x00440306, 0x00000000,
    0x80021961, 0x09070220, 0x00427627, 0x00000000,
    0x80020061, 0x0b070220, 0x00427647, 0x00000000,
    0x80021962, 0x07070aa0, 0x4a420907, 0x00420b07,
    0x80021161, 0x76470220, 0x00420707, 0x00000000,
    0x80021961, 0x0f070220, 0x00427627, 0x00000000,
    0x80020061, 0x11070220, 0x00427667, 0x00000000,
    0x80021962, 0x0d070aa0, 0x4a420f07, 0x00421107,
    0x80021161, 0x76670220, 0x00420d07, 0x00000000,
    0x80021962, 0x76850aa0, 0x4a007664, 0x00347685,
    0x80021962, 0x77850aa0, 0x4a007764, 0x00347785,
    0x80031162, 0x77050aa0, 0x4a0076e4, 0x00467705,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043c61, 0x3d050220, 0x000077e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02005c04, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa085d14, 0x04003d04,
    0xa37d0061, 0xff810000, 0x607d0061, 0x00101f00,
    0x80000065, 0x5f058220, 0x020000a4, 0xfffffc00,
    0xe0600066, 0x50002703, 0x80031161, 0x14060220,
    0x00447d26, 0x00000000, 0x80031962, 0x12060aa0,
    0x4a447d06, 0x00441406, 0x80030961, 0x7d260220,
    0x00441206, 0x00000000, 0x80021961, 0x18070220,
    0x00427d27, 0x00000000, 0x80020061, 0x1a070220,
    0x00427d47, 0x00000000, 0x80021962, 0x16070aa0,
    0x4a421807, 0x00421a07, 0x80021161, 0x7d470220,
    0x00421607, 0x00000000, 0x80020961, 0x1e070220,
    0x00427d27, 0x00000000, 0x80021361, 0x20070220,
    0x00427d67, 0x00000000, 0x80021962, 0x1c070aa0,
    0x4a421e07, 0x00422007, 0x80021161, 0x7d670220,
    0x00421c07, 0x00000000, 0x80021962, 0x7d850aa0,
    0x4a007d64, 0x00347d85, 0x80021962, 0x7e850aa0,
    0x4a007e64, 0x00347e85, 0x80031162, 0x7e050aa0,
    0x4a007de4, 0x00467e05, 0x80001101, 0x00000000,
    0x00000000, 0x00000000, 0x00043a61, 0x3e050220,
    0x00007ee4, 0x00000000, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80000066, 0x10218220,
    0x02005f04, 0x0000008f, 0x00049d31, 0x00020100,
    0xfa086014, 0x04003e04, 0xa3030061, 0xff810000,
    0x60030061, 0x00102400, 0x80003d65, 0x61058220,
    0x020000a4, 0xfffffc00, 0xe0620066, 0x54002703,
    0x80003401, 0x00000000, 0x00000000, 0x00000000,
    0x80031161, 0x29060220, 0x00440326, 0x00000000,
    0x80031962, 0x24060aa0, 0x4a440306, 0x00442906,
    0x80030961, 0x03260220, 0x00442406, 0x00000000,
    0x80021961, 0x2d070220, 0x00420327, 0x00000000,
    0x80023761, 0x2f070220, 0x00420347, 0x00000000,
    0x80021962, 0x2b070aa0, 0x4a422d07, 0x00422f07,
    0x80021161, 0x03470220, 0x00422b07, 0x00000000,
    0x80003801, 0x00000000, 0x00000000, 0x00000000,
    0x80021961, 0x33070220, 0x00420327, 0x00000000,
    0x80023761, 0x35070220, 0x00420367, 0x00000000,
    0x80003701, 0x00000000, 0x00000000, 0x00000000,
    0x80021962, 0x31070aa0, 0x4a423307, 0x00423507,
    0x80021161, 0x03670220, 0x00423107, 0x00000000,
    0x80021962, 0x03850aa0, 0x4a000364, 0x00340385,
    0x80021962, 0x04850aa0, 0x4a000464, 0x00340485,
    0x80031162, 0x04050aa0, 0x4a0003e4, 0x00460405,
    0x80001101, 0x00000000, 0x00000000, 0x00000000,
    0x00043d61, 0x3f050220, 0x000004e4, 0x00000000,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80000066, 0x10218220, 0x02006104, 0x0000008f,
    0x00049a31, 0x00020100, 0xfa086214, 0x04003f04,
    0x00040070, 0x00018220, 0x52462205, 0x00000003,
    0x01040022, 0x0001c060, 0x00000310, 0x00000310,
    0x80003a01, 0x00000000, 0x00000000, 0x00000000,
    0x00040069, 0x63058660, 0x02462205, 0x00000002,
    0xe0650068, 0x01e02203, 0x80002001, 0x00000000,
    0x00000000, 0x00000000, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0670040, 0x63010202,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27690070, 0x02106703, 0x00030061, 0x6d060220,
    0x00346705, 0x00000000, 0x00130061, 0x6f060220,
    0x00346805, 0x00000000, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0x00040052, 0x6b040660,
    0x0e2e0224, 0x69056505, 0x00031961, 0x6d260220,
    0x00346b05, 0x00000000, 0x00131a61, 0x6f260220,
    0x00346c05, 0x00000000, 0x01040022, 0x0001c060,
    0x00000090, 0x00000060, 0x80000065, 0x71058220,
    0x020000a4, 0xfffffc00, 0x80001901, 0x00000000,
    0x00000000, 0x00000000, 0x80003a66, 0x10218220,
    0x02007104, 0x0000000f, 0x00049a31, 0x40160100,
    0xfa005614, 0x04000000, 0x00040024, 0x0001c060,
    0x00000040, 0x00000040, 0x00040070, 0x00018220,
    0x52462205, 0x00000002, 0x80002a01, 0x00000000,
    0x00000000, 0x00000000, 0x01040062, 0x40050220,
    0x020073e4, 0x000075e4, 0x00040025, 0x00004600,
    0x00000000, 0x00000198, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0x00044a31, 0x00000000,
    0xfb2a6d24, 0x01004014, 0x80001a01, 0x00000000,
    0x00000000, 0x00000000, 0xa0720040, 0x01006703,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x27740070, 0x67007203, 0x00040070, 0x00018220,
    0x52462205, 0x00000001, 0x00030061, 0x78060220,
    0x00347205, 0x00000000, 0x00130061, 0x7a060220,
    0x00347305, 0x00000000, 0x80001c01, 0x00000000,
    0x00000000, 0x00000000, 0xa0760040, 0x6b027402,
    0x00031961, 0x78260220, 0x00347605, 0x00000000,
    0x00131a61, 0x7a260220, 0x00347705, 0x00000000,
    0x01040022, 0x0001c060, 0x00000090, 0x00000060,
    0x80000065, 0x7c058220, 0x020000a4, 0xfffffc00,
    0x80001901, 0x00000000, 0x00000000, 0x00000000,
    0x80003a66, 0x10218220, 0x02007c04, 0x0000000f,
    0x00049a31, 0x41160100, 0xfa005d14, 0x04000000,
    0x00040024, 0x0001c060, 0x00000040, 0x00000040,
    0x00040070, 0x00018220, 0x52462205, 0x00000002,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x01040062, 0x41050220, 0x02007ee4, 0x000004e4,
    0x00040025, 0x00004600, 0x00000000, 0x00000040,
    0x80002a01, 0x00000000, 0x00000000, 0x00000000,
    0x80001a01, 0x00000000, 0x00000000, 0x00000000,
    0x00044e31, 0x00000000, 0xfb2c7824, 0x01004114,
    0x00040025, 0x00004600, 0x00000000, 0x00000010,
    0x80030061, 0x7e050220, 0x00460005, 0x00000000,
    0x80040931, 0x00000004, 0x30007e0c, 0x00000000,
};
static const struct brw_kernel gfx125_bvh_build_primref_procedurals_to_primrefs_indirect = {
   .prog_data = {
      .base.nr_params = 19,
      .base.stage = MESA_SHADER_COMPUTE,
      .base.curb_read_length = 3,
      .base.total_scratch = 2048,
      .base.total_shared = 0,
      .base.program_size = 11984,
      .base.const_data_size = 0,
      .base.const_data_offset = 0,
      .base.num_relocs = 0,
      .base.relocs = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_relocs,
      .base.printf_info_count = 0,
      .base.printf_info = (u_printf_info *)gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_printfs,
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
      .push.cross_thread.dwords = 19,
      .push.cross_thread.regs = 3,
      .push.cross_thread.size = 96,
   },
   .args_size = 44,
   .arg_count = 6,
   .args = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_args,
   .code = gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_code,
};
const char *gfx125_bvh_build_primref_procedurals_to_primrefs_indirect_sha1 = "3ed2feef43aecef5b8fd113aac1763970c50ad0c";
