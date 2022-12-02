#include <stdio.h>
#include <windows.h>
#include<time.h>

typedef void (*PFunc)(int*);

int number;
int num;

void DispResult(int* s) {
	printf("サイコロの目は%d！！\n", num);

	if (number == 1) {
		if (num % 2 == 0) {
			printf("不正解！残念でしたね。");
		}
		else {
			printf("正解!おめでとう！");
		}
	}
	if (number == 2) {
		if (num % 2 == 0) {
			printf("正解！おめでとう！");
		}
		else {
			printf("不正解！残念でしたね。");
		}
	}
}

void SetTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

int main() {
	srand(time(NULL));
	num = rand() % 6 + 1;

	printf("サイコロの目が奇数か偶数か予想せよ\n");
	printf("1か2を押しなさい。　奇数なら1　偶数なら2\n");
	scanf_s("%d", &number);

	PFunc p;
	p = DispResult;
	SetTimeout(p, 3);

	return 0;
}