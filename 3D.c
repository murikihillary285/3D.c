//arrays in c - 3D arrays 
#include <stdio.h>
int main () {
    int i,j,k;
   int marks [2][2][3]= { {50,90,60} , {40,70,40} , {40,70,40 }};
   for(i=0; i<2; i++)
    for(j=0;j<2;j++)
     for(k=0; k<3; k++){
   printf("marks[%d][%d][%d]=%d \n",i,j,marks[i][j][k]);
   }
 return  0;
 }