1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1 
 
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n+1-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

-----------------------------------------------------
  
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
  
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
     for(int i = 1; i<=n;i++)
     {
         for(int j = 1; j<=i;j++)
         {
             cout<<j<<" ";
         }
         cout<<endl;
     }

    return 0;
}

-----------------------------------------------------
5
4 4
3 3 3
2 2 2 2 
1 1 1 1 1


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i= n; i>=1; i-- )
    {
        for(int j =1; j<=n+1-i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}


