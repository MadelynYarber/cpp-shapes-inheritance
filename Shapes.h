#include <iostream>
using namespace std;

//====================SHAPE==================
class Shape {
public:
virtual double GetPerimiter()=0;
virtual double GetArea()=0;
virtual ~Shape();
};

//====================SQUARE==================
class Square:public Shape {
private:
    double theSides;

public:

Square();
Square(double theSides);
double GetPerimiter();
double GetArea();
~Square();


};

//====================CIRCLE==================
class Circle:public Shape {
private:
    double radius;
public:
Circle();
Circle(double radius);
double GetPerimiter();
double GetArea();
~Circle();
};

//====================TRIANGLE==================
class Triangle:public Shape {
private:
    double base;
    double height;
    double sideOne;
    double sideTwo;

public:
Triangle();
Triangle(double base, double sideOne, double sideTwo, double height);

double GetPerimiter();
double GetArea();
~Triangle();
};