//
// Created by Aki Zhou on 2019-01-14.
//

#define _USE_MATH_DEFINES
#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

/*
    * A default constructor that creates a circle of radius 10.0 with centre (x,y) = (0,0)
      A constructor with parameters for x, y, and radius
   int getX() - returns the circle's centre's x coordinate
   int getY() - returns the circle's centre's y coordinate
   double getRadius() - returns the circle's radius
   void move(int horiz, int vert) - moves the circle the given horizontal and vertical distances (therefore changing its x and y attributes)
   void setRadius(double r) - changes the circle's radius to r, or to 10.0 if r is invalid
   double computeArea() - computes and returns the circle's area
   void displayCircle() - displays the circle's attributes like this: "radius 10.0 at point x = 12, y = 17"
   bool intersect(Circle c) - returns true if c intersects the calling circle - this is an optional method, so finish everything else first!
    */

// Constructors
Circle::Circle() : xCoordinate(0), yCoordinate(0), radius(10.0) {}

Circle::Circle(int newYcoordinate, int newXcoordinate, double newRadius) {
    xCoordinate = newXcoordinate;
    yCoordinate = newYcoordinate;
    radius = newRadius;
}

// Accessors
int Circle::getX() const {
    return xCoordinate;
}

int Circle::getY() const {
    return yCoordinate;
}

double Circle::getRadius() const {
    return radius;
}

// Mutators
void Circle::move(int horiz, int vert) {
    xCoordinate = xCoordinate + horiz;
    yCoordinate = yCoordinate + vert;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::computeArea() const {
    return M_PI * pow(radius, 2);
}

void Circle::dispalyCircle() const {
    cout << "radius " << radius << " at point x = " << xCoordinate
         << ", y = " << yCoordinate << endl;
}

bool Circle::intersect(Circle c) const {
    double distance = 0.0;
    double r_max = max(radius, c.radius);
    double r_min = min(radius, c.radius);
    distance = sqrt(pow(xCoordinate - c.xCoordinate, 2) +  pow(yCoordinate - c.yCoordinate, 2));

    // Cases when circles have the same radius
    if(radius == c.radius) {
        if((2 * radius) < distance) {
            return false;
        }

        return true;
    }

    // Cases when circles have different radius
    if((radius + c.radius) < distance) {
        // Two circles are separate
        return false;
    }
    else{
        if(r_max < distance) {
            return true;
        }
        else if(r_min >= distance) {
            return false;
        }
        else if(r_max == distance) {
            return true;
        }
        else if(r_max > distance) {
            if(r_max <= distance + r_min) {
                return true;
            }
            else {
                return false;
            }
        }
    }

    return false;
}
