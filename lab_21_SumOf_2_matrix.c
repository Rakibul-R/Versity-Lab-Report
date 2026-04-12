#include <stdio.h>

int main() {
   int matrix1[3][3], matrix2[3][3], sum_matrix[3][3];

    printf("Enter elements of first 3x3 matrix(9 elements):\n");
    for(int i=0;i<3;i++){               //rows
        for(int j=0;j<3;j++){           // cols
            if(scanf("%d",&matrix1[i][j])!=1){
                printf("Invalid input!");
                return 0; // Exit the program if input is invalid
            }
        }
    }

printf("\n");

     printf("Enter elements of second 3x3 matrix(9 elements):\n");
    for(int i=0;i<3;i++){               //rows
        for(int j=0;j<3;j++){           // cols
            if(scanf("%d",&matrix2[i][j])!=1){
                printf("Invalid input!");
                return 0; // Exit the program if input is invalid
            }
        }
    }

printf("\n");

// output

printf("\nThe Summation of two matrix is given by below:\n\n");
for(int i=0;i<3;i++){               //rows
        for(int j=0;j<3;j++){           // cols
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t",sum_matrix[i][j]);

            if(j==2){
                printf("\n");
            }
        }
    
        printf("\n");

  
    }

      return 0;
}
