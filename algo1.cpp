//-------------------------------------------------------------------------------
 
signed main()
{

   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt","w", stderr);
   #endif

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