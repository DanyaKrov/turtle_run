#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h>
using namespace std;


//additional
int len(string str);
int str_to_int(string str);
void check(vector <string> map, int xpos, int ypos);
void print_vector(const vector <string>& vector1);


//moving
void running(vector<string> map, int xpos, int ypos);