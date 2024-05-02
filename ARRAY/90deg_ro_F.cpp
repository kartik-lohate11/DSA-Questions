#include <iostream>
using namespace std;

// For rotate a n*n matrix to 90deg left or right only using 1 arr[a][b] 3 times;

int main()
{
    int arr[10][10] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}}, a, b, d, tem = 0;
    char c;
    cout << " Enter the elements of array " << endl;

    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            cout << " " << arr[a][b];
        }
        cout << endl;
    }
     for (d = 0; d < 3; d++)
     {
        cout << " For right Side 90deg rotation " << endl;
        cin >> c;
        switch (c)
        {
        case 'r':
        {
            for (a = 0; a < 3; a++)
            {
                for (b = 0; b < 3; b++)
                {
                    if (b < 2)
                    {
                        tem = arr[b][a];
                        arr[b][a] = arr[2 - b][a]; // for 90deg to right
                        arr[2 - b][a] = tem;

                    }
                        
                }
            }
        }break;

        case 'l':
        {
            for (a = 0; a < 3; a++)
            {
                for (b = 0; b < 3; b++)
                {
                    if (a < 2)
                    {
                        tem = arr[b][a]; // for 90deg to left
                        arr[b][a] = arr[b][2 - a];
                        arr[b][2 - a] = tem;
                    }
                }
            }
        }
        }
    }

    cout << " For right side 90deg rotation at second times " << endl;
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b < 3; b++)
        {
            cout << " " << arr[b][a];
        }
        cout << endl;
    }

    return 0;
}