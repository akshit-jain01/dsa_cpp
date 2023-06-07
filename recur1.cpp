#include<bits/stdc++.h>
using namespace std;

int f(int i,int n)
{
    if(i>n)
    return 0;

    f(i+1,n);
    cout<<i<<endl;
}

int main()
{
    int i=1,n;
    cin>>n;
    f(i,n);
    return 0;
}