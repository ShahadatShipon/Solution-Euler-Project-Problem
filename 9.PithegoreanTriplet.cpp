#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long i,a,b,c,multi;
    for(a=100;a<1000;a++){
        for(b=a;b<1000;b++){
            for(c=b;c<1000;c++){
                unsigned long sum=a+b+c;
                unsigned long ssum=(a*a) + (b*b);

                if(sum ==1000 && a<b && b<c && ssum== c*c){
                    cout << a << " " <<b << " " << c <<endl;
                    multi = a*b*c;
                }
            }
        }
    }
    cout << multi << endl;
}
