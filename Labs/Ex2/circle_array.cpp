#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    /*
     *
     Prompt the user to enter the size of the array.
     Create a dynamically allocated array of that size.
     Until the user has not finished ...
     Prompt the user to enter the centre coordinates (x,y) and the radius of a circle.
     Instantiate a Circle object with these values, then store this Circle object in the array.
     Increment the count of elements.
     Print the size of the array.
     Print the number of Circle objects entered into the array.
     Print the number of empty cell(s) in array.
     Print the content of the entire array, i.e., for each cell:
     Print the value of the index of the cell.
     If there is a Circle object stored in this cell, print it using the appropriate Circle method for this purpose.
     If there is no Circle object stored in this cell, print "This cell is empty.".
     Question: How will you know whether there is a Circle object in a cell? Answer: You can use your variables elementCount and size for this purpose. Of course, you may have named these variables differently (yet descriptively).
     Delete the dynamically allocated array before terminating the program.
     This program returns 0.\
     */
    
    /*
     *
     Insert (or try to store) a Circle object in an array of size 0.
     Insert (or try to store) 5 Circle objects in an array of size > 0, yet < 5.
     Insert 5 Circle objects in an array of size 5.
     Insert 5 Circle objects in an array of size 8.
     Remove a Circle object from an empty array.
     Remove a Circle object that has been successfully inserted into an array.
     Remove a Circle object that has not been inserted into an array.
     etc...
     
     */
    Circle *circleArray = NULL;
    int capacity = 0;
    int elementCount = 0;
    
    cout << "Enter the capacity of array\n";
    cin >> capacity;
    circleArray = new Circle[capacity];
    
    int x = 0;
    int y = 0;
    double  radius = 0.0;
    int repeat = 1;
    bool error = 1;
    
    while(repeat) {
        
        cout << "Enter the x and y coordinates and the radius of a circle accordingly\n";
        cin >> x >> y >> radius;
        
        Circle element(x, y, radius);
        circleArray[elementCount] = element;
        elementCount++;
        
        if(elementCount == capacity) {
            cout << "The array is full\n";
            break;
        }
        
        while(error) {
            cout << "Enter 1 to input another circle 0 to finish\n";
            cin >> repeat;
            
            if(repeat == 1 || repeat == 0){
                error = false;
            }
        }
        
    }
    
    cout << "The size of array: " << capacity << endl;
    cout << "The number of Circle objects entered into the array: " << elementCount << endl;
    cout << "The number of empty cell(s) in array: " << capacity - elementCount << endl << endl;
    cout << "Array content\n\n";
    for(int i = 0; i < capacity; i++) {
        cout << "Index: " << i << endl;
        if(i < elementCount) {
            circleArray[i].dispalyCircle();
        }
        else {
            cout << "This cell is empty" << endl;
        }
        
        cout << endl;
    }
    
    delete[] circleArray;
    
    return 0;
}
