#include <iostream>
#include <bitset>
#include "Set.h"
#include <fstream>

const int NINE = 9, FOUR = 4;

using namespace std;

int main(){
    int arr1[9], arr2[4];
    ifstream infile("input.txt");
    for (int i = 0; i < NINE; i++){
        infile >> arr1[i];
    }
    for (int i = 0; i < FOUR; i++){
        infile >> arr2[i];
    }
    infile.close();
    
    Set obj1(arr1, NINE), obj2(arr2, FOUR);
    ofstream outfile("output.txt");
    if (obj1.check(obj2))
        outfile << "Множество 2 включено во множество 1" << endl;
    else
        outfile << "Множество 2 не включено во множество 1" << endl;
    outfile.close();
    
    obj1.show();
    obj2.show();
    obj1.add(obj2);
    obj1.show();
    obj1.erase(obj2);
    obj1.show();
}