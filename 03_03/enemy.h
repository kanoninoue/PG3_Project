#pragma once
#include <stdio.h>
class Enemy
{
public:

	Enemy();
	~Enemy();

	//自作メンバ関数
	void proximity();
	void shooting();
	void elimination();

	void Updata();

	void Draw();
private:
	//メンバ関数ポインタ
	static void (Enemy::* pFuncTable[])();

	int phase_;
};