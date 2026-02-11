#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    
    int rest = n / 10;
    int answer = n * 12000 + k * 2000 - rest * 2000; 
        
    return answer;
}