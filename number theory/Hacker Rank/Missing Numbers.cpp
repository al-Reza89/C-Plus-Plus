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
int main() {
    int frequency[100001];
    for(int i = 1; i <= 100000; i++) {
        frequency[i] = 0;
    }
    int n, m;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin>>tmp;
        frequency[tmp]++;
    }
    cin>>m;

    for(int i = 0; i < m; i++) {
        int tmp;
        cin>>tmp;
        frequency[tmp]--;
    }

    for(int i = 1; i <= 10000; i++) {
        if(frequency[i] != 0) {
            cout<<i<<" ";
        }
    }
    return 0;
}
