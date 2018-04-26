#include <iostream>

using namespace std;

// 예외(Exception) : 언어 상의 문법적 오류가 아니라 내가 의도한, 구현한 프로그램의 논리가 맞지 않는 상황
// 이러한 예외 상황에서 특별 처리를 하는 것이 예외 처리(Exception Handing)

int main()
{
    // 조건문(if)을 통한 예외처리는 예외처리인지 논리코드인지 구분하기 힘듬
    // try : try 내부에 예외가 있는지 탐색
    // throw : 예외를 탐색 시 throw 인자로 준 변수를 catch로 던진다.
    // catch : throw에서 던진 변수를 인자로 받아서 catch 내부에 프로그래머가 정의한 예외처리 실시
    // 내부는 { } 중괄호 안
    // 예외가 발생시 throw를 통해 인자로 보내고, catch 부분이 실행되고
    // try 내부에서 throw 이후 부분은 skip

    int a, b;
    try 
    {
        cin >> a;
        cin >> b;

        if (b <= 0) // 예외 발생시
        {
            throw b; // throw를 통해 변수 b를 catch 파라미터로 보낸다.
        }

        cout << "[Work]" << endl;
        cout << "a : " << a << " , b : " << b << endl;
        cout << "a / b : " << a / b << endl;

    }catch(int expn) { // throw에서 보낸 b를 인자 expn으로 받는다.
        cout << "[Error]" << endl;
        cout << "can't use this : " << expn << endl;
    }

    cout << "Program End" << endl;
    return 0;
}