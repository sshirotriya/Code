1
22
333
4444
55555

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
           cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

------------------------------------------------
    
// Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
  

#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
           cout<<count<< " ";
           count++;
        }
        cout<<endl;
    }
    return 0;
}

--------------------------------------------

5 5 5 5 5
4 4 4 4
3 3 3 
2 2
1

  
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = n ; i>=1 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

-------------------------------------------------

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

---------------------------------------------------
 
        1 
      2 2 
    3 3 3
  4 4 4 4
5 5 5 5 5 

   #include <iostream> 
   using namespace std;
   int main() 
   { int n,i,j,k; 
   cin>>n;
    // int space = n-1;
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
        // space--; 
        }
        return 0; 
    }

----------------------------------------------
