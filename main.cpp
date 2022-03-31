#include "Turtle.h"

void read_file(vector <string>& map, int& xpos, int& ypos, string path)
{
	ifstream file;
	string str;
	int number = 0;
	file.open(path);
	if (file.is_open()) {
		while (getline(file, str)) {
			number = str_to_int(str);
			if (!(number > 0 && number < 50)) {
				map.push_back(str);
			}
			else if (ypos == -101)
				ypos = number;
			else if (xpos == -101)
				xpos = number;
		}
	}
	else {
		cout << "Error: Operation file corrupted" << endl;
		exit(0);
	}
	file.close();
}

int main()
{
	int xpos = -101, ypos = -101;
	string mode = "fast";
	vector<string> map;
	read_file(map, xpos, ypos, "l3.txt");
	running(map, xpos, ypos);
	return 0;
}