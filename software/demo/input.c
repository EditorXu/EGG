#include "am.h"

/*
void __am_input_config(AM_INPUT_CONFIG_T *kbd) {
	printf("input config\n");
	char key;
	uint8_t mark = JOYPAD_Read();
	printf("joy = %d\n", mark);
	
	kbd->keydown = (mark != 0);
	
	switch(mark) {
		case 64: key = 'A';
		case 16: key = 'W';
		case 128: key = 'D';
		case 12: key = 'S';
		case 4: key = 'U';
		case 8: key = 'I';
		case 2: key = 'J';
		case 1: key = 'K';
		default: key = AM_KEY_NONE;
	}

	kbd->keycode = key;
}
*/

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
/*
	if(kbd->keydown) {
		kbd->keycode = 'I';
		//kbd->keycode = uart_read();
	} else {
		kbd->keycode = AM_KEY_NONE;
	}
*/
	char key;
	uint8_t mark = JOYPAD_Read();
	
	kbd->keydown = (mark != 0);
	
	switch(mark) {
		case 64: key = 43; break;
		case 16: key = 30;break;
		case 128: key = 45;break;
		case 32: key = 44;break;
		case 4: key = 35;break;
		case 8: key = 36;break;
		case 2: key = 49;break;
		case 1: key = 50;break;
		default: key = AM_KEY_NONE;
	}
//	printf("A = %d, W = %d, S = %d, D = %d\n J = %d, K = %d, U = %d, I = %d\n", AM_KEY_A,  AM_KEY_W, AM_KEY_S, AM_KEY_D, AM_KEY_J, AM_KEY_K, AM_KEY_U, AM_KEY_I);
//	printf("up = %d, down = %d, right = %d, left = %d\n", (AM_KEY_UP), (AM_KEY_DOWN), (AM_KEY_RIGHT), (AM_KEY_LEFT));

	kbd->keycode = key;
}
