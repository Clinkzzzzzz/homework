#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		if(!a&&!b&&!c&&!d&&!e&&!f)break;
		int ans=f+e+d+ceil((double)c/4);
		int s1,s2=d*5;
		if(c%4==1)s2+=5;
		if(c%4==2)s2+=3;
		if(c%4==3)s2+=1;
		if(b>s2)ans+=ceil((double)(b-s2)/9);
		s1=36*ans-36*f-25*e-16*d-9*c-4*b;
		if(a>s1)ans+=ceil((double)(a-s1)/36);
		cout<<ans<<endl;
	}
}