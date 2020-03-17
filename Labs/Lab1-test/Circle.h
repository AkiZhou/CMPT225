//
// Created by Aki Zhou on 2019-01-14.
//

#ifndef INC_1_CIRCLE_H
#define INC_1_CIRCLE_H

class Circle {
private:
    int xCoordinate; // X coordinate of the circle's centre
    int yCoordinate; // Y coordinate of the circle's centre
    double radius; // Radius of the circle, 0 < radius

public:
    // Constructors
    Circle();
    Circle(int newXcoordinate, int newYcoordinate, double newRadius);

    // Accessors
    int getX() const;
    int getY() const;
    double getRadius() const;

    // Mutators
    void move(int horiz, int vert);
    void setRadius(double r);

    double computeArea() const;
    void dispalyCircle() const;
    bool intersect (Circle c) const;
};


#endif //INC_1_CIRCLE_H
