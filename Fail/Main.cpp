#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h" // Include the missing header file for Rectangle

using namespace std;

int main() {
   vector<Shape*> shapes;
   Circle* c = new Circle(1.0f); // Use a pointer for consistency
   c->SetRadius(3.0f); // Use '->' to access member functions of a pointer
   Rectangle* r = new Rectangle(4.0f, 5.0f); // Fix missing semicolon and ensure Rectangle is defined
   shapes.push_back(c);
   shapes.push_back(r);
   for (int i = 0; i < shapes.size(); i++) // Fix loop condition to avoid out-of-bounds access
   {
       cout << "Area: " << shapes[i]->Area() << endl;
       // TODO: If shape is a circle, print radius
   }
   // Delete all shapes to prevent memory leaks
   for (Shape* shape : shapes) {
       delete shape;
   }
   return 0;
}