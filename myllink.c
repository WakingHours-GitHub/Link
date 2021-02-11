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
	p1->next = NULL; // Ϊ���һ���ڵ��nextΪNULL

	return head;

}
/// <summary>
/// �������
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
/// ������Ų��ҽڵ�
/// </summary>
/// <param name="head">��Ҫ���ҵ�����</param>
/// <param name="seq">�������</param>
/// <returns>���������ָ�ڵ㣨Node��</returns>
Link* seqFind(Link* head, unsigned int seq) {
	Link* p = head;
	for (int i = 0; i < seq; i++) {
		p = p->next;
	}
	return p;
}

void addNode(Link *head, ElementType key) {
	Link* p = head;
	while (p->next) // NULL��ǰһ���ڵ�
		p = p->next;
	if (!(p->next = (Link*)malloc(LEN(Link)))) return;
	p = p->next;
	p->data = key; // ������ָ��NULLΪ����..˵�������ڴ溯��û���ж�
	p->next = NULL;
}
void deleteNode() {
}
