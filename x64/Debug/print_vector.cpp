#include "Turtle.h"

void print_vector(const vector <string>& vector1)
{
    if (vector1.size() > 0) {
        for (int i = 0; i < vector1.size() - 1; i++) {
            cout << vector1[i] << endl;
        }
        cout << vector1[vector1.size() - 1] << endl;
    }
}