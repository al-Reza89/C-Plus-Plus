#include<bits/stdc++.h>
#define lli long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define N 100001
#define endl '\n'
#define inf 1000000000
#define mod 1000000007
#define pb push_back
#define str string
using namespace std;
vector<int>ar[N];
bool vis[N];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int kx[]={-2,-1,1,2,2,1,-1,-2};
int ky[]={1,2,2,1,-1,-2,-2,-1};
int main()
{
         str S;
         cin>>S;
         int cnt=0;
         for(int i=0;i<=S.size()-3;i=i+3)
         {
             if(S[i]!='S')cnt++;
             if(S[i+1]!='O')cnt++;
             if(S[i+2]!='S')cnt++;
         }
          cout<<cnt<<endl;
}
