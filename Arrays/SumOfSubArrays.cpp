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
