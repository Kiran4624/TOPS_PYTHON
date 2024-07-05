#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initializePerson(const string & n, int a) {
        name = n;
        age = a;
    }

    void readPD()
     {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void writePD() 
    const
     {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
private:
    float percentage;

public:
    void initializeStudent(const string & n, int a, float p) 
    {
        initializePerson(n, a);
        percentage = p;
    }

    void readSD()
     {
        readPD();
        
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void writeSD() 
    const
     {
        writePD();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void initializeTeacher(const string& n, int a, float s) 
    {
        initializePerson(n, a);
        salary = s;
    }

    void readTD() {
        readPD();

        cout << "Enter salary: ";
        cin >> salary;
    }

    void writeTD() 
    const 
    {
        writePD();
        cout << "Salary: $" << salary << endl;
    }
};

int main()
 {
    
    Student student;
    student.readSD();

    Teacher teacher;
    teacher.readTD();

    cout << "\nStudent Details:\n";
    student.writeSD();

    cout << "\nTeacher Details:\n";
    teacher.writeTD();
}
