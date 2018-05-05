#include <bits/stdc++.h>
using namespace std;

int n;
char pw[105][25];
string s;

int main(){
	while(cin>>n&&n){
		cin>>s;
		int len=s.size(),cnt=0;
		int m=ceil((double)len/n);
		for(int i=0;i<m;i++){
			if(i%2==0){
				for(int j=0;j<n;j++)pw[i][j]=s[cnt++];
			}
			else{
				for(int j=n-1;j>=0;j--)pw[i][j]=s[cnt++];
			}
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cout<<pw[j][i];
		cout<<endl;
	}
}