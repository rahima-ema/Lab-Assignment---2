#include <stdio.h>
int main(){
int N, sum=0;
printf("Enter a number:");
scanf("%d", &N);
for(; N!=0; N/=10)
    sum = sum + N%10;
printf("Sum of digit = %d", sum);
return 0;




}
