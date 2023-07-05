#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    stack<int> st1;

    for (int i = 0; i < a; i++)
    {
        int x = st.top();
        st1.push(x);
        st.pop();
    }

    for (int i = 0; i < a; i++)
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    return 0;
}
