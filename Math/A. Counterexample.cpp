#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(iint i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod (int)1e9+7
#define N 1000001
#define endl '\n'
#define inf 1000000000
#define p 1000000007
using namespace std;
int main()
{
         lli a,b;
         cin>>a>>b;
         if(a%2==1)a++;
         if(a+2>b)cout<<"-1"<<endl;
         else cout<<a<<" "<<a+1<<" "<<a+2<<endl;
}

