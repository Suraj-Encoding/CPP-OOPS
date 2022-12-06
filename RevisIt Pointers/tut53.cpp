// # this pointer
// # this is a keyword which is a pointer which pointes to the object
//   which invokes the member function
#include <iostream>
using namespace std;

class A
{
private:
    int a; // << class variable 'a'

public:
    void setdata(int a) // << local variable 'a' of setdata function
    {
        // In c++ local variable has more priority than other variables
        // a = a;  // << [local a = local a]
        this->a = a;
        // (*this).a = a;   // << alternative way
    }
    // A set(int a)  << Is same as below 
    A & set(int a) 
    {
        this->a = a;
        return *this;
        // this is a pointer to object and *this is a object
    }
    void getdata(void)
    {
        cout << "The value of a is: " << a << endl;
    } 

    // # Implicit this poniter
    void show(int x)
    {
       a = x;   // this->a = x  OR  obj.a = x
    }
};

int main()
{
    A a;
    a.setdata(4);
    a.getdata(); // << 4

    a.set(5);
    a.getdata(); // << 5

    a.set(6).getdata(); // << 6
    return 0;
}