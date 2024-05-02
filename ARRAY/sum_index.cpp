#include <iostream>
using namespace std;

/* pushing the array and push a number and check the all in two elements which sum is equal to
   given number and show the it's index.
if push = 1,2,3,4,5 and given no. = 3 so
OUTPUT:
1,2[0,1,],3[2];
*/

int main()
{
    int arr[10], a, b, c;
    cout << "enter the elements of array" << endl;
    for (a = 0; a < 5; a++)
    {
        cin >> arr[a];
    }
    for (a = 0; a < 5; a++)
    {
        cout << " " << arr[a];
    }
    cout << "enter the no of sum" << endl;
    cin >> c;

    for (a = 0; a < 5; a++)
    {
        for (b = a + 1; b < 5; b++)
        {
            if ((arr[a] + arr[b]) == c)
            {
                cout << "the elements = " << arr[a] << " , " << arr[b];
                cout << "the positions = "
                     << " [ " << a << " , " << b << " ] " << endl;
            }
        }
    }

    return 0;
}