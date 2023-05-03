#include <iostream>
#include <cstdio>
using namespace std;

int maxof4(int a,int b,int c,int d){
    int max=a;
    
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    return max;
}

int main() {
    int a, b, c, d,ans;
    cin>>a>>b>>c>>d;
    ans = maxof4(a, b, c, d);
    cout<<ans;
    
    return 0;
}


https://www.hackerrank.com/challenges/c-tutorial-functions/submissions/code/326279847
