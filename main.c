#include <stdio.h>

int main(void)
{
    int grade[5];
    int *p = grade;
    int i, sum = 0;
    double avg;

    for(i = 0; i < 5; i++) {
        printf("grade[%d] = ", i);
        scanf("%d", (p + i)); 
    }

    for(i = 0; i < 5; i++) {
        printf("grade[%d] = %d\n", i, *(p + i));
        sum += *(p + i);
    }

    avg = sum / 5.0;
    printf("average = %.2f\n", avg);

    return 0;
}
