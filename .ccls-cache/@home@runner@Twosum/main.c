#include <stdio.h>

int main(void) {
    int num, key, k = 0;
    int arr[50], sol[20];

    printf("Enter the number of elements for the array: ");
    scanf("%d", &num);

    printf("Enter the target number: ");
    scanf("%d", &key);

    printf("Enter the elements for the array: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] + arr[j] == key) {
                sol[k] = i;
                sol[k + 1] = j;
                k = k + 2;
                break;  
            }
        }
    }

    printf("[");
    for (int i = 0; i < k; i++) {
        printf("%d", sol[i]);
        if (i < k - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
