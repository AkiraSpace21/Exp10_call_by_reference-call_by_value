#include <iostream>
using namespace std;

void changer(int *adr, int val){
  *adr = val;
}

int main(){
  int arr[5]={10,20,30,40,50};
  int idx,newval;

  cout<<"Before: ";
  for(int m=0;m<5;m++)
    cout<<arr[m]<<" ";
  cout<<"\n";

  cout<<"pos (0-4): ";
  cin>>idx;
  cout<<"value: ";
  cin>>newval;

  changer(&arr[idx],newval);

  cout<<"After: ";
  for(int m=0;m<5;m++){
    cout<<arr[m]<<" ";
  }
  cout<<"\n";
}
