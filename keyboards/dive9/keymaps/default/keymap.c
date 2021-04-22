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

enum layer_number {
    _JOYPAD = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_JOYPAD] = LAYOUT(
    //   |-----------+-----------+-----------+-----------|
          KC_5, JS_BUTTON10,KC_BSPC,KC_ESC,
    //   |-----------+-----------+-----------+-----------|
    //   |-----------+-----------+-----------+-----------|
          JS_BUTTON1, JS_BUTTON3, JS_BUTTON5, JS_BUTTON7,
    // |-----------+-----------+-----------+-----------+-----------|
        JS_BUTTON0, JS_BUTTON2, JS_BUTTON4, JS_BUTTON6, JS_BUTTON8
    // |-----------+-----------+-----------+-----------+-----------|
    )
};
// Joystick config
joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
    [0] = JOYSTICK_AXIS_VIRTUAL,
    [1] = JOYSTICK_AXIS_VIRTUAL
};
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case JS_BUTTON0:
                sethsv(HSV_WHITE, (LED_TYPE *)&led[0]);
                break;
            case JS_BUTTON1:
                sethsv(HSV_YELLOW, (LED_TYPE *)&led[1]);
                break;
            case JS_BUTTON2:
                sethsv(HSV_GREEN, (LED_TYPE *)&led[2]);
                break;
            case JS_BUTTON3:
                sethsv(HSV_BLUE, (LED_TYPE *)&led[3]);
                break;
            case JS_BUTTON4:
                sethsv(HSV_RED, (LED_TYPE *)&led[4]);
                break;
            case JS_BUTTON5:
                sethsv(HSV_BLUE, (LED_TYPE *)&led[5]);
                break;
            case JS_BUTTON6:
                sethsv(HSV_GREEN, (LED_TYPE *)&led[6]);
                break;
            case JS_BUTTON7:
                sethsv(HSV_YELLOW, (LED_TYPE *)&led[7]);
                break;
            case JS_BUTTON8:
                sethsv(HSV_WHITE, (LED_TYPE *)&led[8]);
                break;

        }
    }else{
        switch (keycode) {
            case JS_BUTTON0:
                sethsv(0, 0, 32, (LED_TYPE *)&led[0]);
                break;
            case JS_BUTTON1:
                sethsv(43, 255, 32, (LED_TYPE *)&led[1]);
                break;
            case JS_BUTTON2:
                sethsv(85, 255, 32, (LED_TYPE *)&led[2]);
                break;
            case JS_BUTTON3:
                sethsv(170, 255, 32, (LED_TYPE *)&led[3]);
                break;
            case JS_BUTTON4:
                sethsv(0, 255, 32, (LED_TYPE *)&led[4]);
                break;
            case JS_BUTTON5:
                sethsv(170, 255, 32, (LED_TYPE *)&led[5]);
                break;
            case JS_BUTTON6:
                sethsv(85, 255, 32, (LED_TYPE *)&led[6]);
                break;
            case JS_BUTTON7:
                sethsv(43, 255, 32, (LED_TYPE *)&led[7]);
                break;
            case JS_BUTTON8:
                sethsv(0, 0, 32, (LED_TYPE *)&led[8]);
                break;

        }
    }
    rgblight_set();
}
