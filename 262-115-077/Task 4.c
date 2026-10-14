#include <stdio.h>
int main (){
int i, N, sum=0;
printf("Enter a number:");
scanf("%d", &N);
for(i=2; i<=N; i+=2)
    sum = sum+i;
printf("sum=%d", sum);
return 0;

}
