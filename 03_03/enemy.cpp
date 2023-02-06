#include "Enemy.h"
#include <stdio.h>
void (Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::proximity,//‹ßÚ
	&Enemy::shooting,//ŽËŒ‚
	&Enemy::elimination//—£’E
};

Enemy::Enemy()
{
	phase_ = 0;
}

Enemy::~Enemy() {

}

void Enemy::proximity() {
	printf("‹ßÚ\n");
}

void Enemy::shooting() {
	printf("ŽËŒ‚\n");
}

void Enemy::elimination() {
	printf("—£’E\n");
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