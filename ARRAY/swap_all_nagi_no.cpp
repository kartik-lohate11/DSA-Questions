#include <iostream>
using namespace std;

// puch the size of array and push the elements of array and all nagitive elements shift at left
// site.

int main()
{
    int arr[100], i, j, temp, k = 0, size;

    cout << " Enter the size of array " << endl;
    cin >> size;

    cout << " Enter the elements of array " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp = arr[i] ;   
            arr[i] = arr[k] ;
            arr[k] = temp ;
            k++;
        }
        else if (arr[i] > 0)
        {
            arr[k];
        }

        
    }
    cout << " After " << endl;

    for (k = 0; k < size; k++)
    {
        cout << " " << arr[k];
    }

    return 0;
}