#include <iostream>
#include <algorithm>
using namespace std;


// Sort Algorithm
// algorithm Header File
// sort(start, end) : [start, end) ���� ����(Element)�� ��������(Default)�� ����
// start�� �����ϰ� end�� �������� �ʴ´�
// Quick Sort(�� ����) ��� �Լ� ����, ��� �ð� ���⵵ NlogN
int main()
{
    // ����
    template <typename T>
    void sort(T start, T end);

    template <typename T>
    // comp : Defalut ��������
    void sort(T start, T end Compare comp);
    
    sort1(arr, arr + n);
    sort2(v.begin(), v.end());
    sort3(v.begin(), v.end(), compare); // ����� ���� �Լ�
    sort4(v.begin(), v.end(), greater<�ڷ���>()); // ��������
    sort5(v.begin(), v.end(), less<�ڷ���>()); // ��������
}