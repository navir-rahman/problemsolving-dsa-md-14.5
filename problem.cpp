#include <bits/stdc++.h>
using namespace std;


int main()
{
    stack<int>st1;
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }

    
    stack<int>st2;
    int b;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin>>x;
        st2.push(x);
    }

    bool flag=true;
    if (a!=b){cout<<"NO"; return 0;}

    for (int i = 0; i < a; i++)
    {
        if(st1.top() != st2.top()){
            flag = false;
        }
        st1.pop();
        st2.pop();
    }
    
    if (flag)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    
    
    return 0;
}
