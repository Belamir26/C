#ifndef LXD_I2C_H
#define LXD_I2C_H

    
#include <stdint.h>
#include <stdbool.h>
#include <cytypes.h>
#include <cyfitter.h>
#include <string.h>


    
    //Registros
#define LCD_CLEARDISPLAY 0x01
#define LCD_RETURNHOME 0x02
#define LCD_ENTRYMODESET 0x04
#define LCD_DISPLAYCONTROL 0x08
#define LCD_CURSORSHIFT 0x10
#define LCD_FUNCTIONSET 0x20
#define LCD_SETCGRAMADDR 0x40
#define LCD_SETDDRAMADDR 0x80

// flags for display entry mode
#define LCD_ENTRYRIGHT 0x00
#define LCD_ENTRYLEFT 0x02
#define LCD_ENTRYSHIFTINCREMENT 0x01
#define LCD_ENTRYSHIFTDECREMENT 0x00

// flags for display on/off control
#define LCD_DISPLAYON 0x04
#define LCD_DISPLAYOFF 0x00
#define LCD_CURSORON 0x02
#define LCD_CURSOROFF 0x00
#define LCD_BLINKON 0x01
#define LCD_BLINKOFF 0x00

// flags for display/cursor shift
#define LCD_DISPLAYMOVE 0x08
#define LCD_CURSORMOVE 0x00
#define LCD_MOVERIGHT 0x04
#define LCD_MOVELEFT 0x00

// flags for function set
#define LCD_8BITMODE 0x10
#define LCD_4BITMODE 0x00
#define LCD_2LINE 0x08
#define LCD_1LINE 0x00
#define LCD_5x10DOTS 0x04
#define LCD_5x8DOTS 0x00

// flags for backlight control
#define LCD_BACKLIGHT 0x08
#define LCD_NOBACKLIGHT 0x00

#define EN 0x04  // Enable bit
#define RW 0x02  // Read/Write bit
#define RS 0x01  // Register select bit




struct LXD_Config {
    uint8_t addr;
    uint8_t displayfunction;
    uint8_t displaycontrol;
    uint8_t displaymode;
    uint8_t cols;
    uint8_t rows;
    uint8_t charsize;
    uint8_t backlightval;
};

struct LXD_Config LXD_config;
void LXD_Start(uint8 devAddr);           
//Cadena de Comando
void LXD_Trans(uint8_t value, const uint8_t mode);       
void LXD_WriteShort(const uint8_t data);            
void LXD_WriteLong(uint8_t data);       
void LXD_WriteByte(const uint8_t addr, const uint8_t data);
//Comandos
void LXD_display(void);                     
void LXD_clear(void);                       
void LXD_home(void);      
//Usos
void LXD_String(const char *word);
void LXD_Position(uint8_t row,uint8_t col);
void LXD_Char(const char word);
#endif