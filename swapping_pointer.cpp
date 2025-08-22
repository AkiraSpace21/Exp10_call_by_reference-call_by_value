#include<iostream>
using namespace std;

void myswap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int m=34,n=24;
    cout<<"B4 swap:\n";
    cout<<"m="<<m<<" n="<<n<<"\n";

    myswap(&m,&n);

    cout<<"After:\n";
    cout<<"m="<<m<<" n="<<n<<"\n";
    return 0;
}
