/*
  5
  1 2 0 7 2
  1
  2
  2
  7
  7
  */

#include <iostream>
#include <limits.h>


using namespace std;

int main()
{
    int mx = INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}