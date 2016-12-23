#ifndef _UTIL_
#define _UTIL_

#include <SDL.h>

using namespace std;

extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

class Util {
public:

  SDL_Renderer *gRenderer;
  void drawCross(unsigned int row, unsigned int col);
  void drawCircle(unsigned int row, unsigned int col);
};

#endif
