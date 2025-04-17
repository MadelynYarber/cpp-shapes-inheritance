#include "Shapes.h"

int main() {

int choice;

double totalPerimeter;
double totalArea;

int capacity = 3;
int size = 0;
Shape** myShapes = new Shape*[capacity];
Shape** moreShapes;

bool keepGoing = true;
while(keepGoing){
cout << "Pick a shape to add: " << endl;
cout << "1. Square" << endl;
cout << "2. Circle" << endl;
cout << "3. Triangle" << endl;
cout << "4. Compute the aggregate area/perimeter of all shapes" << endl;
cout << "5. Quit" << endl;
cin >> choice;

    switch (choice) {
        case 1:
            double theSides;
                cout << "Square" << endl;
                cout << "What is the measurement of all the sides" << endl;
                cin >> theSides;

                cout << "Added a square to " << size << endl;
                myShapes[size++] = new Square(theSides);
                cout << "New size is " << size << endl;
                break;

        case 2:
            double radius;
                cout << "Circle" << endl;
                cout << "What is the radius of the circle" << endl;
                cin >> radius;
                myShapes[size++] = new Circle(radius);
                break;

        case 3:
            double base;
            double sideOne;
            double sideTwo;
            double height;
                cout << "Triangle" << endl;
                cout << "What is the base of the triangle" << endl;
                cin >> base;
                cout << "What is the other two sides of the triangle" << endl;
                cin >> sideOne;
                cin >> sideTwo;
                cout << "What is the height of the triangle" << endl;
                cin >> height;
                myShapes[size++] = new Triangle(base, sideOne, sideTwo, height);
                break;
                
            case 4:
                cout << "Compute the aggregate area/perimeter of all shapes" << endl;
                totalPerimeter = 0;
                totalArea = 0;
                for(int i = 0; i < size; i++)
                {
                    cout << "Shape " << i << endl;
                    cout << "Perimeter: " << myShapes[i]->GetPerimiter() << endl;
                    cout << "Area: " << myShapes[i]->GetArea() << endl;

                    totalPerimeter += myShapes[i]->GetPerimiter();
                    totalArea += myShapes[i]->GetArea();
                } 

                cout << "The total perimeter of all shapes: " << totalPerimeter << endl;
                cout << "The total Area of all shapes: " << totalArea << endl;
                break;

            case 5:
                    cout << "Quit" << endl; 
                    keepGoing = false;
                    break;
        default:
                cout << "didn't work, try again" << endl;   
                break;  

    }
    if (size == capacity)
    {
        moreShapes = new Shape*[capacity + 1];
        for (int i = 0; i < size; i ++)
        {
            moreShapes[i] = myShapes[i];
        }
        delete [] myShapes;
        myShapes = moreShapes;
        capacity++;
    }
}

        for(int i = 0; i < size; i++)
        {
        delete myShapes[i];
        }

        delete [] myShapes;

    return 0;
}