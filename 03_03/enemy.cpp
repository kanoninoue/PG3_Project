#include "Enemy.h"
#include <stdio.h>
void (Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::proximity,//�ߐ�
	&Enemy::shooting,//�ˌ�
	&Enemy::elimination//���E
};

Enemy::Enemy()
{
	phase_ = 0;
}

Enemy::~Enemy() {

}

void Enemy::proximity() {
	printf("�ߐ�\n");
}

void Enemy::shooting() {
	printf("�ˌ�\n");
}

void Enemy::elimination() {
	printf("���E\n");
}

void Enemy::Updata() {
	printf("phase_:%d", phase_);

	(this->*pFuncTable[phase_])();

	phase_++;
	if (phase_ == 3)
	{
		phase_ = 0;
	}

}

void Enemy::Draw() {
	printf("(enemy draw\n");
}