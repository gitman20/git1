#include <bits/stdc++.h>
using namespace std;


//-------------------------------------------------------------------------------
void do2win(int test)
{
   cin>>n>>m;

   a.resize(n);
   x.resize(m);
   rep(i,0,n)
   {
    cin>>a[i].F>>a[i].S;
   }

   mii M;
   rep(i,0,m)
   {
    cin>>x[i].F>>x[i].S;
    if(!present(M,x[i].F))
    M[x[i].F]=x[i].S;
    else
    M[x[i].F]=max(M[x[i].F],x[i].S);
   }

   x.clear();
   for(auto& p:M)
  {
    x.pb(p);
  }

  vpii b;
  
  int mx=-INF;
  rev(i,sz(x)-1,0)
  {
    if(x[i].S>mx)
    {
      b.pb(x[i]);
      mx=max(mx,x[i].S);
    }

   }

   SORT(b);
   int p1=0;


   rep(i,0,N)
   {
    if(p1>=sz(b))  break;

    YY[i]=b[p1].S+1;
    if(i==b[p1].F)
    {
      p1++;
    }

   }

    int ans=bsearch(0,MOD);

    cout<<ans;

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