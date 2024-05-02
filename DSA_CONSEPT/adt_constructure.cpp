#include <iostream>
using namespace std;

// ADT abstract data type by using CONSTRUCTURE.

class student
{

    int total_size, used_size;
    int *ptr, a;

public:
    student(int tsize, int usize)   // by CONSTRUCTURE
    {
        total_size = tsize;
        used_size = usize;
        ptr = new int[tsize];     // Dynamic memory allocation.

    }
    int fun(int usize)
    {

        cout << "enter the elements of array" << endl;
        for (a = 0; a < usize; a++)
        {
            cin >> ptr[a];
        }
        return 0;
    }
    int putdata(int usize)
    {

        for (a = 0; a < usize; a++)
        {
            cout << " " << ptr[a];
        }
        return 0;
    }
};

int main()
{
    int size, usize;

    cout << "enter the size of array" << endl;
    cin >> size;

    cout << "enter the size which do you want to use " << endl;
    cin >> usize;

    student s1(size, usize); 
    s1.fun(usize);
    s1.putdata(usize);

    return 0;
}