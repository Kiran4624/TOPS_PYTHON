//Define a class to represent lecture details. Include the following members and the program should
//handle at least details of 5 lecturer.
//Data members : Name of the lecturer Name of the subject Name of course Number of lecturers
//Data functions: To assign initial values To add a lecture details To display name and lecture
//details.
#include<iostream>
#include<string>
using namespace std;

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLecturers;

public:
    // Function to assign initial values
    void assignInitialValues() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numLecturers = 0;
    }

    void addLectureDetails() {
        cout << "Enter the name of the lecturer: ";
        cin.ignore(); 
        getline(cin, lecturerName);

        cout << "Enter the name of the subject: ";
        getline(cin, subjectName);

        cout << "Enter the name of the course: ";
        getline(cin, courseName);

        cout << "Enter the number of lecturers: ";
        cin >> numLecturers;
    }

    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lecturers: " << numLecturers << endl;
        
    }
};

int main() {
    const int numLecturers = 5;
    LectureDetails lecturers[numLecturers];

    for (int i = 0; i < numLecturers; ++i) {
        lecturers[i].assignInitialValues();
    }

    for (int i = 0; i < numLecturers; ++i) {
        cout << "Enter details for lecturer " << i + 1 << ":" << endl;
        lecturers[i].addLectureDetails();
    }
    for (int i = 0; i < numLecturers; ++i) {
        cout << "Details for lecturer " << i + 1 << ":" << endl;
        lecturers[i].displayLectureDetails();
    }

    
}
