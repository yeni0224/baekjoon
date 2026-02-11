#include <iostream>
using namespace std;

int Sub(int a, int b)
{
    return a - b;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << Sub(a, b);
    return 0;
}
