#include <bits/stdc++.h>
using namespace std;


//-------------------------------------------------------------------------------
void do2win(int test)
{
 
    
int fast_pow(int base, int n,int M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    int halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}  

}
//-------------------------------------------------------------------------------
 
signed main()
{

   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt","w", stderr);
   #endif

   // #ifndef ONLINE_JUDGE
   //  cerr<<(1000*clock())/CLOCKS_PER_SEC<<"ms";
   // #endif      

///+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   FAST; 
cout<<fixed<<setprecision(20);

///+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   
   int test;  test=1;    
///////---------------------------------|||||
            // cin>>test;        ////////>>>>>>>
//////----------------------------------|||||

    for(int i=1;i<=test;i++)
    {
       // cout<<"Case #"<<i<<": ";

      do2win(i);
      cout<<nl;   //  IMPORTANT FOR NEXT LINE     
    }

   return 0;
}