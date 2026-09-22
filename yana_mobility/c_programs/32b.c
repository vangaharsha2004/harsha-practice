#include <stdio.h>

float determinant(int a[3][3]){

    float det;

    det = a[0][0] * (a[1][1] * a[2][2] -
                     a[1][2] * a[2][1])

        - a[0][1] * (a[1][0] * a[2][2] -
                     a[1][2] * a[2][0])

        + a[0][2] * (a[1][0] * a[2][1] -
                     a[1][1] * a[2][0]);

    return det;
}

void inverse(int a[3][3]){

    float det = determinant(a);

    printf("Determinant = %.2f\n", det);

    if(det == 0){
        printf("Inverse does not exist\n");
        return;
    }

    printf("Inverse matrix:\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            float value =
                a[(i + 1) % 3][(j + 1) % 3] *
                a[(i + 2) % 3][(j + 2) % 3]
                -
                a[(i + 1) % 3][(j + 2) % 3] *
                a[(i + 2) % 3][(j + 1) % 3];

            if((i + j) % 2 != 0){
                value = -value;
            }

            printf("%.2f\t", value / det);
        }

        printf("\n");
    }
}

int main(){

    int a[3][3];

    printf("Enter the elements of 3x3 matrix:\n");

    for(int i = 0; i < 3; i++){
	    for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    inverse(a);

    return 0;
}
