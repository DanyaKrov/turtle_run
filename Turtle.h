#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h>
#include "SDL.h"
using namespace std;


//additional
int str_to_int(string str);
void check(vector <string> map, int xpos, int ypos);
int len(string str);
void print_vector(const vector <string>& vector1);

//draw
void draw_map(vector<string> map);

//moving
void running(vector<string>& map, int xpos, int ypos);