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
         int t;
         cin>>t;
         while(t--)
         {
             int arr[100][100];
             int n;
             cin>>n;
             vector<string>V(n);
             for(int i=0;i<n;i++)
             {
                 cin>>V[i];
                 sort(V[i].begin(),V[i].end());
             }
             for(int i=0;i<n;i++)
             {
                 for(int j=0;j<n;j++)
                 {
                     char c=V[i][j];
                     arr[i][j]=c-'a';
                 }
             }
             bool ans=true;
             for(int i=1;i<n;i++)
             {
                 for(int j=0;j<n;j++)
                 {
                     if(arr[i-1][j]>arr[i][j])
                     {
                         ans=false;
                         break;
                     }
                 }
             }
             if(ans)cout<<"YES"<<endl;
             else cout<<"NO"<<endl;

         }
}
