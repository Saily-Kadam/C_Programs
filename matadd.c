#include <stdio.h>

struct sparse {
    int row;
    int col;
    int value;
};

int main() {
    int a[10][10], b[10][10];
    struct sparse s1[50], s2[50], s3[100];
    int r, c, i, j, k = 1, l = 1, m = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    s1[0].row = r; s1[0].col = c; s1[0].value = 0;
    s2[0].row = r; s2[0].col = c; s2[0].value = 0;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != 0) {
                s1[k].row = i;
                s1[k].col = j;
                s1[k].value = a[i][j];
                k++;
                s1[0].value++;
            }
            if (b[i][j] != 0) {
                s2[l].row = i;
                s2[l].col = j;
                s2[l].value = b[i][j];
                l++;
                s2[0].value++;
            }
        }
    }

    s3[0] = s1[0];

    i = j = 1;
    while (i <= s1[0].value && j <= s2[0].value) {
        if (s1[i].row == s2[j].row && s1[i].col == s2[j].col) {
            s3[m] = s1[i];
            s3[m].value = s1[i].value + s2[j].value;
            i++; j++; m++;
        } else if (s1[i].row < s2[j].row ||
                  (s1[i].row == s2[j].row && s1[i].col < s2[j].col)) {
            s3[m++] = s1[i++];
        } else {
            s3[m++] = s2[j++];
        }
    }

    while (i <= s1[0].value) s3[m++] = s1[i++];
    while (j <= s2[0].value) s3[m++] = s2[j++];

    s3[0].value = m - 1;

    printf("\nResultant Sparse Matrix:\n");
    printf("Row Col Value\n");
    for (i = 0; i <= s3[0].value; i++)
        printf("%d   %d   %d\n", s3[i].row, s3[i].col, s3[i].value);

    return 0;
}