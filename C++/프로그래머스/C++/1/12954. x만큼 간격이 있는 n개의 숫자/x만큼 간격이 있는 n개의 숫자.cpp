#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer; //x부터 x씩증가하는 숫자 n개 목록
    for(int i = 1 ; i <= n; i++){
        answer.push_back(x * i);
    }
    return answer;
}