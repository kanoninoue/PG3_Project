#pragma once
#include "Shape.h"

class Circle : public IShape
{
public:		//�����o�֐�
	//�ʐς̌v�Z
	void size() override;

	//�ʐς̒l�̕`��
	void draw() override;

private:	//�����o�ϐ�
	//���a
	float radius = 16;

	//��
	const float pai = 3.14;

	//����������ϐ�
	float ans = 0;
};
