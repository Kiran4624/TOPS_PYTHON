// Write a program of to swap the two values using templates
#include <iostream>
using namespace std;
template <typename T>
void swapVal(T &a, T &b)
 {
    T temp = a;
    a = b;
    b = temp;
}

int main()
 {
    int x = 46, y = 28;
    cout << "Before swapping - x: " << x << ", y: " << y << endl;
    swapVal(x, y);
    cout << "After swapping - x: " << x << ", y: " << y << endl;

    double a = 6.009, b = 8.018;
    cout << "\nBefore swapping - a: " << a << ", b: " << b << endl;
    swapVal(a, b);
    cout << "After swapping - a: " << a << ", b: " << b << endl;

    char a1 = 'A', a2 = 'B';
    cout << "\nBefore swapping - a1: " << a1 << ", a2: " << a2 << endl;
    swapVal(a1, a2);
    cout << "After swapping - a1: " << a1 << ", a2: " << a2 << endl;

}
