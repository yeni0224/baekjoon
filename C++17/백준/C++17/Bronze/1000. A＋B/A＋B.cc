#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << Add(a, b);
    return 0;
}