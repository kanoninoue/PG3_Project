#include "Circle.h"
#include <stdio.h>

void Circle::size()
{
	ans = radius * radius * pai;
}

void Circle::draw()
{
	printf("â~ÇÃñ êœ: %f\n", ans);
}