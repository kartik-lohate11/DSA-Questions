#include <iostream>
using namespace std;

int main()
{
  int arr[10][10] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}}, a, b, c, d, tem = 0;

  cout << "enter the elements of array " << endl;

  for (a = 0; a < 3; a++)
  {
    for (b = 0; b < 3; b++)
    {
      cout << " " << arr[a][b];
    }
    cout << endl;
  }

  cout << " For right side 90deg rotation " << endl;

  for (a = 0; a < 3; a++)
  {
    for (b = 0; b < 3; b++)
    {
      if (b < 2)
      {
        tem = arr[b][a];
        arr[b][a] = arr[2 - b][a];
        arr[2 - b][a] = tem;
      }


      cout << "( " << arr[b][a] << "," << arr[2 - b][a] << " )";
    }

    cout << endl;
  }
  cout << " For right side 90deg rotation at second times " << endl;
  for (a = 0; a < 3; a++)
  {
    for (b = 0; b < 3; b++)
    {

      cout << "(  " << arr[b][a] << " " << arr[2 - b][a] << ")";
    }
    cout << endl;
  }

  // cout << " For left side 90deg rotation " << endl;

  // for (a = 0; a < 3; a++)
  // {
  //   for (b = 0; b < 3; b++)
  //   {
  //     cout << " " << arr[b][2 - a];
  //   }
  //   cout << endl;
  // }

  // arr[b][a] = arr[2 - b][a]+arr[b][a];
  // arr[2-b][a]=arr[b][a]-arr[2-b][a];
  // arr[b][a]=arr[b][a]-arr[2-b][a];

  return 0;
}