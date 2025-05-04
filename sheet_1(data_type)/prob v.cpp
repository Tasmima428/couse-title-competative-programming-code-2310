#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long A,B;
  char S;
    cin>>A>>S>>B;
    if(S=='<')
    {
        if(A<B)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(S=='>')
    {
        if(A>B)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(S=='=')
    {
        if(A==B)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
}