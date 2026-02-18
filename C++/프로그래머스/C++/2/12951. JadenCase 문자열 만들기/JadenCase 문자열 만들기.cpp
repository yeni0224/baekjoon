#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    //index ==0이 소문자면 대문자로
    if (s[0] >= 97 && s[0] <= 122){
            s[0] -= 32;
        }
    answer.push_back(s[0]);
    //반복문을 돌며 대소문자인지 아스키 코드로 크기비교
    for (int i = 1; i < s.length(); i++){     
        //3. 공백문자 다음 글자인가:앞이 공백문자면, 그 다음은 대문자
        if (s[i-1] == ' '){
            if (s[i] >= 97 && s[i] <= 122){ // 소문자면 대문자로
                s[i] -= 32;
            }
        }
        else { //2.중간의 아스키 코드가 소문자 범위를 넘어가면 해당 아스키코드+32
             if (s[i] >= 65 && s[i] <= 90){
                 s[i] += 32;
             }  
        }
        answer.push_back(s[i]);
    } 
    return answer;
}