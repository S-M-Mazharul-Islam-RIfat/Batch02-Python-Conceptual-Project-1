//Fast occurrence,Last occurrence and count
#include<bits/stdc++.h>
#define kickStart ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define newLine '\n'
#define ll long long int
#define INF 1e18
using namespace std;
int firstOccurrence()
{
    int arr[]= {2,4,10,10,10,18,20};
    int l,r,mid,idx,key=10;
    l=0;
    r=6;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(key==arr[mid])
        {
            idx=mid;
            r=mid-1;
        }
        else if(key<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return idx;
}
int lastOccurrence()
{
    int arr[]= {2,4,10,10,10,18,20};
    int l,r,mid,idx,key=10;
    l=0;
    r=6;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(key==arr[mid])
        {
            idx=mid;
            l=mid+1;
        }
        else if(key<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return idx;
}
void solve()
{
    cout << firstOccurrence() << newLine;
    cout << lastOccurrence() << newLine;
    cout << "Count -> " << (lastOccurrence()-firstOccurrence())+1 << newLine;
}
int main()
{
    kickStart;
    solve();
    return 0;
}





