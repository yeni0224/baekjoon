#include <iostream>
#include <cstring>
using namespace std;

constexpr int MAX_STR_LEN = 1000;
constexpr int MAX_TESTCASE = 1000;

struct StrTable
{
    char str1[MAX_STR_LEN] = { 0, };
    char str2[MAX_STR_LEN] = { 0, };
};

StrTable strTable[MAX_TESTCASE];

int main()
{
    int count = 0;
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cin >> strTable[i].str1 >> strTable[i].str2;
    }
    
    for (int i = 0; i < count; i++)
    {
        bool bCheck = true;
        int letterCount['z' - 'a'] = {0, };
        for (int j = 0; j < strlen(strTable[i].str1); j++)
        {
            letterCount[strTable[i].str1[j] - 'a']++;
            letterCount[strTable[i].str2[j] - 'a']--;
        }
        for (int k = 0; k < 'z' - 'a'; k++)
        {
            if (letterCount[k] != 0) bCheck = false;
        }
        bCheck == true ? cout << "Possible" << endl : cout << "Impossible" << endl;
    }
    

    return 0;
}