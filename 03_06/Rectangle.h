#pragma once
#include "Shape.h"

class Rectangle : public IShape
{
public:		//�����o�֐�
	//�ʐς̌v�Z
	void size() override;

	//�ʐς̒l�̕`��
	void draw() override;

private:	//�����o�ϐ�
	//�c
	int y = 5;

	//��
	int x = 8;

	//����������ϐ�
	int ans = 0;
};
