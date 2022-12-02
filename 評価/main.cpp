#include <stdio.h>
#include<stdlib.h>

typedef struct cell
{
	int val;
	struct cell* next;
}CELL;

void create(CELL* List, int val);
void index(CELL* List);

int main()
{
	int val;
	//æ“ª‚ÌƒZƒ‹‚ðéŒ¾
	CELL head;
	head.next = nullptr;

	while (true)
	{
		printf("\n");
		printf("”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

		printf("“ü—Í‚µ‚½”ŽšF");
		scanf_s("%d\n", &val);

		create(&head, val);

		index(&head);
	}
	return 0;
}

void create(CELL* List, int val) {
	CELL* NewCell;
	NewCell = (CELL*)malloc(sizeof(CELL));

	
	NewCell->val = val;
	NewCell->next = nullptr;

	while (List->next != nullptr) {
		List = List->next;
	}
	List->next = NewCell;
}

void index(CELL* list)
{
	while (list->next != nullptr)
	{
		list = list->next;
		printf("[%d]", list->val);
		
	}
}
