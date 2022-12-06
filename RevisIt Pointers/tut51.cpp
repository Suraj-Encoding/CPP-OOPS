// # Pointers to Objects (*ptr) &
// # Arrow Operator (->)
#include <iostream>
using namespace std;

class complex
{
private:
    int real, img;

public:
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
    void getdata()
    {
        cout << "real = " << real << endl;
        cout << "Img = " << img << endl;
    }
};

int main()
{

    // 'ptr' is a pointer to object 'c1'
    complex c1;
    complex *ptr = &c1;
    c1.setdata(1, 54);
    c1.getdata();

    // *ptr = c1 -> object
    (*ptr).setdata(1, 54);  
    (*ptr).getdata();
    // # precedence :  () > . > *

    // # Dynamic object
    complex *p = new complex;
    (*p).setdata(2, 5);
    (*p).getdata();

    // # Arrow operator
    // arrow operator is used to dereference pointer
    // That is  ptr->  means  (*ptr).
    p->setdata(2, 5);
    p->getdata();

    // # Dynamic Array of objects
    complex *pt = new complex[3];
    cout << "\n# Array of objects: " << endl;
    pt->setdata(7, 10);
    pt->getdata();
    (pt + 0)->setdata(7, 10);
    (pt + 0)->getdata();
    (pt + 1)->setdata(7, 10);
    (pt + 1)->getdata();
    (pt + 2)->setdata(7, 10);
    (pt + 2)->getdata();
    // OR
    pt[1].setdata(7, 10);
    pt[1].getdata();

    // # Note: 
    // pt = (pt+0) as index starts from 0
    // (pt+1)->  =  pt[1].
    // *(pt+1). is Invalid

    return 0;
}