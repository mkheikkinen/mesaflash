
#ifndef __USB_BOARDS_H
#define __USB_BOARDS_H

#include "anyio.h"

int usb_boards_init(board_access_t *access);
void usb_boards_cleanup(board_access_t *access);
void usb_boards_scan(board_access_t *access);
void usb_boards_release(board_access_t *access);
void usb_print_info(board_t *board);

#endif
