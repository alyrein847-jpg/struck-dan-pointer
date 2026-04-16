#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"
#include <string>

struct Circle {
    Point center; // pakai center biar sama dengan main
    double radius;
};

double distance(const Circle * c,const Point * p){
    double dx = p->x - c->center.x;
    double dy = p->y - c->center.y;
    return dx * dx + dy * dy;
}

std::string CheckPointInCircle(double distance, double r2){
    double epsilon = 1e-6;

    if(distance < r2){
        return "Inside";
    }
    else if(distance > r2 - epsilon && distance < r2 + epsilon){
        return "On Circle";
    }
    else{
        return "Outside";
    }
}

#endif