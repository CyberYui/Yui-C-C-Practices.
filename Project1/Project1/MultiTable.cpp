/*����3
��ʹ��forѭ���������ӡ9*9�˷�������ӡ���������ʾ��
9*1=9  9*2=18  9*3=27  9*4=36  9*5=45  9*6=54  9*7=63  9*8=72  9*9=81
8*1=8  8*2=16  8*3=24  8*4=32  8*5=40  8*6=48  8*7=56  8*8=64
7*1=7  7*2=14  7*3=21  7*4=28  7*5=35  7*6=42  7*7=49
6*1=6  6*2=12  6*3=18  6*4=24  6*5=30  6*6=36
5*1=5  5*2=10  5*3=15  5*4=20  5*5=25
4*1=4  4*2=8  4*3=12  4*4=16
3*1=3  3*2=6  3*3=9
2*1=2  2*2=4
1*1=1
���������
�۲�˺����ߵ����֣�ǰ���ǵݼ��������ǵ�����
*/

#include <stdio.h>
int main()
{
	// �����������i,j�Լ����result
	int i, j, result;
	/*
	 * ʹ��forѭ�����������Լ�Ŷ~
	 * С��͵͵�Ľ�Դ��������񡰲�������ô�족����Ŷ~
	 * С��ϣ��ͯЬ�Ƕ������Ŷ~
	 */
	for (i = 9; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", i, j, result = i * j);
		}
		printf("\n");
	}
	return 0;
}