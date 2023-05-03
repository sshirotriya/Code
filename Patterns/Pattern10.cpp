        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

---------------------------------------------
          
          
#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
//     int space = n-1;
    
    for( i = 1 ; i <= n ; i++)
    {
        for( j = 1; j <= n-i ; j++)
        {
            cout<<" ";
        }
        for( k = 1 ; k <= i ; k++)
        {
            cout<<i;
        }
        cout<<endl;
//         space--;
    }

    return 0;
}
