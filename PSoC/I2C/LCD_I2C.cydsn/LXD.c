
#include "project.h"
#include <stdint.h>
#include <stdbool.h>
#include <cytypes.h>
#include <cyfitter.h>
#include <string.h>
#include "LXD.h"

/*Init*/
void LXD_Start(uint8 devAddr)
{
    LXD_config.addr = devAddr;
    LXD_config.cols = 20;
    LXD_config.rows = 4;
    LXD_config.charsize = 0;
    LXD_config.backlightval = LCD_BACKLIGHT;
	LXD_config.displayfunction = LCD_4BITMODE | LCD_1LINE | LCD_5x8DOTS;
	if (LXD_config.rows > 1) {
		LXD_config.displayfunction |= LCD_2LINE;
	}
	if ((LXD_config.charsize != 0) && (LXD_config.rows == 1)) {
		LXD_config.displayfunction |= LCD_5x10DOTS;
	}
	CyDelay(50);
    LXD_WriteLong(LXD_config.backlightval);
	CyDelay(1000);
	LXD_WriteShort(0x03 << 4);
	CyDelayUs(4500);
	LXD_WriteShort(0x03 << 4);
	CyDelayUs(4500); 
	LXD_WriteShort(0x03 << 4); 
	CyDelayUs(150);
	LXD_WriteShort(0x02 << 4); 
	LXD_Trans((LCD_FUNCTIONSET | LXD_config.displayfunction),0);
	LXD_config.displaycontrol = LCD_DISPLAYON | LCD_CURSOROFF | LCD_BLINKOFF;
	LXD_display();
	LXD_clear();
	LXD_config.displaymode = LCD_ENTRYLEFT | LCD_ENTRYSHIFTDECREMENT;
	LXD_Trans((LCD_ENTRYMODESET | LXD_config.displaymode),0);
	LXD_home();
}

//Cadena de comando
void LXD_Trans(uint8_t value, const uint8_t mode)
{
	uint8_t highnib = value & 0xf0;
	uint8_t lownib = (value << 4) & 0xf0;
	LXD_WriteShort(highnib | mode);
	LXD_WriteShort(lownib | mode);
}
void LXD_WriteShort(const uint8_t data)
{    
	LXD_WriteLong(data);
    //enable antes
    LXD_WriteLong(data | EN);
    // enable pulse must be >450ns
	CyDelayUs(1);
    // En low
	LXD_WriteLong(data & ~EN);
    // commands need > 37us to settle
	CyDelayUs(50);
}
void LXD_WriteLong(uint8_t data)
{
	LXD_WriteByte(LXD_config.addr, data | LXD_config.backlightval);
}
void LXD_WriteByte(const uint8_t addr, const uint8_t data)
{

    I2C_MasterSendStart(addr, 0);
    I2C_MasterWriteByte(data);
    I2C_MasterSendStop();
}



//Command
void LXD_display(void)
{
	LXD_config.displaycontrol |= LCD_DISPLAYON;
	
    LXD_Trans(LCD_DISPLAYCONTROL | LXD_config.displaycontrol,0);
}
void LXD_clear(void)
{
	
    LXD_Trans(LCD_CLEARDISPLAY,0);
	CyDelay(2);  // this command takes a long time!
}
void LXD_home(void)
{
    LXD_Trans(LCD_RETURNHOME,0);
    
	CyDelay(2);  // this command takes a long time!
}



/*Print a string in LCD*/
void LXD_String(const char *word)  //Corregida
{
    for (uint32_t i = 0; word[i] != '\0'; ++i) {
        LXD_Trans(word[i], RS);
    }
}
/*Put a char in LCD*/
void LXD_Char(const char word)  //Corregida
{
    LXD_Trans(word, RS);
}
/*Set Position in LCD*/
void LXD_Position(uint8_t row,uint8_t col)
{
	const uint8_t row_offsets[4] = { 0x00, 0x40, 0x14, 0x54 };
	if (row > LXD_config.rows) {
		row = LXD_config.rows - 1;    // we count rows starting w/0
	}
	
    LXD_Trans(LCD_SETDDRAMADDR | (col + row_offsets[row]),0);
}



