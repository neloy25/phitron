#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) pos+=arr[i];
        else neg+=arr[i];
    }
    printf("%d %d", pos,neg);

    return 0;
}