#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout.precision(9);
    cout << fixed;
    cin >> a;
    cin >> b;
    cout << a / b;
    cout.unsetf(ios::fixed);
    return 0;
}