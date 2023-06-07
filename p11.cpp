#include<bits/stdc++.h>
using namespace std;

int main(){
int s=0;
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=i;j++)
    {if(s%2==0)
    cout<<'1';
    else cout<<'0';
    s++;
    }
    cout<<endl;
}
return 0;
}