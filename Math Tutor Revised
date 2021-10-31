#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int MIN_VALUE = 100;
    const int MAX_VALUE = 1000;
    const int addition = 1, subtraction = 2, multiplication = 3, division = 4, quit = 5;
    int randomnumber1, randomnumber2, useranswer, randnumanswer;
    int choice;
    std::setw(5);
    unsigned seed = time(0);
    srand(seed);
    do
    {
        randomnumber1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        randomnumber2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        cout << "      " << "Math Tutor Menu" << endl;
        cout << "----------------------------" << endl;
        cout << "1. Addition problem" << endl;
        cout << "2. Subtraction problem" << endl;
        cout << "3. Multiplication problem" << endl;
        cout << "4. Division problem" << endl;
        cout << "5. Quit this program" << endl;
        cout << "----------------------------" << endl;
        cout << "Enter your choice (1-5): ";
        while(!(cin >> choice)  || choice < addition || choice > quit)
        {
            cout << "Choose numbers only between 1, 2, 3, 4, 5: ";
            
        }
        
        if (choice != quit)
        {
            switch (choice)
    {
    case 1:
        {  
            randnumanswer = randomnumber1 + randomnumber2;
            cout << setw(5) << randomnumber1 << endl;
            cout << "+" << endl;
            cout << setw(5) << randomnumber2 << endl;
            cout << "------" << endl;
            cout << "  ";
            cin >> useranswer;
            cout << endl;
            break;
        }
    case 2:
        {
            randnumanswer = randomnumber2 - randomnumber1;
            cout << setw(5) << randomnumber2 << endl;
            cout << "-" << endl;
            cout << setw(5) << randomnumber1 << endl;
            cout << "------" << endl;
            cout << "  ";
            cin >> useranswer;
            cout << endl;
            break;
        }
    case 3:
        {
            randnumanswer = randomnumber1 * randomnumber2;
            cout << setw(5) << randomnumber1 << endl;
            cout << "*" << endl;
            cout << setw(5) << randomnumber2 << endl;
            cout << "------" << endl;
            cout << "  ";
            cin >> useranswer;
            cout << endl;
            break;
        }
    case 4:
        {
            randnumanswer = randomnumber1 % randomnumber2;
            cout << setw(5) << randomnumber1 << endl;
            cout << "%" << endl;
            cout << setw(5) << randomnumber2 << endl;
            cout << "------" << endl;
            cout << "  ";
            cin >> useranswer;
            cout << endl;
            break;
        }
    
    }    
            if (useranswer == randnumanswer) 
            {
                cout << "\nCongratulations!" 
                     << endl 
                     << endl;
            }
            else if(useranswer != randnumanswer) 
            {
                cout << "Sorry, the correct answer: " 
                     << randnumanswer 
                     << endl 
                     << endl;
            }
        }
        else
            cout << "Thank you for using Math Tutor." << endl;
        
    } while (choice != quit);
    
    cout << endl;
    return 0;
}
