#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long i,count=1,max=0,n,maxs;

    for (i=3;i<=1000000 ;i++){
        n=i;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                count++;
            }
            if(n%2!=0 && n!=1){
                n = (3*n)+1;
                count++;
            }
        }
        if(count>max){
            max=count;
            maxs=i;
        }
        count=1;
    }
    cout << maxs <<endl;
    return 0;
}
