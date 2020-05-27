#include <iostream>
#include "ZFraction.h"
#include <iostream>

using namespace std;
// ---- Main function ------
int main()
{
    ZFraction f(3,25);
    ZFraction t(6,50);
    ZFraction p(11);
    cout << f << " It is a fraction"<< endl;
    ZFraction a1;
    a1 = f * t;
    cout << a1 << endl;
    ZFraction a2 = f + p;
    a1.show();
    a2.show();

    if(f < t)
        cout << "f is lower than" << endl;
    else if (f == t)
        cout << "f is equal to t" << endl;
    else
        cout << "f is bigger than t" << endl;
    return 0;
}
