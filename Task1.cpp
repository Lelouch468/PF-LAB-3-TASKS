#include <iostream>
using namespace std;

int main() {
    // Part 1: Printing the pattern
    cout << "* *" << endl;
    cout << "** **" << endl;
    cout << "*** ***" << endl;
    cout << "**** ****" << endl;
    cout << "**********" << endl;

    cout << endl; // adds a blank line between pattern and personal info

    // Part 2: Printing your name, age, and city using variables
    string name = "Jibreel Ahmed";
    int age = 20;
    string city = "Lahore/Pakistan";

    cout << "My name is " << name << ", and I am " << age << " years old." << endl;
    cout << "I am from " << city << "." << endl;

    return 0;
}

