/*
����13

������δ���ֱ�����ȫ�ֱ���int x=77�;ֲ�����int x=10;���������н���ǣ�

	if�����, x=50
	main������, x=10
	fn1(): x=77

�ڴ���༭���У�

��12��������һ���������ͣ�ʹ�������������н��һ����

*/
#include <stdio.h>
int x = 77;
void fn1()
{
	printf("fn1(): x=%d\n", x);//����ʹ��ȫ�ֱ���x
}
int main()
{
	int x = 10;
	//�����if�ĸ��������û�����¶���x�����ʹ����if�߼���������x����int x=10�����x
	//��������if�м��ı���x��ֵ��10��Ϊ100�������������if�������ʱx=50
	//Ҳ����˵main�����еľֲ�����int x=10ֵ�����50
	//������main�����������xʹ�����Լ���������x������ʱx�Ѿ���Ϊ50�ˣ��������50
	if (x > 0)
	{
		int x = 100;//Ψһ��Ҫ�޸ĵĵط�������
		//���������¶�����if��������еľֲ�����x����ֵΪ100��
		//���x��main�����еľֲ�����x=10�Լ�ȫ�ֱ���x=77�޹�
		x /= 2;
		printf("if�����, x=%d\n", x);//����ʹ��if��������ж���ľֲ�����x
	}

	printf("main������, x=%d\n", x);//����ʹ��main�����еľֲ�����x
	fn1();
	return 0;
}