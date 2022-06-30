#include <stdio.h>
#include <math.h>
int main() {
  double a, b, c, p, res;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  p=(a+b+c)/2;
  res=sqrt(p*(p-a)*(p-b)*(p-c));
  printf("%.2f", res);
  return 0;
}