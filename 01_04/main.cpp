#include <stdio.h>
#include <windows.h>
#include<time.h>
#include<functional>


typedef void (*PFunc)(int,int);

int number;
int num;

void DispResult(int number, int random) {
	printf("�T�C�R���̖ڂ�%d�I�I\n", random);

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

	printf("�T�C�R���̖ڂ�����������\�z����\n");
	printf("1��2�������Ȃ����B�@��Ȃ�1�@�����Ȃ�2\n");
	scanf_s("%d", &number);

	PFunc p;
	p = DispResult;
	SetTimeout(p, 3,number,num(random));

	return 0;
}