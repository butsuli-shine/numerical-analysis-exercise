// coding-UTF-8
// kadai16 台形公式による数値積分

#include <stdio.h>
#include <math.h>

#define N 30// 積分刻み数N

#define f(x) (((x)*(x)*(x)*(x)) + 2*x)// f(x)のdefine定義

int main()
{
    double y[N+1];// f(x)の値を格納するdouble型配列
    double xa = 0.0, xb = 3.0;// 積分区間の設定
    double z = 0.0, h = 0.0, x, s;

    h = (xb -xa) / (double)N;

    // 数値積分
    for (int i = 0; i <= N; i++){
        x = xa + (h * (double) i);
        y[i] = f(x);
    }

    // 結果の和
    for (int i = 1; i < N; i++){
        z += 2.0 * y[i];
    }

    s = (h / 2.0) * (y[0] + z + y[N]);

    printf("ANS = %8.4lf\n", s);

    return 0;
}
