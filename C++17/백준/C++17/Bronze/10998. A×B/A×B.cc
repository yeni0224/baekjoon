#include <iostream>
using namespace std;

int Multiple(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << Multiple(a, b);
    return 0;
}
