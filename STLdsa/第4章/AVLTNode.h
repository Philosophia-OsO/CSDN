//AVLTNode.h ƽ��������Ľ�����ͽṹ��
#ifndef _AVLTNODE_H_
#define _AVLTNODE_H_
template<typename T>struct AVLTNode
{
	T data;
	int bf;
	AVLTNode<T> *lchild, *rchild;
};
#endif

