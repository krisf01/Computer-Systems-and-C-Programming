#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14159;
    int choice;
    
    cout << "Geometry Calculator\n" << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
        float area;
        case 1:
            int radius;
            cout << "Enter the circle's radius: ";
            cin >> radius;
            cout << endl;
            
            if (radius < 0)
            {
                cout << "The radius must be a positive number, try again." << endl;
            }
            else
            {
                area = PI * pow(radius, 2);
                cout << "The area is " << area << endl;
            }
            break;
            
        case 2:
            float width, length;
            cout << "Enter the rectangle's length: ";
            cin >> length;
            if (length > 0)
            {
                cout << "Enter the rectangle's width: ";
                cin >> width;
                cout << endl;
            
            if (width > 0)
                { 
                    area = length * width;
                    cout << "The area is " << area << endl;
            }
            else 
            {
                cout << "The width must be greater than 0, try again" << endl;
            }
            
    }
    else
    {
        cout << "The length must be greater than 0, try again" << endl;
    }
    break;
    
case 3:
    float height, base;
    
    cout << "Enter the length of the base: ";
    cin >> base;
    if(base > 0)
    {
        cout << "Enter the triangle's height: ";
        cin >> height;
        cout << endl;
        if (height > 0)
        {
            area = (base * height)* 0.5;
            cout << "The area is " << area << endl;
        }
        else
        { 
            cout << "The height must be greater than 0, try again" << endl;
        }
    }    
    else
    {
        cout << "The base length must be greater than 0, try again" << endl;
    }
    break;
    
case 4:
    cout << "Program ending" << endl;
    break;
    
default:
    cout << "Sorry must choose between 1 and 4" << endl;
    break;
}
cout << endl;

return 0;
}
