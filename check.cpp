#include "Turtle.h"

void check(vector <string> map, int xpos, int ypos) {
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; map[i][j] != '\0'; j++) {
			if (map[i][j] != '*' && map[i][j] != ' ') {
				cout << "Wrong type of map";
				exit(0);
			}
		}
	}
		if (xpos < 0 || ypos < 0) {
			cout << "Wrong type of coordinates" << endl;
			cout << xpos << " " << ypos << endl;
			exit(0);
		}
}