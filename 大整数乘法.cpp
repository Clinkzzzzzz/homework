#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

string s,ss;
int ans[410],a[205],b[205],idx;

int main ()
{
        cin>>s>>ss;
        int len=0,idx;
        for(int i=s.size()-1,j=0;i>=0;i--,j++){
                a[j]=s[i]-'0';
        }
        for(int i=ss.size()-1,j=0;i>=0;i--,j++){
                b[j]=ss[i]-'0';
        }
        for(int i=0;i<s.size();i++){
                for(int j=0;j<ss.size();j++){
                        ans[i+j]+=a[i]*b[j];
                }
        }
        for(int i=0;i<s.size()+ss.size();i++){
                ans[i+1]+=ans[i]/10;
                ans[i]%=10;
        }
        for(idx=s.size()+ss.size()+1;idx>=0;idx--)if(ans[idx])break;
        if(idx==-1)cout<<0;
        else {
                for(;idx>=0;idx--)cout<<ans[idx];
        }
        cout<<endl;
}