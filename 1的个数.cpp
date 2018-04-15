#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

int N,n;

int main ()
{
    cin>>N;
    while(N--){
        cin>>n;
        int cnt=0;
        while(n>0){
            if(n%2)cnt++;
            n>>=1;
        }
        cout<<cnt<<endl;
    }
}