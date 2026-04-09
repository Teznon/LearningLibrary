/*################## SUMMARY ##################
# Logical Operators: AND (&&)

    Truth Table for AND:

    X | Y | OUTPUT
    ----------------
    0 | 0 | 0
    0 | 1 | 0
    1 | 0 | 0
    1 | 1 | 1

The purpose of this short progam is to demonstrate the logical AND operator in a real world situation. 

The program will ask the user for their username and password. If the username and password are correct, the user will be granted access.
If either the username or password is incorrect, the user will be denied access.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string cUsername = "Username"; 
    string cPassword = "Password";

    string username, password;

    cout << "Correct Username: " << cUsername << endl;
    cout << "Corect Password: " << cPassword << endl; 

    cout << "Enter Username: ";
        cin >> username;

    cout << "Enter Password: ";
        cin >> password;


    //AND requires both in puts to be correct. 
    if(username == cUsername && password == cPassword){
        cout << "Access Granted" << endl;
    } else if(username != cUsername){
        cout << "Incorrect username. Logical AND requires both inputs to be correct." << endl;
        if(password != cPassword){
            cout << "Incorrect password. Logical AND requires both inputs to be correct." << endl;
        }
    } else {
        cout << "Incorrect password. Logical AND requires both inputs to be correct." << endl;
    }




}