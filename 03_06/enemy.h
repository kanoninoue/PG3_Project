#pragma once
#include <stdio.h>
class Enemy
{
public:

	Enemy();
	~Enemy();

	//���상���o�֐�
	void proximity();
	void shooting();
	void elimination();

	void Updata();

	void Draw();
private:
	//�����o�֐��|�C���^
	static void (Enemy::* pFuncTable[])();

	int phase_;
};