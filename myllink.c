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
	// ֱ�ӱ��������жϣ���Ϊ���û���ţ���ʱpӦ����NULL
	return p;

}


Link* insert(Link* head, unsigned int seq, ElementType key) {
	Link* p = head, * temp = NULL;
	if (seq == 0) {
		if(!(temp = (Link*)malloc(LEN(Link)))) return NULL;
		temp->next = p;
		temp->data = key;
		head = temp;
		return head;
	}
	else {
		if (!(p = seqFind(p, seq - 1))) return NULL;
		
		temp = p->next;
		if (!(p->next = (Link*)malloc(LEN(Link))));
		if (!(p = p->next)) return NULL;
		p->data = key;
		p->next = temp;
		return head;
	}

}

Link*  delSeqNode(Link* head, unsigned int seq) {
	Link* p = head, *temp = NULL;
	if (seq == 0) {
		head = p->next;
		return head;
	}


	// ֱ�������Ϊseq֮ǰ�Ľڵ�
	p = seqFind(p, seq - 1);
	// temp�洢seq����һ���ڵ㣨��seq֮ǰ�����¸��ڵ㣩
	temp = p->next->next;
	p->next = temp;
	return head;
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

void deleteNode(Link * head) {
	Link* p = head;
	while (p->next->next) p = p->next;
	p->next = NULL;

}
