#include <stdio.h>

int main()
{
    int Matrix[3][3] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    int i, j, n1, n2, temp;

    printf("Matrix before row interchange:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf(" %d", Matrix[i][j]);
        printf("\n");
    }

    printf("Enter two row numbers to be interchanged:");
    scanf("%d %d", &n1, &n2);
    for (i = 0; i < 3; ++i) {
        temp = Matrix[n1 - 1][i];

        Matrix[n1 - 1][i] = Matrix[n2 - 1][i];
        Matrix[n2 - 1][i] = temp;
    }

    printf("Matrix after row intercahnged:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j)
            printf(" %d", Matrix[i][j]);
        printf("\n");
    }

    return 0;
}