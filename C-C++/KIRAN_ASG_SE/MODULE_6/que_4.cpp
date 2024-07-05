#include <iostream>
using namespace std;

inline int multiply(int a, int b) 
{
    return a * b;
}

inline int cube(int num) {
    return num * num * num;
}

int main() 
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    int multiplicationResult = multiply(num1, num2);
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiplicationResult <<endl;

    int cubicResult = cube(num1);
    cout << "Cubic value of " << num1 << " is: " << cubicResult << endl;
}
