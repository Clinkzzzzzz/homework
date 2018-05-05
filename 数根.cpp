#include <bits/stdc++.h>
using namespace std;

string s;

int main ()
{
	while(cin>>s){
		if(s=="0")break;
		int temp=0,ans=0;
		for(int i=0;i<s.size();i++){
			temp+=s[i]-'0';
		}
		while(1){
			while(temp!=0){
				ans+=temp%10;
				temp/=10;
			}
			if(ans/10==0)break;
			else{
				temp=ans;
				ans=0;
			}
		}
		cout<<ans<<endl;
	}
}