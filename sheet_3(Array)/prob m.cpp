//course name: Competitive Programming
//course code:2310
//course teacher name: Mirza Raquib
//date:16/6/25
//Problem name:M - Replace MinMax

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   long long minn, maxx;
    for(int i=1;i<n;i++){
        if(a[i]>a[minn])
           minn=i;
    if(a[i]< a[maxx])
        maxx=i;
    }
    long long swapp = a[minn];
    a[minn]= a[maxx];
    a[maxx] = swapp;
    for(int i =0;i<n;i++)
        cout<< a[i]<<" ";

}
