//  *****
//  ****
//  ***
//  **
//  *

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = n ; i > 0 ; i--)
    {
        for(int j = 0 ; j < i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


------------------------------------------------
    
//      #
//     ##
//    ###
//   ####
//  #####
// ######


   #include <iostream> 
   using namespace std;
   int main() 
   {
       int n,i,j,k; 
       cin>>n;
       
       for( i = 1 ; i <= n ; i++) 
       { 
           for( j = 1; j <= n-i ; j++) 
           {
                cout<<" ";
           } 
           for( k = 1 ; k <= i ; k++)
           {
               cout<<"#";
           }
           cout<<endl; 
          
        }
        return 0; 
    }
     
   //OR
      
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
           if(j <= n-i)
           {
               cout<<" ";
           }
           else{
               cout<<"*";
           }
        }
        cout<<endl;
    }

    return 0;
}

--------------------------------------------------------
    
// *******
//  *****
//   ***
//    *
  
#include <iostream>

using namespace std;

int main()
{
    int n,star;
    cin>>n>>star;
    
    int space= 0;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int i = 1 ; i<=space ; i++)
        {
            cout<<" ";
        }
        for(int i = 1 ; i <= star ; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        space++;
        star-=2;
    }
}
