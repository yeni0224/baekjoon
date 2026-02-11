#include <iostream>

int main()
{
    //입력할 수
    int N;
    std::cin >> N;
    //0~9 까지의 배열
    int arrNum[10] = { 0, };
    //최대 갯수
    int maxCount = 0;
    //6과 9에 해당하는 인덱스의 값 저장
    int six = 0;
    int nine = 0;
    
    //각 자릿수 구하기
    while (N > 0)
    {
        arrNum[N % 10]++;
        N /= 10;
    }
    
    six = arrNum[6];
    nine = arrNum[9];
    int n69 = 0;
    //6과 9의 수가 홀수 일 때 필요 세트 수가 1 증가
    arrNum[6] = 0;
    arrNum[9] = 0;
    if ((six + nine) % 2 == 1)
        n69 = (six + nine)/2 +1;
    else 
        n69 = (six + nine) / 2 ;
    //std::cout << n69 << std::endl;


    //최대 값을 구한다.
    for (int i = 0; i < sizeof(arrNum)/4; i++)
    {
        if (maxCount < arrNum[i])
        {
            maxCount = arrNum[i];
        }
    }


    if(n69 < maxCount) std::cout << maxCount << std::endl;
    else std::cout << n69 << std::endl;

    return 0;
}