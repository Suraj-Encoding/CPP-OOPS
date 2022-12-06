// # Dynamic memory allocation
#include <iostream>
using namespace std;
int main()
{
    // ** Basic Example **

    cout << "\n# Basic: " << endl;
    int a = 4;
    int *ptr = &a;   // ptr = &a = 100 and *ptr = a = 4
    // *ptr = 5;     // alternative
    cout << "Value of a is: " << (a) << endl;
    cout << "Value of a is: " << *(ptr) << endl;
    cout << "Address of a is: " << (&a) << endl;
    cout << "Address of a is: " << (ptr) << endl;

    // ** new operator **  -> [ To allocate the memory ]

    // Single memory -> Using variables
    cout << "\n# new operator: " << endl;
    int *p = new int(40); // [ declared + Initialised ]
    float *q = new float(15.12);
    cout << "Value at address p is: " << *(p) << endl; 
    cout << "Value at address q is: " << *(q) << endl;
    // *(p) OR  *p 

    // Block of memory -> Using array
    int *arr = new int[4];
    arr[0] = 10;
    *(arr + 1) = 12;  // OR arr[1] = 12;
    arr[2] = 20;
    arr[3] = 30;
    // delete[] arr;  // free the memory
    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr[2] = " << arr[2] << endl;
    cout << "arr[3] = " << arr[3] << endl;

    // ** delete operator **  -> [ To free the memory ]
    cout << "\n# delete operator:\n"
         << endl;
    // delete contigous block of memory -> [] is used
    delete [] arr;

    return 0;
}