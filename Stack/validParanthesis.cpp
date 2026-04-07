#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string st)
{
    // creating the stack
    stack<char> s;

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '(' || st[i] == '{' || st[i] == '[')
        {
            s.push(st[i]);
        }
        else
        {
            if (s.size() == 0)
                return false;

            if ((s.top() == '(' && st[i] == ')') ||
                (s.top() == '[' && st[i] == ']') ||
                (s.top() == '{' && st[i] == '}'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return s.size() == 0;
}

int main()
{
    string s;
    cin >> s;
    cout << isValidParenthesis(s);
    return 0;
}