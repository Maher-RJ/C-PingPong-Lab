#include "stdint.h"
#include "stdbool.h"

/* Function Led_on
Input: Turn on led Lednr
 Lednr can be 1-8, all other values turns all leds off
Output: No
*/
void Led_on(uint8_t Lednr);
void Show_points (int l, int r);
bool  R_hit();
bool  L_hit();