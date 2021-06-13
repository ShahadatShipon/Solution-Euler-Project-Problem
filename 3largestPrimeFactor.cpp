#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n=600851475143,i;
    vector <long long> v;
    while(n%2==0){
        //cout << "2 ";
        v.push_back(2);
        n=n/2;
    }
    for(i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            //cout << i <<" ";
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>2){
        //cout << n <<endl;
        v.push_back(n);
    }
    cout << *max_element(v.begin(),v.end()) <<endl;
    return 0;
}



