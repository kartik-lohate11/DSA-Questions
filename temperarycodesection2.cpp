#include <iostream>
using namespace std;

int main()
{
    int arr[10], arr1[10], a, b, ch = 0, arr2[10];

    cout << "enter the elements of first array" << endl;
    for (a = 0; a < 5; a++)
    {
        cin >> arr[a];
    }

    cout << "enter the elements of second array" << endl;
    for (a = 5; a < 10; a++)
    {
        cin >> arr1[a];
    }
    cout << "all lements of array " << endl;
    for (a = 0; a < 10; a++)
    {
        if (a < 5)
        {
            arr2[a] = arr[a];
        }
        else
            arr2[a] = arr1[a];
    }

    for (a = 0; a < 10; a++)
    {
        cout << " " << arr2[a];
    }
    cout << endl;
    for (a = 0; a < 10; a++)
    {
        for (b = a; b < 10; a++)
        {
            if (arr2[a] != arr2[b + 1])
            {
                cout << " " << arr2[a];
               
            }
        }
    }
 for(a=0;a<6;a++)
 {    
    if(arr[a]<arr[a+1])
     { cout<<"( "<<arr[a]<<" , "<<arr[a+1]<<" ) ";}
     
      else if(arr[a]>arr[2-a])
       { cout<<"( "<<arr[a]<<" , "<<arr[2-a]<<" ) ";}
       
       else{
         cout<<"( "<<arr[5-a]<<" , "<<arr[5-a]<<" ) ";
       }
     
 }
    return 0;



    int arr[10], arr1[10], a, b, ch = 0, arr2[10];

   cout << "enter the elements of first array" << endl;
   for (a = 0; a < 5; a++)
   {
      cin >> arr[a];
   }

   cout << "enter the elements of second array" << endl;
   for (a = 5; a < 10; a++)
   {
      cin >> arr1[a];
   }
   cout << "all lements of array " << endl;
   for (a = 0; a < 10; a++)
   {
      if (a < 5)
      {
         arr2[a] = arr[a];
      }
      else
         arr2[a] = arr1[a];
   }

   for (a = 0; a < 10; a++)
   {
      cout << " " << arr2[a];
   }
   cout << endl;
   for (a = 0; a < 10; a++)
   {
      for (b = 0; b < 10; a++)
      {
         if (arr2[a] == arr2[b] && ch != arr2[b])
         {
            cout << " " << arr2[a];
            ch = arr2[a];
         }
      }
   }
   return 0;
}