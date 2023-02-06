#pragma once
#include "Shape.h"

class Rectangle : public IShape
{
public:		//ƒƒ“ƒoŠÖ”
	//–ÊÏ‚ÌŒvZ
	void size() override;

	//–ÊÏ‚Ì’l‚Ì•`‰æ
	void draw() override;

private:	//ƒƒ“ƒo•Ï”
	//c
	int y = 5;

	//‰¡
	int x = 8;

	//“š‚¦‚ğ“ü‚ê‚é•Ï”
	int ans = 0;
};
