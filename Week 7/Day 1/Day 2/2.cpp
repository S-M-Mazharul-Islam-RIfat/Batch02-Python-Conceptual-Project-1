//Number of times a sorted array is roated
//Problem
#include<bits/stdc++.h>
#define kickStart ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define newLine '\n'
#define ll long long int
#define INF 1e18
using namespace std;
int numberOfTimesASortedArrayIsRotated()
{
    int arr[]= {11,12,15,18,2,5,6,8};
    int l,r,mid,prev,next,n;
    n=8;
    l=0;
    r=7;
    while(l<=r)
    {
        mid=(l+r)/2;
        prev=(mid+n-1)%n;
        next=(mid+1)%n;
        //cout << "prev ->" << prev << newLine;
        //cout << "mid  ->" << mid << newLine;
        //cout << "next ->" << next << newLine;
        if(arr[mid]<=arr[prev] && arr[mid]<=arr[next])
            return mid;
        else if(arr[l]<=arr[mid])
            l=mid+1;
        else if(arr[mid]<=arr[r])
            r=mid-1;
    }
}
void solve()
{
    cout << numberOfTimesASortedArrayIsRotated() << newLine;
}
int main()
{
    kickStart;
    solve();
    return 0;
}





