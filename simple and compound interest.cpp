#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,r,t,SI,CI;
    cout<<"Enter Principle p, Rate of Interest r, Time t";
    cin>>p>>r>>t;
    
    SI=(p*r*t)/100; //formula of Simple Interest
    
    cout<<"Simple Interest is:"<<SI<<endl;
    
    CI=p*(1+r/100)*t ; //formula to calc. Compound Interest
    cout<<"Coumpound Interest is:"<<CI;
    
    
    return 0;
}
