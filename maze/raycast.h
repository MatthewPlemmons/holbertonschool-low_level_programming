#include "maze.h"

/**
*
*
*/
typedef struct ray_s
{
	Vector pos;
	Vector dir;
	Vector grid_pos;
	Vector side_dist;
	Vector delta_dist;
	Vector step;
	double perp_wall_dist;
	int hit;
	int side;
} Ray;


/* raycast_init.c prototypes */
Ray *initialize_ray(Player *p, float cam);
void free_ray(Ray *ray);

/* raycast.c prototypes */
void ray_cast(int map[][MAP_WIDTH], SDL_Instance *inst, Player *player, int x);
void calculate_step(Ray *ray);
void digital_differential_analysis(Ray *ray, int map[][MAP_WIDTH]);
void calculate_dist(Ray *ray);
