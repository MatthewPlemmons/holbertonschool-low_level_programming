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
	float moveSpeed;
	float rotSpeed;
} Player;

typedef struct ray_s
{
	Vector pos;
	Vector dir;
	Vector gridPos;
	Vector sideDist;
	Vector deltaDist;
	Vector step;
	double perpWallDist;
	int hit;
	int side;
} Ray;


/* controls.c */
int exit_check(void);
int checkMoveKeys(int map[][MAP_WIDTH], Player *player);
int movePlayer(int map[][MAP_WIDTH], Player *p);
int movePlayerBack(int map[][MAP_WIDTH], Player *p);
int rotatePlayer(Player *p, float rotSpeed);

/* init.c */
SDL_Instance *initInstance(void);
Ray *initRay(Player *p, float cameraX);
Player *initPlayer(double x, double y);

/* free.c */
void freeInstance(SDL_Instance *instance);
void freePlayer(Player *p);
void freeRay(Ray *ray);
void appShutdown(SDL_Instance *instance, Player *player);

/* raycast.c */
void rayCast(int map[][MAP_WIDTH], SDL_Instance *inst, Player *player, int x);
void calcStep(Ray *ray);
void beginDDA(Ray *ray, int map[][MAP_WIDTH]);
void calcDist(Ray *ray);

/* parser.c */
void mapfileParser(char *filepath, int map[][MAP_WIDTH]);
void initMapArray(FILE *fp, int h, int w, int map[][MAP_WIDTH]);
void printMapArray(int h, int w, int map[][MAP_WIDTH]);

#endif
