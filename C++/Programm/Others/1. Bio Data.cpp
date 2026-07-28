#include <iostream>
using namespace std;

int main(){
    cout << "<------- Bio Data ------->\n";

    char firstLetter;
    cout << "Enter your first letter of your name: ";
    cin >> firstLetter;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    float GPA;
    cout << "Enter your GPA: ";
    cin >> GPA;

    cout << "\n<--- Your Information --->\n";
    cout << "Initial: " << firstLetter << endl;
    cout << "Age: " << age << " years \n";
    cout << "Current GPA: " << GPA << endl;

	return 0;
}








