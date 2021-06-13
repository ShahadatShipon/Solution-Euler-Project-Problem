#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sum=0,sums=0,def;
    for(int i=1;i<=100;i++){
        sum+=(i*i);
        sums+=i;
    }
    long long ssum= sums*sums;
    cout<< ssum-sum <<endl;

}
