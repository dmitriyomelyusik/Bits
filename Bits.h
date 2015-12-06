#include <iostream>
#include <bitset>

using namespace std;

class Bits{
protected:
    bitset<8> byte[32];
public:
    Bits();
    virtual void add (int number);
    virtual void erase (int number);
    bool search (int number);
    virtual void show();
};