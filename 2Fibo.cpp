#include <iostream>
using namespace std;
int main()
{
    unsigned long long sum,fibo,i,f,s,t,n;
    cin >>t;
    while(t--){
        sum=2,fibo=0,i=1,f=1,s=2;
        cin>>n;
        while(fibo<n){
            fibo=f+s;
            f=s;
            s=fibo;
            if(fibo%2==0 && fibo<n){
                sum+=fibo;
            }
        }
        cout << sum <<endl;
    }
    return 0;
}


