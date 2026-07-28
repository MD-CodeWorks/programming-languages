// g++ A.cpp -o A && ./A

#include<iostream>

using namespace std;

int main(){
    string actualUserName = "admin", UserName;
    int actualPassword = 1234, Password;
    cout << "Enter the Username: ";
    cin >> UserName;

    cout << "Enter the Password: ";
    cin >> Password;

    if ( UserName == actualUserName && Password == actualPassword ){
        cout << "Login Successful.";
    }
    else {
        cout << "Invalid username or Password.";
    }

    return 0;
}
