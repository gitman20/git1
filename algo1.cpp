#include <bits/stdc++.h>
using namespace std;


//-------------------------------------------------------------------------------
void do2win(int test)
{
 

ld tsearch(ld l, ld r) {
    ld eps = 1e-9;              
    rep(i,0,100) {
        ld m1 = l + (r - l) / 3;
        ld m2 = r - (r - l) / 3;
        ld f1 = func1(m1);     
        ld f2 = f(m2);      
        if (f1 <= f2)
            r = m2;
        else
            l = m1;
    }

    return func1(l);                  
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