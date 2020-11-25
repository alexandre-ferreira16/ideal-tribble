#include <stdio.h>

int subtracao(int a, int b) {
  return a - b;
}

int soma(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  int s;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("soma = %d\n", soma(a,b));

  printf("subtracao = %d\n", subtracao(a,b));

  return 0;
}
