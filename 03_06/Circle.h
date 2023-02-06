#pragma once
#include "Shape.h"

class Circle : public IShape
{
public:		//ƒƒ“ƒoŠÖ”
	//–ÊÏ‚ÌŒvZ
	void size() override;

	//–ÊÏ‚Ì’l‚Ì•`‰æ
	void draw() override;

private:	//ƒƒ“ƒo•Ï”
	//”¼Œa
	float radius = 16;

	//ƒÎ
	const float pai = 3.14;

	//“š‚¦‚ğ“ü‚ê‚é•Ï”
	float ans = 0;
};
