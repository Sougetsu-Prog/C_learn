/**
 * @sougetsu
 */
#include <stdio.h>

/* プロトタイプ宣言 */
void triangleLB(int n); /* 左下側が直角の二等辺三角形を表示する関数 */
void triangleLU(int n); /* 左上側が直角の二等辺三角形を表示する関数 */
void triangleRU(int n); /* 右上側が直角の二等辺三角形を表示する関数 */
void triangleRB(int n); /* 右下側が直角の二等辺三角形を表示する関数 */

/* メイン */
int main(void)
{
    int n;

    /* 正の整数nの入力部分 */
    do {
        printf("整数nの値を入力してください : ");
        scanf("%d", &n);
    } while(n <= 0);

    /* それぞれの関数を呼び出す */
    triangleLB(n);
    triangleLU(n);
    triangleRU(n);
    triangleRB(n);

    return 0;
}

/* 左下側が直角の二等辺三角形を表示する関数 */
void triangleLB(int n)
{
    int i, j;

    printf("左下直角の[ %d ]段の三角形\n", n);

    for(i = 0; i < n; i++) {
        for(j = 0;  j <= i; j++) {
            printf("*");
        }
        putchar('\n');
    }
}

/* 左上側が直角の二等辺三角形を表示する関数 */
void triangleLU(int n)
{
    int i, j;

    printf("左上直角の[ %d ]段の三角形\n", n);

    for(i = 1; i <= n; i++) {
        for(j = 0;  j <= n - i; j++) {
            printf("*");
        }
        putchar('\n');
    }
}

/* 右上側が直角の二等辺三角形を表示する関数 */
void triangleRU(int n)
{
    int i, j;

    printf("右上直角の[ %d ]段の三角形\n", n);

    for(i = 1; i <= n; i++) {
        for(j = 1;  j <= i - 1; j++) {
            putchar(' ');
        }
        for(j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        putchar('\n');
    }
}

/* 右下側が直角の二等辺三角形を表示する関数 */
void triangleRB(int n)
{
    int i, j;

    printf("右下直角の[ %d ]段の三角形\n", n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            putchar(' ');
        }
        for(j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}