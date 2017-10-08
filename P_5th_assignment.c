#include <stdio.h>

 void Mult_Matrix(int Matrix1[10][10], int Matrix2[10][10], int Mult[10][10], int r1, int c1, int r2, int c2)
 { int i, j, k;  
 
   for(i = 0; i < r1; i++){ 
    for (j = 0; j < c2; j++){ 
     Mult[i][j] = 0; 
    } 
   } 

   for (i = 0; i < r1; i++){
    for (j = 0; j < c2; j++){
     for (k = 0; k < c1; k++){ 
      Mult[i][j] =  Mult[i][j] + (Matrix1[i][k] * Matrix2[k][j]); 
     } 
    } 
   }
 }
  
 void Result(int Mult[10][10], int r1, int c2) 
 { int i, j; 
   printf("\nResult Matrix: %d * %d\n\n", r1, c2);
 
   for(i = 0; i < r1; i++){
    for (j = 0; j < c2; j++){ 
     printf(" %d", Mult[i][j]); 
     if (j == c2 - 1){ 
      printf("\n\n"); 
     } 
   } 
 } 
}

 int main(void)
{ void Mult_Matrix(int Matrix1[10][10], int Matrix2[10][10], int Mult[10][10], int r1, int c1, int r2, int c2); 
  void Result(int Mult[10][10], int r1, int c2); 

  int Matrix1[10][10], r1, c1, i, j, k;
  int Matrix2[10][10], r2, c2, Mult1[10][10];
  int Matrix3[10][10], r3, c3, Mult2[10][10]; 
  int Matrix4[10][10], r4, c4, Mult3[10][10]; 
  int Matrix5[10][10], r5, c5 ,Mult4[10][10]; 
  int Matrix6[10][10], r6, c6, Mult5[10][10]; 
 
  printf("Enter rows and columns for Matrix1: "); 
  scanf("%d %d", &r1, &c1); 
 
  printf("Enter rows and columns for Matrix2: "); 
  scanf("%d %d", &r2, &c2);  

  printf("Enter rows and columns for Matrix3: "); 
  scanf("%d %d", &r3, &c3); 
 
  printf("Enter rows and columns for Matrix4: "); 
  scanf("%d %d", &r4, &c4); 

  printf("Enter rows and columns for Matrix5: "); 
  scanf("%d %d", &r5, &c5); 
 
  printf("Enter rows and columns for Matrix6: "); 
  scanf("%d %d", &r6, &c6); 
 
 
  while ((c1 != r2) && (c2 != r3) && (c3 != r4) && (c4 != r5) && (c5 != r6)){ 
   printf("Error!\n"); 
 
   printf("Enter rows and columns for Matrix1: "); 
   scanf("%d %d", &r1, &c1); 
 
   printf("Enter rows and columns for Matrix2: "); 
   scanf("%d %d", &r2, &c2); 
 		 
   printf("Enter rows and columns for Matrix3: "); 
   scanf("%d %d", &r3, &c3); 
 
   printf("Enter rows and columns for Matrix4: "); 
   scanf("%d %d", &r4, &c4); 
 
   printf("Enter rows and columns for Matrix5: "); 
   scanf("%d %d", &r5, &c5); 
 
   printf("Enter rows and columns for Matrix6: "); 
   scanf("%d %d", &r6, &c6); 
 } 
 	  

  printf("\nEnter elements of Matrix1 : \n\n"); 
   for (i = 0; i < r1; i++){ 
    for (j = 0; j < c1; j++){ 
 	 printf("Enter elements Matrix1[%d][%d]: ", i + 1, j + 1); 
 	 scanf(" %d", &Matrix1[i][j]);
    } 
   }
  
   printf("\nEnter elements of Matrix2 : \n\n"); 
   for (i = 0; i < r2; i++){ 
    for (j = 0; j < c2; j++){ 
 	 printf("Enter elements Matrix2[%d][%d]: ", i + 1, j + 1); 
 	 scanf(" %d", &Matrix2[i][j]);
    } 
   }
  
  printf("\nEnter elements of Matrix3 : \n\n"); 
   for (i = 0; i < r3; i++){ 
    for (j = 0; j < c3; j++){ 
 	 printf("Enter elements Matrix3[%d][%d]: ", i + 1, j + 1); 
 	 scanf(" %d", &Matrix3[i][j]);
    } 
   }
  
 printf("\nEnter elements of Matrix4 : \n\n"); 
   for (i = 0; i < r4; i++){ 
    for (j = 0; j < c4; j++){ 
 	 printf("Enter elements Matrix4[%d][%d]: ", i + 1, j + 1); 
 	 scanf(" %d", &Matrix4[i][j]);
    } 
   }
 
 printf("\nEnter elements of Matrix5 : \n\n"); 
   for (i = 0; i < r5; i++){ 
    for (j = 0; j < c5; j++){ 
 	 printf("Enter elements Matrix5[%d][%d]: ", i + 1, j + 1); 
 	 scanf(" %d", &Matrix5[i][j]);
    } 
   }
  
 printf("\nEnter elements of Matrix6 : \n\n"); 
   for (i = 0; i < r6; i++){ 
    for (j = 0; j < c6; j++){ 
 	 printf("Enter elements Matrix6[%d][%d]: ", i + 1, j + 1); 
 	 scanf(" %d", &Matrix6[i][j]);
    } 
   }
 
 printf("\nA1: %d * %d\n\n",r1, c1);
   for(i=0; i<r1; i++){
    for(j=0; j<c1; j++){
	 printf(" %d", Matrix1[i][j]);
	 if(j == c1-1){
	 printf("\n\n");
	}
   }
  }

  printf("\nA2: %d * %d\n\n",r2, c2);
   for(i=0; i<r2; i++){
    for(j=0; j<c2; j++){
	 printf(" %d", Matrix2[i][j]);
	 if(j == c2-1){
	 printf("\n\n");
	}
   }
  }


  printf("\nA3: %d * %d\n\n",r3, c3);
   for(i=0; i<r3; i++){
    for(j=0; j<c3; j++){
	 printf(" %d", Matrix3[i][j]);
	 if(j == c3-1){
	 printf("\n\n");
	}
   }
  }


  printf("\nA4: %d * %d\n\n",r4, c4);
   for(i=0; i<r4; i++){
    for(j=0; j<c4; j++){
	 printf(" %d", Matrix4[i][j]);
	 if(j == c4-1){
	 printf("\n\n");
	}
   }
  }


  printf("\nA5: %d * %d\n\n",r5, c5);
   for(i=0; i<r5; i++){
    for(j=0; j<c5; j++){
	 printf(" %d", Matrix5[i][j]);
	 if(j == c5-1){
	 printf("\n\n");
	}
   }
  }

  printf("\nA6: %d * %d\n\n",r6, c6);
   for(i=0; i<r6; i++){
    for(j=0; j<c6; j++){
	 printf(" %d", Matrix6[i][j]);
	 if(j == c6-1){
	 printf("\n\n");
	}
   }
  }

  Mult_Matrix(Matrix1, Matrix2, Mult1, r1, c1, r2, c2); 
  Mult_Matrix(Mult1, Matrix3, Mult2, r1, c2, r3, c3); 
  Mult_Matrix(Mult2, Matrix4, Mult3, r1, c3, r4, c4);
  Mult_Matrix(Mult3, Matrix5, Mult4, r1, c4, r5, c5); 
  Mult_Matrix(Mult4, Matrix6, Mult5, r1, c5, r6, c6); 
 
  Result(Mult5, r1, c6); 


	return 0;
}