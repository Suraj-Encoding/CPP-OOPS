// # Class Templates with Default Parameters
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Suraj
{
public:
    T1 a;
    T2 b;
    T3 c;
    Suraj(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
        cout << "Value of c is: " << c << endl;
    }
};

int main()
{   
    // Default Parameters
    Suraj<> s(1, 1.2, 'S');
    s.display();

    cout << endl;
    
    // Passed Parameters
    Suraj<float, char, int> c(1.8, 'c', 1);
    c.display();

    return 0;
}