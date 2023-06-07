#include<bits/stdc++.h>
using namespace std;

int main(){
for(int i=1;i<=4;i++)
{
    for(int j=0;j<i;j++)
    cout<<j+1;
    for(int k=0;k<4-i;k++)
    cout<<" ";
    for(int k=0;k<4-i;k++)
    cout<<" ";
    for(int j=i;j>0;j--)
    cout<<j;
    cout<<endl;
}
return 0;
}