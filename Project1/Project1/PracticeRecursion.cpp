/*
递归函数练习

有5个人坐在一起，
问第5个人多少岁？他说比第4个人大2岁。
问第4个人岁数，他说比第3个人大2岁。
问第3个人，又说比第2人大两岁。
问第2个人，说比第1个人大两岁。
最后 问第1个人，他说是10岁。
请问第5个人多大？

程序分析：

利用递归的方法，递归分为回推和递推两个阶段。
要想知道第5个人岁数，需知道第4人的岁数，依次类推，推到第1人（10岁），再往回推。

*/

#include <stdio.h> 
/*
 * 请使用递归函数完成本题
 */
int personAge(int n, int age)
{
	age += 2;//年龄每递归一次就加2
	n++;//换人
	if (n == 5)
	{
		return age;//结束条件
	}
	else
	{
		personAge(n, age);//递归自己，计算年龄
	}
}

int main()
{
	int n = 1;//从第一个人开始
	int firstAge = 10;//第一个人年龄为10
	int fiveAge = personAge(n, firstAge);//递归的结果赋予第五个人，表示其年龄
	printf("第5个人的年龄是%d岁", fiveAge);
	return 0;
}