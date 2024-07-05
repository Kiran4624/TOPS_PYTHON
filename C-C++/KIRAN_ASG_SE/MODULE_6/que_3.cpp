#include <iostream>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    
    Interest(int p, int y, int r) : principal(p), year(y), rate(static_cast<float>(r)) {}

    Interest(int p, int y, float r = 2.5) : principal(p), year(y), rate(r) {}

    float calculateSimpleInterest() 
    const 
    {
        return (principal * year * rate) / 100.0;
    }
    void display
    () 
    const
     {
        cout << "Principal: " << principal << endl;
        cout << "Number of years: " << year << endl;
        cout << "Rate of interest: " << rate << "%" << endl;
        cout << "Simple Interest: " << calculateSimpleInterest() << endl;
    }
};

int main() {
    
    Interest interest1(1000, 2, 5);
    cout << "Details for Interest 1:\n";
    interest1.display();
    cout << "........................................\n";

    Interest interest2(1500, 3);
    cout << "Details for Interest 2:\n";
    interest2.display();
    cout << "........................................\n";
}
