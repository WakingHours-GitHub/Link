#include "mylink.h"

void test01();
void test02();

int main() {
	test02();

	return 0;
}
// ���Բ���
void test02() {
	int n, seq, key;
	
	printf("��������Ҫ��������ĸ�����\n");
	scanf_s("%d", &n);
	Link* h = linkCreate(n);
	linkTraverse(h);
	// ���Բ���
	printf("��������Ҫ�������ź���ֵ\n");
	scanf_s("%d %d", &seq, &key);
	if (!(h = insert(h, seq, key)))
		printf("����ʧ��\n");
	else
		printf("�ɹ�\n");
	linkTraverse(h);


}

void test01() {

	int n, seq, key, x;
	while (1) {
		// ���Դ�������
		printf("��������Ҫ��������ĸ�����\n");
		scanf_s("%d", &n);
		Link* h = linkCreate(n);
		// �����������
		printf("�����ڵ�����\n");
		linkTraverse(h);
		// ���Ը���������Һ���
		printf("��������Ҫ���ҵ����:\n");
		scanf_s("%d", &seq);
		// ���Ը�����Ų���
		Link* temp = NULL;
		if (!(temp = seqFind(h, seq)))
			printf("û���ҵ�\n");
		else
			printf("����ţ�seq:%d�������ǣ�%d\n", seq, temp->data);
		// ����add�������ڶ�β��ӣ�
		printf("����������Ҫ��ӵ�Ԫ�أ�\n");
		scanf_s("%d", &key);
		addNode(h, key);
		printf("�����ڵ�����\n");
		linkTraverse(h);
		// ����ɾ������(�ڶ�βɾ��)
		printf("ɾ���ڵ�\n");
		deleteNode(h);
		linkTraverse(h);
		// ���Ը������ɾ��Ԫ��
		printf("��������Ҫɾ���Ľڵ���ţ�\n");
		scanf_s("%d", &x);
		h = delSeqNode(h, x);
		linkTraverse(h);
		// ���Բ��뺯��









	}
}