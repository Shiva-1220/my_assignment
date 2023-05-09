#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3,s4,s5,sum=0,per;
    cin>>s1>>s2>>s3>>s4>>s5;
    
    sum=s1+s2+s3+s4+s5; //sum of the all markss
    
    cout<<sum<<endl;
    
    per=(sum*100)/500; //percentage= marks obtained divided by total marks multiplied by 100.
    cout<<per;
    
}
