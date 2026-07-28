/* 
    Date: 2026-07-20 | Time: 08:01
    Author: Muhammad Dilawar

    File: Exercise 30 Password Attempt Simulation.cpp
    Description: Exercise 30: Password Attempt Simulation
    Practice Problem: Develop a C++ program that simulates a password prompt using a do-while loop. The program must allow the user exactly three attempts to enter a specific hardcoded password (e.g., “secret”). The loop should terminate if the password is correct or if all three attempts are exhausted.

    Given:
    const std::string CORRECT_PASSWORD = "Pass1212";

    Expected Output:
    --- Password Lock Simulation ---
    Attempt 1/3. Enter password: pass1234
    Wrong Password. Access denied. Try again.
    Attempt 2/3. Enter password: pass1225
    Wrong Password. Access denied. Try again.
    Attempt 3/3. Enter password: Pass1212        

    Access GRANTED. Welcome!
*/

// g++ "Exercise 30 Password Attempt Simulation.cpp" -o "Exercise 30 Password Attempt Simulation" && ./"Exercise 30 Password Attempt Simulation"
#include<iostream>
#include<string>
using namespace std;
int main(){
    string correct_password = "Pass1212", pass = " ";
    int i = 0;
    cout << "--- Password Lock Simulation ---" << endl;
    do{
        cout << "Attempt "<< i+1 << "/3. Enter password: ";
        cin >> pass;
        if(correct_password == pass){
            cout << "\nAccess GRANTED. Welcome!" << endl;
            break;
        }
        if (i < 2) cout << "Wrong Password. Accesss denied. Try again." << endl;
        else cout << "Your account is locked.";
        i++;
    }while(i <= 2);
    cout << endl;
    return 0;
}