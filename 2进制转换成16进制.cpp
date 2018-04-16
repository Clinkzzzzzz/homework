#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

char s[10005];
int num[2505],n;

int main ()
{
    cin>>n;
    while(n--){
        cin>>s;
        int len=strlen(s),cnt=0;
        int t=ceil((double)len/4),idx=len-1;
        while(t--){
            int ans=0;
            for(int i=0;i<4;i++){
                int temp=s[idx--]-'0';
                ans+=(temp<<i);
                if(idx<0)break;
            }
            num[cnt++]=ans;
        }
        for(int i=cnt-1;i>=0;i--){
            if(num[i]>=10)cout<<(char)(num[i]+55);
            else cout<<num[i];
        }
        cout<<endl;
    }
}