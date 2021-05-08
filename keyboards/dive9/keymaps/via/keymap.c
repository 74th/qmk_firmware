/*
Copyright 2021 Atsushi Morimoto @74th

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "joystick.h"
#include "rgblight.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_number {
    _L0 = 0,
    _L1,
    _L2,
    _L3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_L0] = LAYOUT(
    //     |-----------+-----------+-----------+-----------| (    )
    //     |    10     |     11    |    12     |   Back    |
           JS_BUTTON9, JS_BUTTON10, JS_BUTTON11,JS_BUTTON12, JS_BUTTON13,
    //     |-----------+-----------+-----------+-----------|
    //     |-----------+-----------+-----------+-----------|
            JS_BUTTON1, JS_BUTTON3, JS_BUTTON5, JS_BUTTON7,
    // |-----------+-----------+-----------+-----------+-----------|
        JS_BUTTON0, JS_BUTTON2, JS_BUTTON4, JS_BUTTON6, JS_BUTTON8
    // |-----------+-----------+-----------+-----------+-----------|
    ),

    [_L1] = LAYOUT(
    //     |-----------+-----------+-----------+-----------| (    )
              _______,    _______,    _______,    _______,  _______,
    //     |-----------+-----------+-----------+-----------|
    //     |-----------+-----------+-----------+-----------|
              _______,    _______,    _______,    _______,
    // |-----------+-----------+-----------+-----------+-----------|
          _______,    _______,    _______,    _______,    _______
    // |-----------+-----------+-----------+-----------+-----------|
    ),

    [_L2] = LAYOUT(
    //     |-----------+-----------+-----------+-----------| (    )
              _______,    _______,    _______,    _______,  _______,
    //     |-----------+-----------+-----------+-----------|
    //     |-----------+-----------+-----------+-----------|
              _______,    _______,    _______,    _______,
    // |-----------+-----------+-----------+-----------+-----------|
          _______,    _______,    _______,    _______,    _______
    // |-----------+-----------+-----------+-----------+-----------|
    ),

    [_L3] = LAYOUT(
    //     |-----------+-----------+-----------+-----------| (    )
              _______,    _______,    _______,    _______,  _______,
    //     |-----------+-----------+-----------+-----------|
    //     |-----------+-----------+-----------+-----------|
              _______,    _______,    _______,    _______,
    // |-----------+-----------+-----------+-----------+-----------|
          _______,    _______,    _______,    _______,    _______
    // |-----------+-----------+-----------+-----------+-----------|
    ),

};

// Joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_VIRTUAL,
    [1] = JOYSTICK_AXIS_VIRTUAL
};
