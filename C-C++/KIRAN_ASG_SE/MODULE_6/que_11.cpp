// Write a program to read and write data in to file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
 {
    ofstream outFile("kiran.txt"); 

    if (!outFile) 
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter data to write to the file (Enter 'exit' to stop):" << endl;

    string input;
    while (true) 
    {
        getline(cin, input);

        if (input == "exit") {
            break;
        }

        outFile << input << endl;
    }

    outFile.close(); 

    ifstream inFile("kiran.txt"); 

    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading data from the file:" << endl;

    string line;
    while (getline(inFile, line)) 
    {
        cout << line << endl; 
    }

    inFile.close(); 

}
