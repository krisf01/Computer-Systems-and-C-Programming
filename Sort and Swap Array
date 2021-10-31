#include <iostream>
using namespace std;

constexpr int VALUES_LENGTH = 10;

void sortArray(int [], int);
void showArray(const int [], int);
int main()
{
    int values[VALUES_LENGTH] = {1,3,5,7,9,8,6,4,2,0};
    sortArray(values, VALUES_LENGTH);
    return 0;
}

void sortArray(int array[], int size)
{
    bool swap;
    int temp;
    do
    {
        showArray(array, size);
        
        swap = false;
        for(int count = 0; count < (size - 1); count++)
        {
            if(array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    }while (swap);
}
void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
    cout << array[count] << " ";
    cout << endl;
}
