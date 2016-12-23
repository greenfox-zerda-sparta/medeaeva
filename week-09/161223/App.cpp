#include "App.h"
#include <cstdio>


    SDL_Window *gWindow;
    SDL_Renderer *gRenderer;
    SDL_Surface *gXOut;

App::~App() {
    if(gRenderer != NULL) {
      SDL_DestroyRenderer(gRenderer);
      gRenderer = NULL;
    }

    if(gWindow != NULL) {
      SDL_DestroyWindow(gWindow);
      gWindow = NULL;
    }
    if(gXOut != NULL) {
      SDL_FreeSurface (gXOut);
      gXOut = NULL;
    }
}

// starts SDL and initializes window
bool App::init() {
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("Couldn't start SDL! SDL error: %s\n", SDL_GetError());
        return false;
    }

    gWindow = SDL_CreateWindow("My Gomoku Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if(gWindow == NULL)
    {
        printf("Couldn't create Window! SDL error: %s\n", SDL_GetError());
        return false;
    }

    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(gRenderer == NULL)
    {
        printf("Couldn't create Renderer! SDL error: %s\n", SDL_GetError());
        return false;
    }

    return true;
}

bool App::loadMedia() {
  //Loading success flag
  bool success = true;

  //Load splash image
  gXOut = SDL_LoadBMP("amoba.bmp");
  if (gXOut == NULL) {
  printf ("Unable to load image %s! SDL Error: %s\n",
          "amoba.bmp", SDL_GetError ());
  success = false;
  }

  return success;
}
// starts the game lifecycle
void App::run()
{
    bool quit = false;
    while(!quit)
    {
        // handle exit events
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
                quit = true;
        }

        // update and render the game
        //game.update(&event);
        //game.render();
        //game.checkWin();
    }
}

void App::close() {
  //Deallocate surface
  SDL_FreeSurface (gXOut);
  gXOut = NULL;

  //Destroy window
  SDL_DestroyWindow (gWindow);
  gWindow = NULL;

  //Quit SDL subsystems
  SDL_Quit ();
}

