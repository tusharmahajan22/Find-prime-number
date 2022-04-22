#include <stdio.h>

int main()
{
    int n,prime=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
    
    for (int i=2;i<n;i++) {
        // i--;
        if(n%i==0){
            prime=1;
            break;
        }
    }
    
    if(prime==0){
        printf("%d is a prime number. \n",n);
    }
    else{
        printf("%d is not a prime number. \n",n);
    }

    return 0;
}
