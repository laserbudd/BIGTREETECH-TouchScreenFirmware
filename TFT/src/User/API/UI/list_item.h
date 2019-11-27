#ifndef _LIST_ITEM_H_
#define _LIST_ITEM_H_

#include "stdint.h"
#include "stdbool.h"

enum{
  ICONCHAR_BACKGROUND = -1,
  ICONCHAR_INFO = 0,
  ICONCHAR_ERROR,
  ICONCHAR_ALERT,
  ICONCHAR_CHECKED,
  ICONCHAR_UNCHECKED,
  ICONCHAR_ON,
  ICONCHAR_OFF,
  ICON_RADIO_ON,
  ICON_RADIO_OFF,
  ICONCHAR_OK,
  ICONCHAR_CANCEL,
  ICONCHAR_PAGEUP,
  ICONCHAR_PAGEDOWN,
  ICONCHAR_NEXT,
  ICONCHAR_PREVIOUS,
  ICONCHAR_BACK,
  ICONCHAR_FOLDER,
  ICONCHAR_FILE,
  ICONCHAR_NOZZLE,
  ICONCHAR_BED,
  ICONCHAR_FAN,

  ICONCHAR_NUM
};

typedef enum
{
  TOP_LEFT = 0,
  TOP_CENTER,
  TOP_RIGHT,
  LEFT_CENTER,
  MIDDLE,
  RIGHT_CENTER,
  BOTTOM_LEFT,
  BOTTOM_CENTER,
  BOTTOM_RIGHT
}ICON_POS;

#define LISTBTN_BKCOLOR 0x2187
#define MATT_BLUE 0x03BF
#define MATT_YELLOW 0xfc80


uint8_t * IconCharSelect(uint8_t sel);
void ListItem_Display(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint8_t iconchar, ICON_POS pos, uint8_t * label, bool pressed);

#endif