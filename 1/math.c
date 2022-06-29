#include <stdio.h>
#include <math.h>
int main(void) {
    double x1, x2, y1, y2, x, y, Xsq, Ysq, c2, res;
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);
	    printf("%.2f,%.2f,%.2f,%.2f\n", x1,x2,y1,y2);
    x=x1-x2;
    y=y1-y2;
    Xsq=pow(x,2);
    Ysq=pow(y,2);
    c2=Xsq+Ysq;
    res=sqrt(c2);
    printf("%.2f", res);
    return 0;
}