#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,i=20;
    while(1){
        for(int j=1;j<=20;j+=1){
            if(i%j==0){
                x++;
            }
            else{
                break;
            }
        }
        if(x==20){
            break;
        }
        x=0;
        i+=20;
    }
    cout << i <<endl;
}
