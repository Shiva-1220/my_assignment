#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int arr[1000];
    int sum=0;
    for(int i=0;i<n;i++){
       
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
printf("%d",sum);
    
    
return 0;

    
}

https://www.hackerrank.com/challenges/1d-arrays-in-c/submissions/code/332522460
