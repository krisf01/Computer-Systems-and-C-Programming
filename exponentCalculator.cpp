#include <iostream>
using namespace std;

int power(int, int);

int main()
{
    int base, exponent, answer;
    
    cout << "Enter the Base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    answer = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << answer; 
    return 0;
}

int power(int base, int exponent)
{
    if (exponent != 0)
        return (base*power(base, exponent-1));
    else
        return 1;
}
