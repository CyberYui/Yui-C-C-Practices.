/*任务2
使用双重循环实现输出正三角形，效果如下
	*
   ***
  *****
 *******
在代码编辑器中：
第8、13行根据注释提示补全所有代码
*/

#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i < 5; i++)
	{
		/* 观察每行的空格数量，补全循环条件 
		r1-->4
		r2-->3
		r3-->2
		r4-->1
		*/
		for (j = i; j < 5; j++)
		{
			/*
			当i=1时，j所在循环作为子循环，需要执行5-i=4次，即四个空格
			当i=2时，j所在循环作为子循环，需要执行5-i=3次，即三个空格
			以此类推
			直到i=4时，需要执行5-4=1次，即一个空格
			*/
			printf(" ");    //输出空格
		}
		/* 观察每行*号的数量，补全循环条件 
		r1-->1
		r2-->3
		r3-->5
		r4-->7
		*/
		for (k = 0; k < 2 * i - 1; k++)
		{
			/*
			当i=1时，k所在循环作为子循环，且在j所在子循环后执行，需要执行2*i-1=1次，即一个*
			当i=2时，k所在循环作为子循环，且在j所在子循环后执行，需要执行2*i-1=3次，即三个*
			以此类推
			直到i=4时，需要执行2*i-1=7次，即七个*
			*/
			printf("*");   //每行输出的*号
		}
		printf("\n");     //每次循环换行
	}
	return 0;
}