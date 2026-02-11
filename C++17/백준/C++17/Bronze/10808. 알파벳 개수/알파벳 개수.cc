#include <iostream>


const int MAX_STR_LEN = 100;
const int ALPHABET_NUM = 26;

int main()
{
    char str[MAX_STR_LEN + 1] = {};
    int countTable[ALPHABET_NUM] = { 0, };

    std::cin.getline(str, MAX_STR_LEN + 1);
    
    for (int i = 0; i < MAX_STR_LEN; i++)
    {
        countTable[str[i] - 97]++;
    }
   
    for (int i = 0; i < 26; i++)
    {
        std::cout << countTable[i] << " ";
    }

    return 0;
}