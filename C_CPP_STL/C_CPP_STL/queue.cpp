#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Queue Container
    // FIFO (First In, First Out)
    // Queue Container는 Deque와 List Container에 붙어서 사용 가능 (Vector 불가능)
    /*
    Vector Container가 불가능한 이유
    Queue 자료구조 특성상 뒤에 삽입하고 앞에서 빼야하는데
    Vector는 앞에서 뺴는 동작을 지원해주지 않는다.
    */

    // 내부적으로 Deque, List Container로 구현되어있다.
    // Queue 구조로 동작하도록 멤버 함수 제공

    // Default : Deque Container

}