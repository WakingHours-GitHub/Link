#include "mylink.h"

Link* linkCreate(int n) {

	Link* head, * p1, * p2;
	if (!(p1 = p2 = (Link*)malloc(LEN(Link)))) return NULL;
	head = p1;
	int i = 0;
	for (i = 0; i < n - 1; i++) {
		if (!(p1 = (Link*)malloc(LEN(Link)))) return NULL;
		p2->next = p1;
		p2->data = i;
		p2 = p1;
	}
	p1->data = i;
	p1->next = NULL; // 为最后一个节点的next为NULL

	return head;

}
/// <summary>
/// 链表遍历
/// </summary>
/// <param name="head"></param>
void linkTraverse(Link* head) {
	Link* p = NULL;
	if (!(p = head)) {
		printf("NULL\n");
			return;
	}
	printf("head -> ");

	while (p) {
		printf("%d -> ", p->data);
		p = p->next;
	}

	printf("null\n");
}
/// <summary>
/// 根据序号查找节点
/// </summary>
/// <param name="head">需要查找的链表</param>
/// <param name="seq">查找序号</param>
/// <returns>返回序号所指节点（Node）</returns>
Link* seqFind(Link* head, unsigned int seq) {
	Link* p = head;
	for (int i = 0; i < seq; i++) {
		p = p->next;
	}
	return p;
}

void addNode(Link *head, ElementType key) {
	Link* p = head;
	while (p->next) // NULL的前一个节点
		p = p->next;
	if (!(p->next = (Link*)malloc(LEN(Link)))) return;
	p = p->next;
	p->data = key; // 当出现指针NULL为引用..说明分配内存函数没有判断
	p->next = NULL;
}
void deleteNode() {
}
