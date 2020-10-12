#ifndef LCD_SUB_MENU_H_
#define LCD_SUB_MENU_H_

#include "lcd_control.h"

void LCD_Sub_Menu_Init(void);
uint8_t LCD_SubMenu_IdxGet(void);
DisplayReq_t LCD_Sub_Menu_L2(uint8_t menu, MenuKey_t key);
DisplayReq_t LCD_Sub_Menu_L3(uint8_t menu, MenuKey_t key);

#endif /* LCD_SUB_MENU_H_ */
