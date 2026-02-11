#include <iostream>

constexpr int NUM_COUNT = 20;
constexpr int NUM_INPUT = 10;

void Swap(int& start, int& end)
{
    int temp = start;
    start = end;
    end = temp;
}

int main()
{
    int arr[NUM_COUNT] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

    // 구조체 활용
    struct Pair
    {
        int start;
        int end;
    }ranges[NUM_INPUT];

    for (int i = 0; i < NUM_INPUT; ++i)
    {
        std::cin >> ranges[i].start >> ranges[i].end;
        
        int start = ranges[i].start - 1;
        int end = ranges[i].end - 1;
        while (start < end)
        {
            Swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    for (int i = 0; i < NUM_COUNT; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

