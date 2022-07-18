#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double calc_pow( double x, int n ){
    double pow=1;
    int i;
    if(n==0){                 //考虑n==0的情形
        return 1;
    }else if(n==1){           //基线条件
        return x;
    }else{                    //递归条件
        calc_pow(x, n-1);
        for(i=1;i<=n;i++){    //求x的n次方
            pow*=x;
        }
        return pow;
    }
}