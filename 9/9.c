#include <stdio.h>

int main() 
{
    int n;
    int i;
    int a[51];    
    scanf("%d", &n);

    if(n == 2 || n == 3 || n == 4) {
        printf("1");
    }

    if(n > 4) {
        a[2] = 1;
        a[3] = 1;
        a[4] = 1;
        a[1] = 0;

        for(i = 5; i <= n; i++) {
            a[i] = a[i-2] + a[i-3];
        }

        printf("%d", a[n]);
    }

    return 0;
}
