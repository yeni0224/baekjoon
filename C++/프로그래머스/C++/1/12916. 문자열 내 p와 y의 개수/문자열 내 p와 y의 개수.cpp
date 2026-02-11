#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'p' || s[i] == 'P') pCount++;
        else if(s[i] == 'y'|| s[i] == 'Y') yCount++;
    }
    if(pCount == 0 && yCount == 0) answer = false;
    if(pCount != yCount) answer = false;
    else if(pCount == yCount) answer = true;
    cout << "p = " << pCount;
    cout << "y = " << yCount;

    return answer;
}