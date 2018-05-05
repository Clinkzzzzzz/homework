#include <bits/stdc++.h>
using namespace std;

int n,p,m;
vector<int> v;

int main ()
{
	while(cin>>n>>p>>m){
		if(!n&&!p&&!m)break;
		v.clear();
		p--;
		for(int i=0;i<n;i++)v.push_back(i+1);
		while(n){
			cout<<v[(p-1+m)%n];
			if(n==1)cout<<'\n';
			else cout<<',';
			p=(p-1+m)%n;
			v.erase(v.begin()+p);
			n--;
		}
	}
}