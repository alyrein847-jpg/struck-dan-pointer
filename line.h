#ifndef LINE_H
#define LINE_H

#include "point.h"
#include <string>

struct Line {
    double a;
    double b;
    double c;
}; 

double gradient(const Line * l,const Point * p){
    return (l->a * p->x) + (l->b * p->y) + l->c;
}

std::string CheckPointPosition(double gradient){
    double EPSILON = 1e-6;

    if(gradient < -EPSILON){
        return "right";
    }
    else if(gradient > -EPSILON && gradient < EPSILON){
        return "On Line";
    }
    else{
        return "left";
    }
}

#endif