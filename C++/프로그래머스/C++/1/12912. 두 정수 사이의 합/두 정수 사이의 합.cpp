#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(abs(b - a) == 0) answer = a;
    else{
        for(int i = 0; i < abs(b - a) + 1; i++){
            if (a > b){
                answer += (b + i);
             } 
             else{
                 answer += (a + i);
             }
        }
    }
    return answer;
}