#include <iostream>
using namespace std;

int fib(int number);
void printFibonacci(void);

int main()
{
    printFibonacci();

    return 0;
}

void printFibonacci(void)
{
    int number;
    cout << "Enter a positive number (else to quit): ";
    cin >> number;
    if (number < 0)
    {
        number = 0;
        cout << "Bye";
        printFibonacci();
    }
    else
    {
        cout << "Fibonacci" << "(" << number << ") is " << fib(number);
    }
    
}

int fib (int x)
{
    if ( x==0)
    {
        return 0;
    }
    else if (x==2 || x==1)
    {
        return 1;
    }
    else if (x>0)
    {
        return fib(x-1)+fib(x-2);
    }
    else
    return -1;
}
