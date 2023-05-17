#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int ans = 2;  /*maximum arithmetic subarray length*/
    int pd = arr[1]-arr[0]; /*previous common difference*/
    int curr = 2; /*current arithmetic subarray length*/
    int j = 2;
    while(j < n) {
        if(pd == arr[j] - arr[j-1]) {  /* if previous common difference == current common differnce */
            curr++;
        } else {
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans;
    return 0;
}

/*
  7
  10 7 4 6 8 10 11
  4
*/
