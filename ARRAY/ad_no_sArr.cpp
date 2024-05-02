#include <iostream>
using namespace std;

// push the 1D array and the takes the a number then add in shorted array the shorts it;

int main()
{
    int arr[10], b, new_elm, a, size, tem;

    cout << "enter the size of array " << endl;
    cin >> size;

    cout << "enter the no of elements" << endl;
    for (a = 0; a < size; a++)
    {
        cin >> arr[a];
    }

    cout << "the elements" << endl;
    for (a = 0; a < size - 1; a++)
    {
        for (b = a; b < size - 1; b++)
        {
            if (arr[a] > arr[b + 1])
            {
                tem = arr[a];
                arr[a] = arr[b + 1];
                arr[b + 1] = tem;
            }
        }
    }
    for (a = 0; a < size; a++)
    {
        cout << " " << arr[a];
    }

    cout << "new element" << endl;
    cin >> new_elm;

    for (a = 0; a <= size; a++)
    {
        if (arr[(size - 1) - a] < new_elm)
        {
            arr[size - a] = new_elm;

            break;
        }
        else
        {
            arr[size - a] = arr[(size - 1) - a];
        }
    }

    for (a = 0; a < size + 1; a++)
    {
        cout << " " << arr[a];
    }

    return 0;
}