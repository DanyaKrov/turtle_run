#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h>
using namespace std;



int str_to_int(string str);
void check(vector <string> map, int xpos, int ypos);



//moving
void running(vector<string> map, int& xpos, int& ypos);