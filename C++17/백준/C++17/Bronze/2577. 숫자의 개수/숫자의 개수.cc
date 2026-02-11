#include <iostream>

const int MAX = 999 * 999 * 999;
const int MIN = 100 * 100 * 100;

int main()
{
    int num1, num2, num3 = 0;

    std::cin >> num1 >> num2 >> num3;

    int multiple = num1 * num2 * num3;
    int count[10] = { 0, };

    while (multiple / 10 > 0)
    {
        count[multiple % 10]++;
        multiple /= 10;
        if (multiple > 9 && multiple < 100) {
            count[multiple/10]++;
        }
        //std::cout << multiple<<std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << count[i] << std::endl;
    }

    return 0;
}