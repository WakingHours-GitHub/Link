#include "mylink.h"

int main() {
	int n, seq,key;
	while (1) {
		printf("请输入您要创建链表的个数：\n");
		scanf_s("%d", &n);
		Link* h = linkCreate(n);

		printf("您现在的链表：\n");
		linkTraverse(h);

		printf("请输入您要查找的序号:\n");
		scanf_s("%d", &seq);

		Link* temp = seqFind(h, seq);
		printf("您序号：seq:%d的数据是：%d\n", seq, temp->data);

		printf("请输入您想要添加的元素：\n");
		scanf_s("%d", &key);
		addNode(h, key);
		printf("您现在的链表：\n");
		linkTraverse(h);
		
	}

	return 0;
}