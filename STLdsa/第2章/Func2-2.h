//Func2-2.h ��֤�������Ա������������
void main()
{
	bool i;
	T d;
	for(int k=0; k<5; k++)
		assert(Q.EnQueue(k));
	cout<<"���5��Ԫ�غ󣬶��е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
	cout<<"�Ƿ�ն��У�"<<boolalpha<<Q.QueueEmpty();
	cout<<"�����еĳ���Ϊ"<<Q.QueueLength()<<endl;
	Q.DeQueue(d);
	cout<<"�����˶�ͷԪ�أ���ֵΪ"<<d;
	i=Q.GetHead(d);
	if(i==true)
		cout<<"���µĶ�ͷԪ����"<<d<<endl;
	Q.ClearQueue();
	cout<<"��ն��к��Ƿ�ն��У�"<<boolalpha<<Q.QueueEmpty();
	cout<<"�����еĳ���Ϊ"<<Q.QueueLength()<<endl;
}

