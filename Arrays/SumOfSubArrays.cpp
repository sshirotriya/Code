#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        sum=0;
        for(int j=i; j<n; j++) {
            sum=sum+arr[j];
            cout<<sum<<endl;
        }
       
    }
    cout<<"sum is:"<<sum;
    
    return 0;
}

/*
  3
  1 2 2
  1
  3
  5
  2
  4
  2
 */
