#include <stdio.h>
 
int main(){
    double x1, y1, x2, y2, X, Y;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    X = x1 + x2;
    Y = y1 + y2;
    
    if( X > -0.05 && X<0.0 )
        X = 0;
    
    if( Y > -0.05 && Y<0.0 )
        Y = 0;
    
    printf("(%.1f, %.1f)", X, Y);
    
    return 0;
}