#include "Set.h"
#include <bitset>

void Set :: add(const Set & object){
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 8; j++)
            if (object.byte[i][j] == 1)
                byte[i][j] = 1;
}

void Set :: show(){
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 8; j++){
            if (byte[i][j] == 1)
                cout << i * 8 + j << " ";
        }
    cout << endl;
}

Set Set :: intersection(const Set & object){
    Set answer;
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 8; j++)
        {
            if (byte[i][j] == object.byte[i][j])
                answer.byte[i][j] = byte[i][j];
        }
    return answer;
}

bool Set :: check (const Set & object){
    for (int i = 0; i < 32; i++)
        for (int j = 0; j < 8; j++)
            if (object.byte[i][j] == 1 && byte[i][j] != 1)
                return false;
        return true;
}

void Set :: erase(const Set & object){
        for (int i = 0; i < 32; i++)
        for (int j = 0; j < 8; j++)
            if (object.byte[i][j] == 1)
                byte[i][j] = 0;
} 

Set :: Set(int * arr, int n){
    for (int i = 0; i < n; i++)
        byte[*(arr + i) / 8][*(arr + i) % 8] = 1;
}

Set :: Set(){
    for (int i = 0; i < 32; i++)
        byte[i].reset();
};