#include "Turtle.h"


void running(vector<string> &map, int xpos, int ypos) {
	if (map[ypos][xpos] != 's')
		map[ypos][xpos] = 'x';
	if ((xpos == 0 || ypos == 0) || (xpos == map[0].size() - 1 || ypos == map.size() - 1) && (map[ypos][xpos] == ' ')) {
		return;
	}
	else {
		if (ypos + 1 < map.size() && map[ypos + 1][xpos] == ' ')
			running(map, xpos, ypos + 1);
		if (ypos - 1 >= 0 && map[ypos - 1][xpos] == ' ')
			running(map, xpos, ypos - 1);
		if (xpos + 1 < map[0].size() && map[ypos][xpos + 1] == ' ')
			running(map, xpos + 1, ypos);
		if (xpos - 1 >= 0 && map[ypos][xpos - 1] == ' ')
			running(map, xpos - 1, ypos);
	}
}