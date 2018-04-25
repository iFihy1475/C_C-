#include <iostream>
#include <ctime>
using namespace std;

// Clock 예시 DFS 기반 문제
// N-Queen 문제

int n;
bool *arr; // 열의 개수 (세로 개구)
bool *d1; // 오른쪽 위를 향하는 대각(각 자리 합) = (2n -1)개
bool *d2; // 오른쪽 아래를 향하는 대각{(n-1) + (행-열) 로 구분}
int result;

void Solution(int y)
{
    if (y >= n)
        result++;
    for (int i = 0; i < n; ++i)
    {
        // arr[i] 가 존재하면 continue;
        if (arr[i])
            continue;
        // 대각선상에 존재하면 continue;
        if (d1[y + i] || d2[n - 1 + (y - i)])
            continue;
        arr[i] = d1[y + i] = d2[n - 1 + (y - i)] = true;
        Solution(y + 1);
        arr[i] = d1[y + i] = d2[n - 1 + (y - i)] = false;
    }
}

int main()
{
    cin >> n;
    
    arr = new bool[n];
    d1 = new bool[2 * n - 1];
    d2 = new bool[2 * n - 1];

    clock_t s = (int)clock();
    Solution(0);
    printf("%0.4fs\n", (float)(clock() - s) / CLOCKS_PER_SEC);

    cout << result << endl;

    delete[] arr;
    delete[] d1;
    delete[] d2;
    return 0;   
}