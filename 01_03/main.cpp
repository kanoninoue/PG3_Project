#include <stdio.h>
#include <windows.h>
#include<time.h>

typedef void (*PFunc)(int*);

int number;
int num;

void DispResult(int* s) {
	printf("�T�C�R���̖ڂ�%d�I�I\n", num);

	if (number == 1) {
		if (num % 2 == 0) {
			printf("�s�����I�c�O�ł����ˁB");
		}
		else {
			printf("����!���߂łƂ��I");
		}
	}
	if (number == 2) {
		if (num % 2 == 0) {
			printf("�����I���߂łƂ��I");
		}
		else {
			printf("�s�����I�c�O�ł����ˁB");
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

	printf("�T�C�R���̖ڂ�����������\�z����\n");
	printf("1��2�������Ȃ����B�@��Ȃ�1�@�����Ȃ�2\n");
	scanf_s("%d", &number);

	PFunc p;
	p = DispResult;
	SetTimeout(p, 3);

	return 0;
}