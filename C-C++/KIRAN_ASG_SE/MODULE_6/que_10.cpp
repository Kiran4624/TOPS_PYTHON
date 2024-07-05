
//Write a program to swap the two numbers using friend function

#include<iostream>
using namespace std;

class Study
 {
  private:
    int a, b;
  public:
    void getData() 
    {
      cout << "Enter Two Numbers: ";
      cin >> a >> b;
    }

  void display() 
  {
    cout << "a = " << a << " b = " << b << endl;
  }
  friend void swap_number(Study & s);
  };

void swap_number(Study & s) {
  int temp;
  temp = s.a;
  s.a = s.b;
  s.b = temp;
}

int main()
 {
  Study s;

  s.getData();
  cout << "Before swapping" << endl;
  s.display();

  swap_number(s);
  cout << "After swapping" << endl;
  s.display();
}