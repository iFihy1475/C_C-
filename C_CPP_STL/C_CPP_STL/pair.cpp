#include <iostream>
#include <utility>
#include <string>
using namespace std;

// Pair Class
// �� ��ü�� �ϳ��� ��ü�� ��� �� �� �ְ� �����ִ� �Ѥ�������
// STL���� ������ "��"�� ǥ���� �� ���
// utility Header File
int main()
{
    // Pair Ŭ���� �����
    template <class T1, class T2>
    struct pair;

    template <typename T1, typename T2>
    struct pair;
    
    // T1 : First, T2 : Second

    // ��� �Լ� �� ���� ����
    // ����� ������ Ÿ�� 1, 2�� �ְ� �� Ÿ���� Pair Ŭ������ p�� �����.
    pair<int, double> p;
    

    // p�� ù��° ���� ��ȯ
    p.first;

    // p�� �ι�° ���� ��ȯ
    p.second;
    
    int iNum1 = 10;
    string sName = "�۳���";
    make_pair(iNum1, sName);

    // Sort �˰��� ���� ���İ���
    // ù ��° ���� ����, ù ��° ���ڰ� ������ �� ��° ���ڷ� �Ǵ�
}