#include "maze.h"


void free_instance(SDL_Instance *instance)
{
	if (!instance)
		return;

	free(instance);
	instance = NULL;
}


void free_player(Player *p)
{
	if (!p)
		return;

	free(p);
	p = NULL;
}

void app_Shutdown(SDL_Instance *instance, Player *player)
{
	SDL_DestroyRenderer(instance->renderer);
	SDL_DestroyWindow(instance->window);
	free_instance(instance);
	free_player(player);
	SDL_Quit();
}
