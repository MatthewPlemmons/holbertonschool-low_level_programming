#include "controls.h"



int exit_check()
{
	SDL_Event event;
	SDL_KeyboardEvent key;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			return (1);
		case SDL_KEYDOWN:
			key = event.key;
			if (key.keysym.scancode == 0x29)
				return (1);
		}
	}
	return (0);
}


int move_player_forward(int map[][MAP_WIDTH], Player *p)
{
	if (map[(int)(p->pos.x + p->dir.x * p->move_speed)][(int)p->pos.y] == 0)
		p->pos.x += p->dir.x * p->move_speed;
	if (map[(int)p->pos.x][(int)(p->pos.y + p->dir.y * p->move_speed)] == 0)
		p->pos.y += p->dir.y * p->move_speed;
	return (0);
}

int move_player_back(int map[][MAP_WIDTH], Player *p)
{
	if (map[(int)(p->pos.x - p->dir.x * p->move_speed)][(int)p->pos.y] == 0)
		p->pos.x -= p->dir.x * p->move_speed;
	if (map[(int)p->pos.x][(int)(p->pos.y - p->dir.y * p->move_speed)] == 0)
		p->pos.y -= p->dir.y * p->move_speed;
	return (0);
}

int rotate_player(Player *p, float rot_speed)
{
	/* both camera direction and camera plane must be rotated */
	double oldDirX = p->dir.x;
	p->dir.x = p->dir.x * cos(rot_speed) - p->dir.y * sin(rot_speed);
	p->dir.y = oldDirX * sin(rot_speed) + p->dir.y * cos(rot_speed);

	double oldPlaneX = p->plane.x;
	p->plane.x = p->plane.x * cos(rot_speed) - p->plane.y * sin(rot_speed);
	p->plane.y = oldPlaneX * sin(rot_speed) + p->plane.y * cos(rot_speed);
	return (0);
}

int check_move_keys(int map[][MAP_WIDTH], Player *player)
{
	const Uint8 *keys = SDL_GetKeyboardState(NULL);

	if (keys[SDL_SCANCODE_W])
		move_player_forward(map, player);
	if (keys[SDL_SCANCODE_S])
		move_player_back(map, player);
	if (keys[SDL_SCANCODE_A])
		rotate_player(player, -(player->rot_speed));
	if (keys[SDL_SCANCODE_D])
		rotate_player(player, player->rot_speed);

	return (0);
}