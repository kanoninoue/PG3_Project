#include "Enemy.h"
#include <stdio.h>

int main()
{
	Enemy* enemy = new Enemy();
	int input;

	while (true)
	{
		printf("0:exit 1:continue==>");
		scanf_s("%d", &input);
		if (input == 3)break;

		enemy->Updata();
		enemy->Draw();
	}

	return 0;
}
