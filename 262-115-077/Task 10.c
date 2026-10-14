#include <stdio.h>
int main(){
int n;
printf("Enter a number:");
scanf("%d", &n);
int is_Prime =1;
for(int i = 2;i<n; i++){

    if (n%i==0){

        is_Prime =0;
        break;
    }
}

if(is_Prime ==1)
    printf("Prime");
else printf("Composite");
return 0;



}
