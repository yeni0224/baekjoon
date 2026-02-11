#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
   	for(long long i = 0; i < sqrt(50000000000000); i++){
    	if(pow(i, 2) == n){
        	answer = pow((i + 1), 2);
        }
    }
    return answer;
}