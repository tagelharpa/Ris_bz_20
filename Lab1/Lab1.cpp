#include <iostream>
#include "Fraction.h"

using namespace std;


int main()
{
    double a;
    int b;

    cin >> a >> b;

    Fraction p;
    p.Init(a, b);

    cout << p.Ipart();
}
