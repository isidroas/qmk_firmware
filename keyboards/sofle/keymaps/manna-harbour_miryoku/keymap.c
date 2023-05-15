// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.
#include QMK_KEYBOARD_H

#ifdef ENCODER_ENABLE


// This section is like the keymap matrix, but for rotary encoders
// My left encoder is currently not working, so I'm using Layers to cope :')
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [1] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [2] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [3] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [4] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [5] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [6] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [7] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [8] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
    [9] = { ENCODER_CCW_CW(_______,     _______), ENCODER_CCW_CW(KC_VOLU,     KC_VOLD      )},
};

#endif
