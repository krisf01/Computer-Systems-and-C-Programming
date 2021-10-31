#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int gallons;
    int miles;
    double perGallon;
    
    cout << "How many gallons can the car can hold? ";
    cin >> gallons;
    cout << "How many miles can the car be driven on a full tank? ";
    cin >> miles;
    perGallon = static_cast<double>(miles) / gallons;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Then it will be about " << perGallon << " MPG.\n";
    return 0;
    
}
