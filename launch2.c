#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
/* Size of the window */
#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480
#define SOIL_SIZE    32
#define CHAR_SIZE 32



void HandleEvent(SDL_Event event,
        int *quit)
{
    switch (event.type) {
        /* close button clicked */
        case SDL_QUIT:
            *quit = 1;
            break;

        /* handle the keyboard */
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym) {
                case SDLK_ESCAPE:
                case SDLK_q:
                    *quit = 1;
                    break;
            }
            break;
    }
}


int main(int argc, char* argv[])
{
    SDL_Surface *screen, *temp, *grass, *dirt, *player;
    int colorkey;

    /* initialize SDL */
    SDL_Init(SDL_INIT_VIDEO);

    /* set the title bar */
    SDL_WM_SetCaption("SDL Animation", "SDL Animation");

    /* create window */
    screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);

    /* set keyboard repeat */
    SDL_EnableKeyRepeat(10, 10);

    /* setup sprite colorkey and turn on RLE */
    colorkey = SDL_MapRGB(screen->format, 255, 0, 255);
    //SDL_SetColorKey(sprite, SDL_SRCCOLORKEY | SDL_RLEACCEL, colorkey);

    /* load grass */
    temp  = SDL_LoadBMP("grass.bmp");
    grass = SDL_DisplayFormat(temp);
    SDL_FreeSurface(temp);

    /* load dirt */
    temp  = SDL_LoadBMP("dirt.bmp");
    dirt = SDL_DisplayFormat(temp);
    SDL_FreeSurface(temp);

    /* load character */
    temp = SDL_LoadBMP("Player0.bmp");
    player = SDL_DisplayFormat(temp) ;
    SDL_FreeSurface(temp);
    
    
    int gameover = 0;

    /* main loop: check events and re-draw the window until the end */
    while (!gameover)
    {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
            HandleEvent(event, &gameover);
        }
        /* draw the background */
	SDL_Rect position;
        for (int x = 0; x < SCREEN_WIDTH / SOIL_SIZE; x++) {
            for (int y = 0; y < SCREEN_HEIGHT / SOIL_SIZE; y++) {
                
                position.x = x * SOIL_SIZE;
                position.y = y * SOIL_SIZE;
		if (1>=x || x>=(SCREEN_WIDTH / SOIL_SIZE)-1)
		{
		  SDL_BlitSurface(grass, NULL, screen, &position);
		  }
		if (1>=y || y>=(SCREEN_HEIGHT / SOIL_SIZE)-1)
		{
		    SDL_BlitSurface(grass, NULL, screen, &position);
		  }
		
		if (x>=1 && x<(SCREEN_WIDTH / SOIL_SIZE)-1)
		{
		  if (y>=1 && y<(SCREEN_HEIGHT / SOIL_SIZE)-1)
		  {
		    SDL_BlitSurface(dirt, NULL, screen, &position);
		  }  
		}
            }
        }
        /* update the screen */
        SDL_UpdateRect(screen, 0, 0, 0, 0);
    }

    /* clean up */
    SDL_FreeSurface(dirt);
    SDL_FreeSurface(grass);
    SDL_Quit();

    return 0;
}