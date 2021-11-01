#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    const int MIN_VALUE = 100;
    const int MAX_VALUE = 999;
    int randomnumber1, randomnumber2, useranswer, randnumanswer;
    std::setw(5);
    unsigned seed = time(0);
    srand(seed);
    randomnumber1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    randomnumber2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    randnumanswer = randomnumber1 + randomnumber2;
    
    cout << setw(5) << randomnumber1 << endl;
    cout << "+" << endl;
    cout << setw(5) << randomnumber2 << endl;
    cout << "------" << endl;
    cout << endl;
    cout << "Enter the answer here: ";
    cin >> useranswer;
    cout << endl;
    
    {   if (useranswer != randnumanswer)
        cout << "Sorry that is incorrect." << endl << "The answer is "  << randnumanswer << endl;
        
    else if (useranswer == randnumanswer)
        cout << "Congratualtions!" << endl << "The answer is " << randnumanswer << endl;
    }

    
   
    return 0;
}
