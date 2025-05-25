//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:19/5/25
//Problem name:B-Searching
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n;
    long long array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cin>>x;
    bool flag = false;
    for(int j=0;j<x;j++)
    {
        if(array[j]==x)
        {
            flag = true;
            cout<<j<<endl;
            break;
        }
    }
    if(flag)
    {
        cout<<flag-1;
    }


}