#include <stdio.h>

int main(void) {
  int m,n,i,j,a,wyraz;
  int macierz[10][10];
  int wynik;
  printf("Wpisz liczbę wierszy macierzy: \n");
  scanf("%d", &m);
  printf("Wpisz liczbę kolumn macierzy: \n");
  scanf("%d", &n);
  printf("Wpisz liczbę przez którą chcesz pomnożyć macierz: \n");
  scanf("%d", &a);

  for (i=0; i<m; i++){
    for(j=0; j<n; j++){
      printf("Podaj elementy macierzy: \n");
      scanf("%d", &macierz[i][j]);
    }
  }
  printf("Macierz wynosi :\n");
  
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      wynik = (macierz[i][j])*(a);
      printf("%d ", wynik);
    }
    printf("\n");
  }
  return 0;
}