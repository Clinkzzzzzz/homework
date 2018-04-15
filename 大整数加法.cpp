#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

string s,ss;
int ans[300],a[300],b[300],idx;

int main ()
{
        cin>>s>>ss;
        for(int i=s.size()-1,j=0;i>=0;i--,j++){
                a[j]=s[i]-'0';
        }//99
        for(int i=ss.size()-1,j=0;i>=0;i--,j++){
                b[j]=ss[i]-'0';
        }//9
        for(int i=0,carry=0;i<205;i++){
                ans[i]=a[i]+b[i]+carry;
                carry=ans[i]/10;
                ans[i]%=10;
        }
        for(int i=204;i>=0;i--){
                if(ans[i]){idx=i;break;}
        }
        for(;idx>=0;idx--)cout<<ans[idx];
        cout<<endl;
}