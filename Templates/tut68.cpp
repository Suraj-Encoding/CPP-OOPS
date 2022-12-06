// # Member Function Templates & Overloading Template Functions
#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    // Declaration
    void display();
    // Declaration + Defination
    // void display()
    // {
    //     cout << data << endl;
    // }
};

// 1.Member Function Template
template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

// 2.Overloading Template Functions
void func(int a) // <--- Normal Function
{
    cout << "I am first func() " << a << endl;
}
template <class T>
void func(T a) // <--- template Function
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    Harry<float> h(5.5);
    cout << h.data << endl;
    h.display();

    // Overloading
    func(4); // Exact match take the highest priority
    return 0;
}