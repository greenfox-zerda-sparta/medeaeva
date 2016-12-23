#ifndef _APP_
#define _APP_

#include <SDL.h>
#include "Board.h"

extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

class App {
public:
    // member functions
    ~App();

    bool init();
    bool loadMedia();
    void run();
    void close();

    SDL_Window *gWindow;
    SDL_Renderer *gRenderer;
    SDL_Surface *gXOut;
    SDL_Renderer *getRenderer();

private:
    Board board;

    SDL_Event event;
};

#endif
