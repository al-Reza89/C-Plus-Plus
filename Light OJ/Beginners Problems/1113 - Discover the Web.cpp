#include<bits/stdc++.h>
using namespace std;
int main()
{
         int test;
         scanf("%d",&test);
         for(int t=1;t<=test; t++){
                  stack<string>b,f,c;
                  c.push("http://www.lightoj.com/");

                  string s,x;
                  printf("Case %d:\n",t);

                  while(cin>>s && s!="QUIT"){
                           if(s=="BACK"){
                                 if(b.empty())printf("Ignored\n");
                                 else{
                                    x=b.top();
                                    cout<<x<<endl;
                                    f.push(c.top());
                                    c.push(x);
                                    b.pop();
                                 }
                           }

                           else if(s=="FORWARD"){
                                    if(f.empty())printf("Ignored\n");
                                    else{
                                             x=f.top();
                                             cout<<x<<endl;
                                             b.push(c.top());
                                             c.push(x);
                                             f.pop();
                                    }
                           }

                           else if(s=="VISIT"){
                                    cin>>x;
                                    cout<<x<<endl;
                                    b.push(c.top());
                                    c.pop();
                                    c.push(x);
                                    while(!f.empty()){
                                             f.pop();
                                    }
                           }
                  }
         }
         return 0;
}
