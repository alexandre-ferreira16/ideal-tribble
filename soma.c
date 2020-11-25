#include <stdio.h>

int subtracao(int a, int b) {
  return a - b;
}

int main() {
  int a, b;
  int s;

  scanf("%d", &a);
  scanf("%d", &b);

  s = a + b;
  printf("soma = %d\n", s);

  printf("subtracao = %d\n", subtracao(a,b));

  return 0;
}
