#include<bits/stdc++.h>
using namespace std;

unsigned long long i,n=1,a=1;

int main()
{
    ios_base::sync_with_stdio(false);
    int count=0;
    while(count<500){
        count=0;
        int sq = sqrt(n);
        for(i=1;i<=sq;i++){
            if(n%i==0){
                count+=2;
            }
        }
        if(count>=500){
            cout<<n <<endl;
            return 0;
        }
        else{
            a++;
        }
        n+=a;

    }
}
