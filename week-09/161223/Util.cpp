#include "Util.h"
#include "App.h"
#include <cmath>

// render cross on board field (row, col)
void Util::drawCross (unsigned int row, unsigned int col) {
  int fieldW = SCREEN_WIDTH / 20;
  int fieldH = SCREEN_HEIGHT / 20;

  SDL_SetRenderDrawColor(gRenderer, 0xFF, 0x00, 0x00, 0xFF );
  // top left to bottom right
  SDL_RenderDrawLine (gRenderer, (col+1) * fieldW, (row+1) * fieldH,
                      (col+1) * fieldW + fieldW, (row+1) * fieldH + fieldH);

  // top right to bottom left
  SDL_RenderDrawLine (gRenderer, col * fieldW, row * fieldH + fieldH,
                      col * fieldW + fieldW, row * fieldH);
}

// render circle on board field (boardX, boardY)
void Util::drawCircle (unsigned int row, unsigned int col) {
  int fieldW = SCREEN_WIDTH / 20;
  int fieldH = SCREEN_HEIGHT / 20;

  SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0xFF, 0xFF );

  // calculate circle center
  int centerX = (col+1) * fieldW + (fieldW / 2);
  int centerY = (row+1) * fieldH + (fieldH / 2);

  int r = fieldW / 2;

  double step = 2 * M_PI / 30;
  int endX = centerX + r;
  int endY = centerY;

  // draw circle.. Multiple straight lines between consecutive
  // points of the desired circle
  for (double angle = 0; angle < 2 * M_PI; angle += step) {
  int startX = endX;
  int startY = endY;
  endX = r * cos (angle) + centerX;
  endY = r * sin (angle) + centerY;
  SDL_RenderDrawLine (gRenderer, startX, startY, endX, endY);
  }
}
