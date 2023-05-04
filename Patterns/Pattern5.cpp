// Butterfly Pattern

// *             *
// * *         * * 
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *


#include <iostream>

using namespace std;

int
main ()
{
  int n, count = 1;
  cin >> n;
  for (int i = 1 ; i <= n ; i++)
    {
      for (int j = 1 ; j <= i ; j++)
	{
        cout<<"*";
	}
	int space = 2*n-2*i;
	for(int j = 1 ; j <= space ; j++)
	{
	    cout<<" ";
	}
	 for (int j = 1 ; j <= i ; j++)
	{
        cout<<"*";
	}
      cout << endl;
    }
    
    for (int i = n ; i >= 1 ; i--)
    {
      for (int j = 1 ; j <= i ; j++)
	{
        cout<<"*";
	}
	int space = 2*n-2*i;
	for(int j = 1 ; j <= space ; j++)
	{
	    cout<<" ";
	}
	 for (int j = 1 ; j <= i ; j++)
	{
        cout<<"*";
	}
      cout << endl;
    }


  return 0;
}

-------------------------------------------------

//         * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i = 1; i <= n; i++ )
    {
        for(int j =1; j<=n-i;j++)
        {
            cout<<" ";
            
        }
        for(int k = 1 ; k <= n ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

----------------------------------------------------

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
	

#include <stdio.h>
#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        factorial*= i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;
    int ans;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            ans = fact(i)/(fact(j)*fact(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
 

    return 0;
}
