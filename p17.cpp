#include<bits/stdc++.h>
using namespace std;

int main(){

for(int i=0;i<4;i++)
{
    char s='A';
    char b ='A';
    for(int j=0;j<4-i-1;j++)
    cout<<" ";
    for(int k=0;k<=i;k++)
    {cout<<s;
    s++;
    }
    for(int k=0;k<i;k++)
    {cout<<b;
    b--;
    }
    
    for(int j=0;j<4-i-1;j++)
    cout<<" ";
    cout<<endl;
    b+=i;
}
return 0;
}