#include <stdio.h>
#include <windows.h>
#include<time.h>
#include<functional>


typedef void (*PFunc)(int,int);

int number;
int num;

void DispResult(int number, int random) {
	printf("サイコロの目は%d！！\n", random);

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

void SetTimeout(PFunc p, int second,int number,int random) {
	Sleep(second * 1000);

	p(number,random);
}

int main(int argc,const char *argv[]) {

	int number = 0;
	int random = 0;

	srand(time(NULL));
	std::function<int(int)> num = [](int) {return rand() % 6 + 1; };

	num(random);

	printf("サイコロの目が奇数か偶数か予想せよ\n");
	printf("1か2を押しなさい。　奇数なら1　偶数なら2\n");
	scanf_s("%d", &number);

	PFunc p;
	p = DispResult;
	SetTimeout(p, 3,number,num(random));

	return 0;
}