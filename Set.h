#include "Bits.h"

class Set : public Bits{
public:
    Set ();
    Set (int * arr, int n);
    void add (const Set & object);
    void show();
    Set intersection (const Set & object);
    bool check(const Set & object);
    void erase (const Set & object);
};