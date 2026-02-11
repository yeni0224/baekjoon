#include <iostream>
using namespace std;

int FirstCase(int a, int b, int c)
{
	int val = (a + b) % c;
	return val;
}

int SecCase(int a, int b, int c)
{
	int val = ((a % c) + (b + c)) % c;
	return val;
}

int ThirdCase(int a, int b, int c)
{
	int val = (a * b) % c;
	return val;
}

int FourthCase(int a, int b, int c)
{
	int val = ((a % c) * (b + c)) % c;
	return val;
}

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	std::cout << FirstCase(a, b, c) << std::endl;
	std::cout << SecCase(a, b, c) << std::endl;
	std::cout << ThirdCase(a, b, c) << std::endl;
	std::cout << FourthCase(a, b, c) << std::endl;

	return 0;
}