// # Array of Objects Using Pointers
#include <iostream>
using namespace std;

class shop
{
private:
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Id : " << id << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    int size = 3;

    // # Revised
    // int *ptr = &size;
    // {ptr = &size = 100} & {*ptr = size = 2}
    // int *ptr = new int;   // No need to make integer variable
    // int *ptr = new int[32];

    // # Shop Items
    // 1. general store item
    // 2. hardware item
    // 3. software item

    // Block of memory is allocated
    shop *ptr = new shop[size];
    shop *temp = ptr; // extra pointer
    int p, q, i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of Item-" << (i + 1) << " : " << endl;
        cin >> p >> q;
        // (*ptr).setdata(p,q); OR
        ptr->setdata(p, q);
        ptr++;
    }
    // ptr index is 3
    for (i = 0; i < size; i++)
    {
        // ptr--;  // ptr index become 2
        cout << "Item number: " << (i + 1) << endl;
        // ptr->getdata();  // output print in reverse order
        temp->getdata();
        temp++;
    }
    return 0;

    // # Algorithm :
    //   1   2   3    <- Objects
    //   ^       ^
    //   |       |
    //   |       |
    //  temp     ptr  <- Pointers
    // (fixed)  (move)
}