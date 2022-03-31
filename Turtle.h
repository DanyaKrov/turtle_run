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



//moving
void running(vector<string>& map, int xpos, int ypos);