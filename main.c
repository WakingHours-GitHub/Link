#include "mylink.h"

int main() {
	int n, seq,key;
	while (1) {
		printf("��������Ҫ��������ĸ�����\n");
		scanf_s("%d", &n);
		Link* h = linkCreate(n);

		printf("�����ڵ�����\n");
		linkTraverse(h);

		printf("��������Ҫ���ҵ����:\n");
		scanf_s("%d", &seq);

		Link* temp = seqFind(h, seq);
		printf("����ţ�seq:%d�������ǣ�%d\n", seq, temp->data);

		printf("����������Ҫ��ӵ�Ԫ�أ�\n");
		scanf_s("%d", &key);
		addNode(h, key);
		printf("�����ڵ�����\n");
		linkTraverse(h);
		
	}

	return 0;
}