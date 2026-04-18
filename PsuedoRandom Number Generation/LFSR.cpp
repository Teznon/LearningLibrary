#include <iostream>
#include <vector>
#include <bitset>


using namespace std;

int main(){

    cout << "Enter a seed value: " << endl;
    int seed;
    cin >> seed;

    cout << "How many taps? : " << endl;
    int taps; 
    cin >> taps;

    cout << "Enter the tap positions: " << endl;
    vector<int> tapPositions(taps);
        for(int i = 0; i < taps; i++){
            cin >> tapPositions[i];
        }

    cout << "How many bits to generate? : " << endl;
    int bitsToGenerate;
    cin >> bitsToGenerate;

   bitset<8> bitstring(seed);

   for(int i = 0; i < bitsToGenerate; i++){  
        int newBit = 0;
        for(int j = 0; j < taps; j++){
            newBit ^= bitstring[tapPositions[j]];
        }
        bitstring <<= 1;
        bitstring[0] = newBit;

        cout << i << " Bitstring: " << bitstring << endl;
    }


    
    
}