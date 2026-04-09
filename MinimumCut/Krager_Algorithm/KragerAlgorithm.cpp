#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void printAdjMatrix(int adjMatrix[V][V]){
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            //go through array and print the node and it's neighbors
        }
    }
}

int main(){

    mt19937 mt(time(nullptr));          //more "random" generation than srand() or rand()
    int V = mt() % 20;  

    int adjMatrix[V][V];

    adjMatrix[V][V] = {0};              //initialize to 0

                   
    fillAdjMatrix(V);                   //initialize a Adjacency Matrix with V verticies

}






#pragma region No longer needed
/*
void fillAdjMatrix(int adjMatrix[V][V]){

    mt19937 mt(time(nullptr));

    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            int value = mt() % 1;
            adjMatrix[i][j] = value;
            adjMatrix[j][i] = value;
        }
    }

}
*/
#pragma endregion
