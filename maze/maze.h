#ifndef _MAZE_H_
#define _MAZE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <SDL2/SDL.h>

/* Adjust map size read in from .txt file. */
#define MAP_WIDTH 20
#define MAP_HEIGHT 20


typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	int height;
	int width;
} SDL_Instance;


typedef struct vector_s
{
	float x;
	float y;
} Vector;

typedef struct player_s
{
	Vector pos;
	Vector dir;
	Vector plane;
	float move_speed;
	float rot_speed;
} Player;


/* movement.c */
int exit_check(void);
int check_move_keys(int map[][MAP_WIDTH], Player *player);
int move_player_forward(int map[][MAP_WIDTH], Player *p);
int move_player_back(int map[][MAP_WIDTH], Player *p);
int rotate_player(Player *p, float rotSpeed);

/* main.c in place of init.c */
SDL_Instance *init_instance(void);
Player *init_player(double x, double y);

/* free.c */
void free_instance(SDL_Instance *instance);
void free_player(Player *p);
void app_shutdown(SDL_Instance *instance, Player *player);

/* raycast.c */
void ray_cast(int map[][MAP_WIDTH], SDL_Instance *inst, Player *player, int x);

/* parser.c */
void map_file_parser(char *filepath, int map[][MAP_WIDTH]);
void init_map_array(FILE *fp, int h, int w, int map[][MAP_WIDTH]);
void print_map_array(int h, int w, int map[][MAP_WIDTH]);

#endif
