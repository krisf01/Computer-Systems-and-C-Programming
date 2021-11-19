#include<iostream>
#include<string>

#define SIZE 100
using namespace std;

class Array
{
//declare pointer to array
        int *arr;
        int size;
    public:
        Array();
        int setVale(int index,int val);
        int operator[](int index) const;
        int getCapacity();
    //destroctor
        ~Array();
};

Array::~Array()
{
    delete[]arr;
}

//default constructor
Array::Array()
{
//allocate memory for array
    arr = new int[SIZE];
//initialize array with zeors
for (int i = 0; i < 100; i++)
    arr[i] = 0;
    size = 0;
}

int Array::getCapacity()
{
    return SIZE;
}

int Array::setVale(int index,int val)
{
    if (index >= 0 && index < SIZE)
    {
        arr[index] = val;
    if(arr[index])
        size++;
    return 0;
    }
    else
    return - 1;
}

int Array::operator[](int index) const
{
    return arr[index];
}

int main()
{
//declare Array object
        Array arr;
        string index,value;
        int i, val, count = 0;;
        std::string::size_type sz;
        char choice;
    do
    {
        cout << "Input an index and a value to store[Q to quit]: ";
        cin >> index;
    if (index == "q" || index == "Q")
    break;
        cin >> value;
    if (index >= "a" && index <= "z")
        i = 0;
    else
        i = stoi(index, &sz);
        val = stoi(value, &sz);
    if (arr.setVale(i, val) >= 0)
        count++;
    } 
    while (1);
        cout << "You stored these many values: " << count << endl;
        cout << "The index-value pair are: \n";
    for (int i = 0; i < arr.getCapacity(); i++)
    {
    if (arr[i] > 0)
        cout << i << "=>" << arr[i] << endl;
    }

}
