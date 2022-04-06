#include "Turtle.h"


void draw_map(vector<string> map) {
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool statement = true;
    window = SDL_CreateWindow("Turtle Run", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderPresent(renderer);
    SDL_RenderClear(renderer);
    for (int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[0].size(); j++) {
            if (map[i][j] != ' ') {
                if (map[i][j] == '*') {
                    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
                }
                else if (map[i][j] == 'x')
                    SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255);
                for (int a = 1000 / map.size() * i; a < 1000 / map.size() * (i + 1); a++) {
                    for (int b = 1000 / map[0].size() * j; b < 1000 / map[0].size() * (j + 1); b++) {
                        SDL_RenderDrawPoint(renderer, b, a);
                    }
                }

            }
        }
    }
    SDL_RenderPresent(renderer);
    SDL_Delay(5000);
    SDL_Quit();
}