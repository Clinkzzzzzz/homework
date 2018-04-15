#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

int n,cur,idx;
int num[100];

int main ()
{
    cin>>n;
    num[99]=1;
    for(int i=0;i<n;i++){
        for(int j=99;j>=0;j--){
            int temp=(num[j]<<1)+cur;
            num[j]=temp%10;
            cur=temp/10;
        }
    }
    while(!num[idx])idx++;
    for(;idx<=99;idx++)cout<<num[idx];
    cout<<endl;
}