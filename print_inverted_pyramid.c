#include <stdio.h>

/* 下を向いたn段の数字ピラミッドを表示する関数 */
void nrpira(int n)
{
    int i, j;

    /* 第i行目に表示する数字はi % 10によって求める*/
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i - 1; j++) {
            putchar(' ');
        }
        for(j = 1; j <= (n - i) * 2 + 1; j++) {
            printf("%d", i % 10);
        }
        putchar('\n');
    }
}

/* メイン */
int main(void)
{
    int n;

    do
    {
        printf("段数を入力 : ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("%d段のピラミッド : \n", n);
    nrpira(n);

    return 0;
}