#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void fillAdjMatrix(vector<vector<int>>& adjMatrix, int V){
    
    mt19937 mt(time(nullptr));
    
    for(int i = 0; i < V; i++){                     //colums
        for(int j = i + 1; j < V; j++){             //rows

            int value = mt() % 2;

            adjMatrix[i][j] = value;                //insert random 1 or 0 at location
            adjMatrix[j][i] = adjMatrix[i][j];      //copy the inverse 
        }
    }
}

void printAdjMatrix(const vector<vector<int>>& adjMatrix, int V){
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            cout << adjMatrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

void KragerAlgorithm(vector<vector<int>>& adjMatrix, int V){

    //while there are more than 2 verticies
    while()
        //randomly select an edge 
        //contract the edge
        //restructure matrix

}

int main(){

    mt19937 mt(time(nullptr));          //more "random" generation than srand() or rand()
    int V = mt() % 5 + 2;  


    vector<vector<int>> adjMatrix(V, vector<int>(V,0));

                   
    fillAdjMatrix(adjMatrix, V);        //initialize a Adjacency Matrix with V verticies

    printAdjMatrix(adjMatrix, V);
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
