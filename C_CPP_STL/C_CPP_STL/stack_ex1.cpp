#include <iostream>
#include <stack>
using namespace std;

void Error()
{
    cout << "=> Wrong!!" << endl;
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "st.size() : " << st.size() << endl;
    cout << "st.top() -> st.pop()" << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    stack<char> cSt;

    char c;

    for (int i = 0; i < 6; ++i)
    {
        cin >> c;
        if (c == ')' || c == '}' || c == ']') // ´Ý´Â °ýÈ£ ÀÏ °æ¿ì
        {
            if (cSt.empty())
            {
                Error();
                return -1;
            }
            if ((c == ')' && cSt.top() == '(')
                || (c == '}' && cSt.top() == '{')
                || (c == ']' && cSt.top() == '['))
            {
                cSt.pop();
                continue;
            }
        }   
        cSt.push(c);
    }

    if (!cSt.empty())
    {
        Error();
        return -1;
    }

    cout << "-> Correct!!" << endl;
    return 0;
}