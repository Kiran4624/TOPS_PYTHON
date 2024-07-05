//  Create a example of use delete and new operator
#include <iostream>
using namespace std;
class MyClass 
{
public:
    MyClass()
    {
        cout << "Constructor called!" << endl;
    }

    ~MyClass()
    {
        cout << "Destructor called!" << endl;
    }
};

int main() 
{
   
    int* myint = new int;
    *myint = 52;

    cout << "Value at myint: " << *myint << endl;

    delete myint;

    int* myarray = new int[5];
    for (int i = 0; i < 6; ++i)
     {
        myarray[i] = i * 10;
    }

    cout << "\nValues in myarray= ";
    for (int i = 0; i < 6; ++i) {
        cout << myarray[i] << " ";
    }
    cout << endl;
    delete[] myarray;

    MyClass* myObj = new MyClass;

    delete myObj;
}
