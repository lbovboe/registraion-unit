#include <iostream>
#include <fstream>
#include "Unit.h"
#include "Registration.h"
#include "operatorOverload.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Unit u;
    Registration r;
    //cout << r;
    //cout << u;

    string fileName = "rinput.txt";
    ifstream infile(fileName.c_str());
    if (infile.is_open()) { // If the can be opened
        while (infile.peek() != EOF) { // While the next character is not en of the file
            infile>>r;
            cout << r;
            // int count =0;
            // count ++;
            cout << r.getUnit(0);
        }
        infile.close(); // Close the file
    } else {
        cout << "Error reading from file" << endl; // File not found
    }

    // g++ -o mainprog *.cpp -std=c++11
    return 0;
}
