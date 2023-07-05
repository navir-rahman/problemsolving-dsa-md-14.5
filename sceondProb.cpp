#include <bits/stdc++.h>
using namespace std;


int main()
{
    stack<int>st;
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    
    queue<int>que;
    int b;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin>>x;
        que.push(x);
    }

//


    bool flag=true;
    if (a!=b){cout<<"NO"; return 0;}

    for (int i = 0; i < a; i++)
    {
        if(st.top() != que.front()){
            flag = false;
        }
        st.pop();
        que.pop();
    }
    
    if (flag)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    
    
    return 0;
}
