#include <bits/stdc++.h>
using namespace std;

int t,n,a[105];

int main ()
{
	cin>>t;
	while(t--){
		int ans=0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			int flag=0;
			for(int j=0;j<n&&!flag;j++){
				if(j==i)continue;
				for(int k=0;k<n&&!flag;k++){
					if(k==i||k==j)continue;
					if(a[j]+a[k]==a[i]){flag=1,ans++;}
				}
			}
		}
		cout<<ans<<endl;
	}
}