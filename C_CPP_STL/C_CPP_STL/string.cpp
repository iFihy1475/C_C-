#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ���� �Լ� �� �ʱ�ȭ ���

    // ����
    string str1("�۳���");
    string str2;
    str2 = "�۳���";
    string str3(str1);

    // ����
    str1.length();
    str1.size();

    // �� ���� ��ȯ �ޱ�
    // n ��° �ִ� ���� ��ȯ, 0���� ����
    str1.at(n);

    // ���ڿ� ã��
    // ã�� ���ڿ��� ù ��° ���� ��ȯ
    // �� ã���� string :: npos ��ȯ
    str1.find("���ڿ�");

    // ��

    // ���� �� ������ ������
    str1 < str2;
    str1 > str2;

    // ������ true
    str1 == str2;

    // return ���� 0 true
    // return ���� ������ str1 < str2
    // return ���� ����� str1 > str2
    str1.compare(str2);

    // ����
    // (+)
    str1 + str2;
    // (+=)
    str1 += str2;
    
    // ����
    str1 = str2;
   
    return 0;
}