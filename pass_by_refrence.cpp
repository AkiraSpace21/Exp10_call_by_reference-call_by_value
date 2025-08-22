#include<iostream>
using namespace std;

void doSwap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int first=34, second=24;
    cout<<"values b4 swap:\n";
    cout<<"first="<<first<<" second="<<second<<"\n";

    doSwap(first,second);

    cout<<"after swap:\n";
    cout<<"first="<<first<<" second="<<second<<"\n";
    return 0;
}
