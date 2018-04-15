#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;

typedef long long ll;

char s[80];
int n,ans[80];

int main ()
{
    cin>>n;
    while(n--){
        cin>>s;
        int len=strlen(s),cnt=0;
        ll num=0;
        for(int i=len-1;i>=0;i--){
            num+=(s[i]-'0')<<(len-i-1);
        }
        while(num>0){
            ans[cnt++]=num%3;
            num/=3;
        }
        for(int i=cnt-1;i>=0;i--)cout<<ans[i];
        cout<<endl;
    }
}