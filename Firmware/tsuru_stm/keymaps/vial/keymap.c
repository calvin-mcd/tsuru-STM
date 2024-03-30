    #include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,		
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS
		),

	[1] = LAYOUT(
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,		
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS
		),

	[2] = LAYOUT(
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,		
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS
		),

	[3] = LAYOUT(
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,		
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS
		),

	[4] = LAYOUT(
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,		
		KC_TRNS,	 KC_TRNS,    KC_TRNS,		KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,	KC_TRNS
		)
};

/* Encoder */ 
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [1] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [2] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [3] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [4] = { ENCODER_CCW_CW(KC_NO, KC_NO) }
};
