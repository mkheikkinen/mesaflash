
#ifndef __ETH_BOARDS_H
#define __ETH_BOARDS_H

#include "anyio.h"

int eth_boards_init(board_access_t *access);
void eth_boards_cleanup(board_access_t *access);
void eth_boards_scan(board_access_t *access);
void eth_boards_release(board_access_t *access);
void eth_print_info(board_t *board);

#endif
