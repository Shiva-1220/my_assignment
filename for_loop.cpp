#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,n;
    

    cin >> a>>b;

    for (int i = a; i <= b; i++){
            if (a==0){

            }else if (a==1){
                cout << "one\n";
            }else if (a==2){
                cout << "two\n";
            }else if (a==3){
                cout << "three\n";
            }else if (a==4){
                cout << "four\n";
            }else if (a==5){
                cout << "five\n";
            }else if (a==6){
                cout << "six\n";
            }else if (a==7){
                cout << "seven\n";
            }else if (a==8){
                cout << "eight\n";
            }else if (a==9){
                cout << "nine\n";
            }else if (a>9){
                n = a % 2;
                if (n ==0){
                    cout << "even\n";
                }else
                    cout << "odd\n";
            }
            a++;
        }
    return 0;
}


https://www.hackerrank.com/challenges/c-tutorial-for-loop/submissions/code/325957345
