# planck rev7 layouts

`sailorfe.c` is my daily driver, modularly made up of `base.c` and
[kdlrose/astrokeys](https://github.com/kdlrose/astrokeys).

- `base.c` is basically the default keymap plus two unicode layers for just em
    and en dashes.
- Submdoule `astrokeys` is even more UTF.
- `midi-cello.c` uses `MIDI_ADVANCED` in `config.h`. I realized I just need to
    get a cheap synth because I'm too cursed by piano, so this is included for
    posterity or someone else's reference.
