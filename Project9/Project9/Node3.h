#ifndef NODETHIRD_H
#define NODETHIRD_H

//�����struct������,����Ҫ��дpublic,��ΪĬ�ϵľ���public
class Node
{
	//������������
	/*friend ostream &operator<<(ostream &out, Node &node);*/
public:
	//дһ�����������������
	void printNode();
	//���������ָ����д��public��ԭ�������������޸�����
	//������Ҫ��private������Ҫдר�ŵĺ������ڷ��ʲ���
	int data;//������
	Node *next;//ָ����,ָ����һ�����
};

#endif // NODETHIRD_H