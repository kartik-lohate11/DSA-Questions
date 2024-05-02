#include <iostream>
using namespace std;

int main()
{
    int arr[10], a, b, c;

    cout << "enter the elements of array" << endl;

    for (a = 0; a < 5; a++)
    {
        cin >> arr[a];
    }
    
    cout << "enter the sum of pair no" << endl;
    cin >> c;

    for (a = 0; a < 5; a++)
    {
        for (b = a; b < 5; b++)
        {
            if (arr[a] + arr[b + 1] == c)
            {
                return arr[a]+arr[b+1];
            }
            
        }
    }
cout<<arr[a]<<" "<<arr[b+1];
    return 0;
}