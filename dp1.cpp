#include<bits/stdc++.h>
using namespace std;

void countSubseq(int i, int n, vector<int>& arr, int product,bool taken, int& ans, int k)
{
    if(product>k) return;
    if(i==n)
    {
        if(taken)
        ans++;
        return;
    }
    countSubseq(i+1, n, arr, product, taken, ans, k);
    if(product*arr[i]<=k)
    countSubseq(i+1, n,arr, product*arr[i], true, ans, k);
    
}

int main()
{
    int n, ans=0, k;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;

    countSubseq(0, n, arr, 1,false, ans, k);

    cout<<ans;

}
