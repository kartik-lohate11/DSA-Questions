#include <iostream>
using namespace std;

// pushing a array and takes a any number & position of array(size-1) then
// store the number into taken position(array_index).TRAFFICLIGHT

int main()
{
  int arr[10], a, size, new_elm, position, s = 1;

  cout << "enter the size of array " << endl;
  cin >> size;

  cout << "enter the elements of array " << endl;
  for (a = 0; a < size; a++)
  {
    cin >> arr[a];
  }
  cout << "the array " << endl;
  for (a = 0; a < size; a++)
  {
    cout << " " << arr[a];
  }

  cout << "enter the number " << endl;
  cin >> new_elm;
  cout << "enter the position of array do you want to push " << endl;
  cin >> position;

  for (a = size - 1; a >= -1; a--)
  {
    if (position > size)              // if push 0
    {
      cout << "doesn't has space ";
      s = 0;
      break;
    }
    if (a < position)
    {
      arr[a + 1] = new_elm;
      break;
    }

    else
    {
      arr[a + 1] = arr[a];
    }
  }

  cout << "after the array " << endl;
  for (a = 0; a < size + s; a++)
  {
    cout << " " << arr[a];
  }
  return 0;
}