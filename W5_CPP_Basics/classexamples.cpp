//
// Created by roman on 24.10.2023.
// Woche 5 eigentlich der SWP Vorlesung
//

#include "classexamples.h"
//Code aus Vorlesung
#include <iostream>

using namespace std;

/*
 Beispiel für Klassen
*/

class Point {
// private:
    float x, y;
public:
    Point() {} // Default Konstrukor, implizit vorhanden
    Point(float x2, float y2) {
        x = x2;
        y = y2;
    }

    ~Point() {
        cout << "das war's" << endl;
    }

    void scale(float f) {
        x = f * x;
        y = f * y;
    }
}; // anders wie in Java

int main() {
    Point p = Point(1.0, 2.0);
}
