#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int spc = n - 1;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= spc; j++) {
            printf(" ");   
        }

        for (int j = num; j >= 1; j--) {
            printf("%d",j);
        }
        spc--;
        num++;
        printf("\n");
    }
    return 0;
}