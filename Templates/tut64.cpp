// # Writing our First C++ Template in VS Code
#include <iostream>
using namespace std;

// # Template -> My own custom vector
// T is now a variable -> T is data type 
// Instead of T you can use anything
// # Syntax: template <class T>
//   where template -> keyword and T -> variable
template <class T> 
class Vector
{
public:
    T *arr; // !changed
    int size;
    Vector(int m)
    {
        size = m;
        arr = new T[size]; // !changed
    }
    // no need of & also
    T dotProduct(Vector &v) // !changed
    {
        T d = 0; // !changed
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i];
            // arr[i] = this->arr[i] = v1.arr[i]
            // as this pointer points to v1
            // v = v2 -> If v changes v2 also changes
            // as call by reference variables(&v = v2)
        }
        return d;
    }
};

int main()
{
    // # For Integer vector
    // # Normal Life

    // Vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // int a = v1.dotProduct(v2);
    // cout << "# DotProduct: " << a << endl;

    // # For Float vector
    // # Mentos Life -> As we have template

    Vector<float> v1(3); // !changed
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    Vector<float> v2(3); // !changed
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotProduct(v2); // !changed
    cout << "DotProduct = " << a << endl;

    return 0;
}