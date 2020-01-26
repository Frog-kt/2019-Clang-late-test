// VS2019のコンパイラでエラーが発生するため宣言
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s;

	int size = 64;

	//1文字オーバーの可能性があるため64バイト+1バイト
	s = (char *)malloc(size + 1);

	// エラーチェック
	if (s == NULL)
	{
		exit(EXIT_FAILURE);
	}

	// 代入
	strcpy(s, "abcdefg");

	// 出力
	printf("%s", s);

	// メモリ開放
	free(s);

	return 0;
}