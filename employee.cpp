#include <iostream>
using namespace std;

void hike(float &s){
    s = s*1.2;   
}

bool checkElig(bool r,bool pb,float pr,bool n){
    int c=0;
    if(r) c++;
    if(pb) c++;
    if(pr>100000) c++;
    if(n) c++;
    return (c>=3);
}

int main(){
    char name[50];
    bool r,pb,n;
    float pr, s;

    cout<<"Name: ";
    cin>>name;
    cout<<"Research proj done(0/1): ";
    cin>>r;
    cout<<"Publication(0/1): ";
    cin>>pb;
    cout<<"Profit: ";
    cin>>pr;
    cout<<"New proj in pipe(0/1): ";
    cin>>n;
    cout<<"Salary: ";
    cin>>s;

    if(checkElig(r,pb,pr,n)){
        hike(s);
        cout<<"Eligible\n";
    }else{
        cout<<"Not eligible\n";
    }

    cout<<"Emp: "<<name<<"\n";
    cout<<"Final Sal: "<<s<<"\n";
}
