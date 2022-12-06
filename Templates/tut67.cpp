// # Function Templates & Function Templates with Parameters
#include <iostream>
using namespace std;

// # Normal life
// float average(int a, int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float average2(int a, float b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

// # Mentos life

// 1.Average
template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

// 2.Swap
template <class T>
void Swap(T &a, T &b) // call by reference variables
{
    T t;
    t = a;
    a = b;
    b = t;
}

int main()
{
    // # Normal life
    // float a;
    // a = average(5,2);
    // cout<<"Average is = "<<a<<endl;
    // a = average2(5,2.4);
    // cout<<"Average is = "<<a<<endl;

    // # Mentos life

    // 1.Average
    float a;
    a = average(5, 2.4); // OR average<int, double>
    cout << "Average is = " << a << endl;

    // 2.Swap
    int x = 5, y = 7;
    cout << x << " " << y << endl;
    Swap(x, y); // OR Swap<int>
    cout << x << " " << y << endl;

    return 0;
}