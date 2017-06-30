#include "maze.h"


int exit_check(void);
int check_move_keys(int map[][MAP_WIDTH], Player *player);
int move_player_forward(int map[][MAP_WIDTH], Player *p);
int move_player_back(int map[][MAP_WIDTH], Player *p);
int rotate_player(Player *p, float rotSpeed);