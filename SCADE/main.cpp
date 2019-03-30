#include <SDL.h>
#include <cstdio>

#undef main

#define WIDTH 640
#define HEIGHT 480

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		printf("Error: Failed to initialize SDL with error '%s'\n", SDL_GetError());
		return -1;
	}

	SDL_Window* mWindow;

	mWindow = SDL_CreateWindow("SDL 2.0.9 Build", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

	SDL_Surface* mSurface = SDL_GetWindowSurface(mWindow);

	SDL_Delay(1000);

	SDL_Quit();
	return 0;
}