#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

const int SIZE = 20;
bool testPass(char[]);
int countLetter(char[]);
int countDigits(char[]);

int main()
{
    char password[SIZE];
    int numdigits;
    
    cout << "Create your password: ";
    cin.getline(password,SIZE);
    
    if(testPass(password))
        cout << "Password is valid." << endl;
        else
        {
            cout << "Yourpass word is NOT valid, Try again." << endl;
            cout << "Must be at least one alphabet" << endl;
            cout << "Must be 6 or more characters" << endl;
            cout << "Must be at least one uppercase character" << endl;
        }
    return 0;
}

bool testPass(char uhPass[])
{
    int numLetter, numDigits, length;
    
    length = strlen(uhPass);
    numLetter= countLetter(uhPass);
    numDigits = countDigits(uhPass);
    if(length == 7 && numLetter == 4 && numDigits == 3)
        return true;
    else
        return false;
}
int countLetter(char str[])
{
    int letters = 0;
    for(int i = 0; i<strlen(str); i++)
    {
        if(isalpha(str[i]))
        letters++;
    }
    return letters;
}
int countDigits(char str[])
{
    int digits = 0;
    for(int i = 0; i < strlen(str);i++)
    {
        if(isdigit(str[i]))
        digits++;
    }
    return digits;
}
