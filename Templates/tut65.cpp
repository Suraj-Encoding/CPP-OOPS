// # Class Templates with Multiple Parameters
#include <iostream>
using namespace std;

/*

# CLASS TEMPLATES WITH MULTIPLE (COMMA SEPERATED) PARAMETERS...(ONE, TWO OR MORE THAN TWO)
# Syntax:
  template<class T1, class T2>
  class NameOfClass
  {
    // class body
  };

*/

template <class T1, class T2>
class myClass
{
public:
    // int data1;
    // char data2;
    // OR
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2 << endl;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
    return 0;
}