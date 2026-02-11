#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    //배열의 갯수를 센다
    for(int i = 0; i < array.size(); i++){
        //배열안에 n과 일치하는 수를 찾는다
        
        //n과 일치하는가
        if(n == array[i]){
            answer++;
        }
        
    }
    return answer;
}