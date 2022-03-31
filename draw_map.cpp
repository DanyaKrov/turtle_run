#include "Turtle.h"


void draw_map(vector<string> map) {
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool statement = true;
    window = SDL_CreateWindow("SDL_RenderClear", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    
    while (statement) {
        
    }
    SDL_Quit();
    return 0;
}