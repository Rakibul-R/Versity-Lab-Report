// Write a program that intput MxN matrix and display them with their multiplication. (Use 2D array)

#include <stdio.h>

int main() {

    int r1,c1,r2,c2;
        printf("Enter number of rows and columns of first matrix: ");
    if(scanf("%d %d",&r1,&c1)!=2){
        printf("Invalid input!");
        return 0; // Exit the program if input is invalid
        }
        printf("\nEnter number of rows and columns of second matrix: ");
    if(scanf("%d %d",&r2,&c2)!=2){
        printf("Invalid input!");   
        return 0; // Exit the program if input is invalid
        }   
        if(c1!=r2){
            printf("Error!For multiplication,column of first matrix should be equal to row of second matrix.");
            return 0; // Exit the program if dimensions are incompatible for multiplication
        }

   int matrix1[r1][c1], matrix2[r2][c2];

    printf("Enter elements of first matrix(%d elements):\n",r1*c1);
    for(int i=0;i<r1;i++){               //rows
        for(int j=0;j<c1;j++){           // cols
            if(scanf("%d",&matrix1[i][j])!=1){
                printf("Invalid input!");
                return 0; // Exit the program if input is invalid
            }
        }
    }

printf("\n");

     printf("Enter elements of second matrix(%d elements):\n",r2*c2);
    for(int i=0;i<r2;i++){               //rows
        for(int j=0;j<c2;j++){           // cols
            if(scanf("%d",&matrix2[i][j])!=1){
                printf("Invalid input!");
                return 0; // Exit the program if input is invalid
            }
        }
    }

printf("\n");

// output

int product_matrix[r1][c2]; // The resulting matrix will have dimensions r1 x c2

printf("\nThe multiplication of two matrix is given by below:\n\n");
for(int i=0;i<r1;i++){               //rows
        for(int j=0;j<c2;j++){           // cols
           product_matrix[i][j] = 0;
            for(int k=0;k<c1;k++){
                product_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t",product_matrix[i][j]);

        }
    
        printf("\n");

  
    }

      return 0;
}
