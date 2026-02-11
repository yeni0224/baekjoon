#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N, X;
	std::cin >> N;
	std::cin >> X;
	vector<int> A(N);

	for (int i = 0; i < N; i++)
	{
		std::cin >> A[i];
		if (A[i] < X)
		{
			std::cout << A[i] << " ";
		}
	}

	return 0;
}