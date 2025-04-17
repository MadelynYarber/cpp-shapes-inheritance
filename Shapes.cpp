#include "Shapes.h"

//====================SHAPE======================

Shape::~Shape(){

}

//===================SQUARE=======================
Square::Square()
{
    theSides = 0;
}
Square::Square(double theSides)
{
    this->theSides = theSides;
}


double Square::GetPerimiter()
{
    return 4 * theSides;
}
double Square::GetArea()
{
    return theSides * theSides;
}

Square::~Square()
{

}

//================CIRCLE================
Circle::Circle()
{
    radius = 0;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}
//Perimeter: 2 x pi x 2
//Area: pi x radius(squared)
double Circle::GetPerimiter()
{
    double pi = 3.14;

    return 2 * pi * radius;
}
double Circle::GetArea()
{
    double rSquared = radius * radius;

    return 3.14 * rSquared;
}

Circle::~Circle()
{

}

//================TRIANGE================
Triangle::Triangle()
{
    base = 0;
    sideOne = 0;
    sideTwo = 0;
    height = 0;
}
Triangle::Triangle(double base, double sideOne, double sideTwo, double height)
{
    this->base = base;
    this->sideOne = sideOne;
    this->sideTwo = sideTwo;
    this ->height = height;
}

//Perimeter: side + side + side
//Area: 1/2 x base x height
double Triangle::GetPerimiter()
{
    return base + sideOne + sideTwo;
}
double Triangle::GetArea()
{
    double half = 0.50;
    return base * height * 0.50;
}

Triangle::~Triangle()
{
    
}
