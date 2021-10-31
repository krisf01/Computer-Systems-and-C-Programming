#include <iostream>
#include <cstring>
using namespace std;

int functionString(const char * p);

int main()
{
    const int SIZE = 20;
    char str[SIZE];
    int words = functionString(str);
    cout << "Enter a string: ";
    cin.getline(str, SIZE);
    cout << "The string you entered contains " << functionString(str) << " character(s).";
    
    return 0;
}

int functionString(const char* p)
{
    int numWords = 0;
    if (p == NULL)
        return 0;
        
    while (*p != '\0')
    {
        if (*p != ' ')
        {    
            numWords++;
        }
        else if (*p == ' ')
        {
            numWords++;
        }
        p++;
    }
    return numWords;
}
