// This program asks the user to enter the length and width of a rectangle. It calculates the rectangle's area and displays the value on the screen.


#include <iostream>
using namespace std;

int main()
{
    int length, 
        width, 
        area;

    cout << "This program calculates the area of a rectangle.\n";
    cout << "What is the length of the rectangle? ";
    cin >> length;
    cout << "What is the width of the rectangel? ";
    cin >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << "." << endl;

    return 0;
}
