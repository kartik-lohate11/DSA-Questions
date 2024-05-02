#include <iostream>
using namespace std;

// pushing the two array of elements and find the intersection of each other.

int main()
{
    int arr[10], arr1[10], a, b, c, ch = 0;

    cout << "enter the elements of array" << endl;
    for (a = 0; a < 5; a++)
    {
        cin >> arr[a];
    }
    cout << "enter the elements of sceond array" << endl;
    for (a = 0; a < 5; a++)
    {
        cin >> arr1[a];
    }
    cout << " the intersection of array is = ";
    for (a = 0; a < 5; a++)
    {
        for (b = a; b < 5; b++)
        {
            if (arr1[a] == arr[b] && ch != arr[b])
            {
                cout << " " << arr1[a];
                ch = arr1[a];
               // cout<<" ch = "<<ch;
            }
        }
    }

    return 0;
}