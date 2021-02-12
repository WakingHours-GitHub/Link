#include "mylink.h"

void test01();
void test02();

int main() {
	test02();

	return 0;
}
// 测试插入
void test02() {
	int n, seq, key;
	
	printf("请输入您要创建链表的个数：\n");
	scanf_s("%d", &n);
	Link* h = linkCreate(n);
	linkTraverse(h);
	// 测试插入
	printf("请输入您要插入的序号和数值\n");
	scanf_s("%d %d", &seq, &key);
	if (!(h = insert(h, seq, key)))
		printf("插入失败\n");
	else
		printf("成功\n");
	linkTraverse(h);


}

void test01() {

	int n, seq, key, x;
	while (1) {
		// 测试创建链表
		printf("请输入您要创建链表的个数：\n");
		scanf_s("%d", &n);
		Link* h = linkCreate(n);
		// 测试链表遍历
		printf("您现在的链表：\n");
		linkTraverse(h);
		// 测试根据链表查找函数
		printf("请输入您要查找的序号:\n");
		scanf_s("%d", &seq);
		// 测试根据序号查找
		Link* temp = NULL;
		if (!(temp = seqFind(h, seq)))
			printf("没有找到\n");
		else
			printf("您序号：seq:%d的数据是：%d\n", seq, temp->data);
		// 测试add函数（在队尾添加）
		printf("请输入您想要添加的元素：\n");
		scanf_s("%d", &key);
		addNode(h, key);
		printf("您现在的链表：\n");
		linkTraverse(h);
		// 测试删除函数(在队尾删除)
		printf("删除节点\n");
		deleteNode(h);
		linkTraverse(h);
		// 测试根据序号删除元素
		printf("请输入您要删除的节点序号：\n");
		scanf_s("%d", &x);
		h = delSeqNode(h, x);
		linkTraverse(h);
		// 测试插入函数









	}
}