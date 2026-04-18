#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <random>
#include <cctype>

using namespace std;

struct Edge{
    int src, dest;
};

struct Graph {
    int V, E;
    vector<Edge> edges;
};



int inputValidation(string input){

    size_t pos;
    int inputVal;

    stoi(input, &pos);                                                          //stores the number of characters processed in pos
    if(pos == input.length()){                                                  //checked char == input length :: no invalid characters
        cout << inputVal << " is an integer.\n"; 
        if(inputVal > 2){                                                       //checks to see if input value is greater than 2
            cout << "Input is greater than 2.\n";
            cout << "Input is valid.\n";
            cout << "\n" << "\n" << "\n";
            return inputVal;
        } else {
            cout << inputVal << " is not greater than 2.\n" << endl;
            return -1;
        }
    } else {
        cout << input <<  " is not an integer.\n" << endl;
       return -1;
    }
    
}


int main(){

    Graph graph;

    string V;

    while(true){
        cout << "Enter a number of verticies: \n" << endl;
            getline(cin, V);

            if(inputValidation(V) == -1){
                continue;
            } else {
                graph.V = stoi(V);      //using stoi is probably more efficient than calling inputValidation again
                break;
            }
    }

    
    

    
    return 0;
}

#pragma region Unused Code
/*
--------------------------------------------------------------------------------------------------------------
void inputClear(string input){
    cin.clear();                                                                //clears the error flag on cin so that future I/O operations will work correctly
    cin.ignore(numeric_limits<streamsize>::max(), '\n');                        //clears the input buffer of any remaining characters up to the newline character
}

Because getline() clears the buffer after reading input, there is no need to manually clear the input buffer. 
Therefore, function inputClear() is not necessary in this context. 
If you were using cin >> to read input, then you would need to use cin.clear() and cin.ignore() to handle invalid input and clear the buffer, but with getline(), 
    this is not required.

--------------------------------------------------------------------------------------------------------------

*/
#pragma endregion