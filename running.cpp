#include "Turtle.h"


void running(vector<string> map, int xpos, int ypos) {
	map[ypos][xpos] = '+';
	print_vector(map);
	cout << endl;
	if ((xpos == 0 || ypos == 0) || (xpos == len(map[ypos]) - 1 || ypos == map.size() - 1) && (map[ypos][xpos] == ' '))
		return;
	if (ypos + 1 < map.size() && map[ypos + 1][xpos] == ' ')
		running(map, xpos, ypos + 1);
	if (ypos - 1 < map.size() && map[ypos - 1][xpos] == ' ')
		running(map, xpos, ypos - 1);
	if (xpos + 1 < len(map[0]) && map[ypos][xpos + 1] == ' ')
		running(map, xpos + 1, ypos);
	if (xpos - 1 < len(map[0]) && map[ypos][xpos - 1] == ' ')
		running(map, xpos - 1, ypos);
}