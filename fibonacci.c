#include <stdio.h>

int main() {
    int i;
    int n;
    int first_num = 0;
    int second_num = 1;
    int third_num;
    printf("Fibonacci Series of how many values?: ");
    scanf("%d", &n);
    printf("Series up to %d values: %d, %d", n, first_num, second_num);

    for (i=0; i<(n-2); i++) {
        third_num = first_num + second_num;
        printf(", %d", third_num);
        first_num = second_num;
        second_num = third_num;
    }

    return 0;
}