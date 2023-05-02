     #
    ##
   ###
  ####
 #####
######

---------------------------------------------------

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>> n;
    int space=n-1,hash=1;
 
 for (int i = 0; i < n; i++) {
 
        for (int j = 0; j < space; j++) {
            
            cout << " ";
        }
        for(int k=0;k<hash;k++)
        {
            cout<<"#";
        }
        cout << endl;
        space--;
        hash++;
}
}

--------------------------------------------------
     
     
int main()
{
     int i, j,n;
     cin>>n;
     for(i = 0 ; i < n ; i++)
     {
          for(j = 0 ; j < n ; j++)
          {
               if(i+j >= n+1)
               {
                    cout<<"*";
               }
               cout<<endl;
          }

    return 0;
}
 
-------------------------------------------------------
     
     
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

