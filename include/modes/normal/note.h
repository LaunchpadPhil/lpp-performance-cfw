#ifndef NOTE_H
#define NOTE_H

#include "app.h"
#include "modes/mode.h"

#define mode_note_r 0
#define mode_note_g 63
#define mode_note_b 63

const u8 scales[32][13], scale_keys[12];

s8 note_octave;
u8 note_shift, scale_enabled, scale_segment, scale_selected, scale_root;

void note_single(u8 *p, u8 l, u8 r, u8 g, u8 b);
s8 note_press(u8 x, u8 y, u8 v, s8 out_p);
void note_scale_button();
void note_draw();

void note_init();
void note_timer_event();
void note_surface_event(u8 p, u8 v, u8 x, u8 y);
void note_midi_event(u8 port, u8 t, u8 ch, u8 p, u8 v);

#endif