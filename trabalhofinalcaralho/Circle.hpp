#pragma once
#include <GLUT/GLUT.h>
#include <cmath>

class Circle
{
public:
    float xCenter, yCenter;
    float radius;
    float pi = 3.1415;
    int index = 0;

    Circle() {
        float angle = 2 * pi * 6 / 20; // circulo inicial da corrida
        index = 1;
        radius = 0.05;
        xCenter = 0.8 * cos(angle);
        yCenter = 0.8 * sin(angle);
        
    }
    Circle(float x, float y, float r) {
        //index = ind;
        xCenter = x;
        yCenter = y;
        radius = r;
    }
    Circle(Circle &circle) {
        index = circle.index;
        xCenter = circle.xCenter;
        yCenter = circle.yCenter;
        radius = circle.radius;
    }
    void drawCircle();
};
