procedure tank2_0();
begin
asm ("
  ld de, $1c
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $ff
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $2b
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $60
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $16
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $06
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $dd
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $d0
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
");
end;
procedure tank2_1();
begin
asm ("
  ld de, $1c
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $3f
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $c0
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $0a
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $d8
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $05
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $80
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $01
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $80
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $37
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $74
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
");
end;
procedure tank2_2();
begin
asm ("
  ld de, $1c
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $0f
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $f0
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $02
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $b6
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $01
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $6a
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $a0
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $6a
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $a0
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $0d
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $dd
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
");
end;
procedure tank2_3();
begin
asm ("
  ld de, $1c
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $03
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $fc
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $ad
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $80
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $5a
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $a8
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $1a
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $aa
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $a8
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $03
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $77
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $40
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
 ld a,[ix+0] 
 or $00
 ld [hl],a
 inc hl 
 inc ix 
  add hl,de
  add ix,de
");
end;
var tank2_pi : integer;
var tank2_buf : integer;
@donotremove tank2_dst 
procedure tank2(tank2_src,tank2_dst : pointer; tank2px,tank2py : byte);
begin
  tank2_pi:=tank2_dst + tank2py<<5 + tank2px>>2;
  tank2_buf:=#buf + tank2py<<5 + tank2px>>2;
asm("  ld ix, [tank2_buf] 
  ld hl, [tank2_pi]
");
 tank2px:=tank2px&3;
 if (tank2px=0) then tank2_0();
 if (tank2px=1) then tank2_1();
 if (tank2px=2) then tank2_2();
 if (tank2px=3) then tank2_3();
end;