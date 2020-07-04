#include <stdio.h>

/* プロトタイプ宣言 */
void spira(int n);

/* メイン */
int main(void)
{
    int n;

    printf("n段のピラミッドを表示します\n");

    /* 段数入力部分 */
    do {
        printf("段数 : ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("%d 段のピラミッド\n", n); spira(n);

    return 0;
}

/* ピラミッドを表示する関数 */
void spira(int n)
{
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++){
            putchar(' ');
        }
        for(j = 1; j <= (i - 1) * 2 + 1; j++) {
            putchar('*');
        }
        /* この部分は不要
        for(j = 1; j <= n - i; j++){
            putchar(' ');
        }
        */
        putchar('\n');
    }
}