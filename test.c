#include "SList.h"

void test()
{
	LNode* p = NULL;
	SListPushBack(&p, 1);
	SListPushBack(&p, 2);
	SListPushBack(&p, 3);
	SListPushBack(&p, -5);
	printSL(p);
	SListPopBack(&p);
	SListPushBack(&p, 2);
	SListPopBack(&p);
	SListPushBack(&p, 2);
	SListPopBack(&p);
	SListPopBack(&p);
	SListPushBack(&p, 35);
	SListPopBack(&p);
	SListPushBack(&p, 2);
	SListPushBack(&p, 35);
	SListPushBack(&p, 35);
	printSL(p);
	SListPushFront(&p, 1);
}
void test02()
{

	LNode* p = NULL;
	SListPushFront(&p, 1);


}


int main()
{
	test();
	test02();


	return 0;
}