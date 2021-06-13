#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nmbr,reverse=0,rem,max=0;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            nmbr =i*j;
            while(nmbr>0){
                rem=nmbr%10;
                reverse = (reverse*10 ) + rem;
                nmbr=nmbr/10;
            }
            if(i*j==reverse && reverse>max){
                max = reverse;
            }
            reverse=0;
        }
    }
    cout << max <<endl;
}

