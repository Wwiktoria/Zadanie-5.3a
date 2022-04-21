#include <stdio.h>

int main(void) {
  int n,m,a,i,j;
  int macierz_1[i][j];
  int macierz_2[i][j];
  
  printf("Wprowadź liczbę wierszy:\n");
  scanf("%d",&n);
  printf("Wprowadź liczbę kolumn:\n");
  scanf("%d",&m);
 
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("Wpisz liczbę: ");
      scanf("%d",&macierz_1[i][j]);
    
    }
    
  }

   printf("Wpisz liczbę przez którą chcesz pomnożyć macierz: \n");
  scanf("%d",&a);

   for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      macierz_2[i][j]=macierz_1[i][j]*a;
      }}
  
printf("Nowa macierz to:");
  
  for(i=0;i<=0;i++){
    for(j=0;j<m;j++){
      printf("%d", macierz_2[i][j]);
      }}
  
  return 0;
}