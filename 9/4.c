#include <stdio.h>

int main() {
	int n, i;
    int arr[50];
    scanf("%d", &n);
    
	arr[1] = 0;
    arr[2] = 1;
	arr[3] = 1;
	for (i = 4; i <= n; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
    }
    printf("%d\n", arr[n]);

    return 0;
}
