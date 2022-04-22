#include <SDL.h>
#include "drawing.hpp"
#include <iostream>
using namespace std;

class Flying_Object
{
protected:
    SDL_Rect srcRect;
    SDL_Rect moverRect;

public:
    void draw();
    virtual void fly();
    Flying_Object(SDL_Rect, SDL_Rect);
};