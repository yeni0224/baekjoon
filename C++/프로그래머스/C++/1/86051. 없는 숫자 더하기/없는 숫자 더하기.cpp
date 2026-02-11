#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> numbs = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i < numbs.size(); i++){
        for(int j = 0; j < numbers.size(); j++){
            if (numbs[i] == numbers[j]){
                numbs[i] = 0;
            }
        }
        answer += numbs[i];
    }
    return answer;
}