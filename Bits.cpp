#include "Bits.h"
#include <bitset>

using namespace std;

Bits :: Bits(){
    for (int i = 0; i < 32; i++)
        byte[i].reset();
}

void Bits :: add(int number){
    byte[number / 8][number % 8] = 1;
} 

bool Bits :: search(int number){
    if (byte[number / 8][number % 8] == 1)
        return true;
    return false;
}

void Bits :: erase(int number){
    byte[number / 8][number % 8] = 0;
}

void Bits :: show(){
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 8; j++){
            if (byte[i][j] == 1)
                cout << i * 8 + j << " ";
        }
    cout << endl;
}