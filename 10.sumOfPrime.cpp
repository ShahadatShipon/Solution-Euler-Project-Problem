#include<bits/stdc++.h>
using namespace std;
int prime[3000000];
int main()
{
    unsigned long long i,j,k,range,count=1,sum=2;

    for(i=3;i*i<2000000;i+=2){
        if(prime[i]==0){
            for(j=i*i;j<=2000000;j+=(i*2)){
                prime[j]=1;
            }
        }
    }
    for(i=3;i<2000000;i+=2){
        if(prime[i]==0){
            sum+=i;
        }
    }
    cout<< sum <<endl;
}

