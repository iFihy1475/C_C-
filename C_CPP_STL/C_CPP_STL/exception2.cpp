#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int tmp;
    // ȣ��� �Լ� ���ο��� ���� ó���Ͽ� throw�� ���� catch�� ����

    if (a == b)
        throw a;

    tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int num1;
    int num2;

    try 
    {
        cin >> num1;
        cin >> num2;

        swap(num1, num2);

        cout << "\n[swap �Ϸ�]" << endl;
        cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
    }
    catch(int expn)
    {
        cout << "\n[swap ����]" << endl;
        cout << "num1, num2 : " << expn << " ���� �����մϴ�." << endl;
    }

    cout << "==== Program End ====" << endl;
    return 0;
}