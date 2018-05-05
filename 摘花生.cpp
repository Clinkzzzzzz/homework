#include<cstdio>  
#include<cstring>  
#include<iostream>  
#include<algorithm>  
#include<cmath>
using namespace std;  

struct hs{
    int x,y,n;
};

bool cmp(const hs& a,const hs& b){
    return a.n>b.n;
}

int t,m,n,k;

int main ()
{
    cin>>t;
    while(t--){
        cin>>m>>n>>k;
        hs h[n*m+10];
        int cnt=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                int temp;
                cin>>temp;
                if(temp){
                    h[cnt].x=i;
                    h[cnt].y=j;
                    h[cnt++].n=temp;
                }
            }
        }
        sort(h,h+cnt,cmp);
        int x=0,y=h[0].y,Max=0,ans=0;
        while(Max<cnt&&k){
            if(k>=abs(x-h[Max].x)+abs(y-h[Max].y)+1+h[Max].x){
                ans+=h[Max].n;
                k=k-(abs(x-h[Max].x)+abs(y-h[Max].y)+1);
                x=h[Max].x,y=h[Max].y;
                Max++;
            }
            else break;
        }
        cout<<ans<<endl;
    }
}