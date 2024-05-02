#include <iostream>
using namespace std;

// puch the array and puch last element of array to first element 

int main()
{
    int arr[10], a, b, c, size;

    cout << "enter the size of array" << endl;

    cin >> size;  // puching the size of array

    cout << "enter the elements of array" << endl;

    for (a = 0; a < size; a++)
    {
        cin >> arr[a];
    }
    size = size - 1;   
    for (a = 0; a < size; a++)
    {
        c = arr[size - a];
        arr[size - a] = arr[(size - 1) - a];
        arr[(size - 1) - a] = c;
    }
    for (a = 0; a < size + 1; a++)
    {
        cout << arr[a] ;   
    }
    return 0;
}