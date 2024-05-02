#include <iostream>
using namespace std;

// pushing the 1d array and it's index then remove the pertecular index which you select

int main()
{
  int arr[10], size, a, position;

  cout << "enter the size of array " << endl;
  cin >> size;

  cout << "enter the elements of array" << endl;
  for (a = 0; a < size; a++)
  {
    cin >> arr[a];
  }
  cout << "the array " << endl;
  for (a = 0; a < size; a++)
  {
    cout << " " << arr[a];
  }
  cout << "enter the position of array do you want to remove" << endl;
  cin >> position;

  for (a = 0; a < size; a++)
  {
    if ((a + 1) > position)
    {
      arr[a] = arr[a + 1];
    }
  }

  cout << "after the array " << endl;
  for (a = 0; a < size - 1; a++)
  {
    cout << " " << arr[a];
  }

  return 0;
}