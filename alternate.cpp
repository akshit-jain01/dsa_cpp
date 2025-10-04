#include<bits/stdc++.h>
using namespace std;

vector<int> alternate(vector<int> arr, int n)
{
    vector<int> positive, negative;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<0)
        {
            negative.push_back(arr[i]);
        }
        else
        {
            positive.push_back(arr[i]);
        }
    }
    
    for(int i=0;i<n/2;i++)
    {
        arr[2*i] = positive[i];
        arr[2*i+1] = negative[i];
        
    }
    return arr;

}

int main()
{
    vector<int> a = {1,-2,-3,-4,5,6};
    int n = (int)sizeof(a)/sizeof(a[0]);
    vector<int> b = alternate(a,n);
    for(int i=0;i<b.size();i++)
    cout<<b[i]<<" ";
    return 0;
}
