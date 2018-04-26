#include <iostream>

using namespace std;

// ����(Exception) : ��� ���� ������ ������ �ƴ϶� ���� �ǵ���, ������ ���α׷��� ���� ���� �ʴ� ��Ȳ
// �̷��� ���� ��Ȳ���� Ư�� ó���� �ϴ� ���� ���� ó��(Exception Handing)

int main()
{
    // ���ǹ�(if)�� ���� ����ó���� ����ó������ ���ڵ����� �����ϱ� ����
    // try : try ���ο� ���ܰ� �ִ��� Ž��
    // throw : ���ܸ� Ž�� �� throw ���ڷ� �� ������ catch�� ������.
    // catch : throw���� ���� ������ ���ڷ� �޾Ƽ� catch ���ο� ���α׷��Ӱ� ������ ����ó�� �ǽ�
    // ���δ� { } �߰�ȣ ��
    // ���ܰ� �߻��� throw�� ���� ���ڷ� ������, catch �κ��� ����ǰ�
    // try ���ο��� throw ���� �κ��� skip

    int a, b;
    try 
    {
        cin >> a;
        cin >> b;

        if (b <= 0) // ���� �߻���
        {
            throw b; // throw�� ���� ���� b�� catch �Ķ���ͷ� ������.
        }

        cout << "[Work]" << endl;
        cout << "a : " << a << " , b : " << b << endl;
        cout << "a / b : " << a / b << endl;

    }catch(int expn) { // throw���� ���� b�� ���� expn���� �޴´�.
        cout << "[Error]" << endl;
        cout << "can't use this : " << expn << endl;
    }

    cout << "Program End" << endl;
    return 0;
}