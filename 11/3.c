#include <stdio.h>
#include <string.h>

int main()
{
    int arr[32];
    memset(arr, 0, sizeof(arr));
    char n;    
    int i = 1;
    
    while (scanf("%c", &n) != EOF) {
       if(n=='\n'){
           break;
       }
        int c=(int)n;
        arr[i % 32] += c;
        i++;
       
    }

    int bits[32];
    int j;
    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }
    for (j = 0; j < 32; j++) {
        int d = bits[j] % 85 + 34;
        char t = (char)d; 
        printf("%c",t);
    }
    printf("\n");

    return 0;
}
