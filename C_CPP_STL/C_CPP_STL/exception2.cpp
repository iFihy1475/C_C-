#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int tmp;
    // 호출된 함수 내부에서 예외 처리하여 throw를 통해 catch에 보냄

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

        cout << "\n[swap 완료]" << endl;
        cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
    }
    catch(int expn)
    {
        cout << "\n[swap 실패]" << endl;
        cout << "num1, num2 : " << expn << " 으로 동일합니다." << endl;
    }

    cout << "==== Program End ====" << endl;
    return 0;
}