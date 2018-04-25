#include <iostream>
#include <ctime>
using namespace std;

// Clock ���� DFS ��� ����
// N-Queen ����

int n;
bool *arr; // ���� ���� (���� ����)
bool *d1; // ������ ���� ���ϴ� �밢(�� �ڸ� ��) = (2n -1)��
bool *d2; // ������ �Ʒ��� ���ϴ� �밢{(n-1) + (��-��) �� ����}
int result;

void Solution(int y)
{
    if (y >= n)
        result++;
    for (int i = 0; i < n; ++i)
    {
        // arr[i] �� �����ϸ� continue;
        if (arr[i])
            continue;
        // �밢���� �����ϸ� continue;
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