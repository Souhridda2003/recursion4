#include<iostream>
using namespace std;
void hcf(int a,int b){
    // for(int i= min(a,b);i>=2;i--){
    //     if(!(a%i) && !(b%i)) return i;
    // }
    // return 1;
    if(a==0) {
        cout<<b;
        return;
    }
    else return hcf(b%a,a);
}
int main(){
    int a=10000;
    int b=10001;
    hcf(a,b);
}
