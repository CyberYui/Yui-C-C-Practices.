/*
任务13

下面这段代码分别定义了全局变量int x=77和局部变量int x=10;期望的运行结果是：

	if语句内, x=50
	main方法内, x=10
	fn1(): x=77

在代码编辑器中：

第12行中添加一个变量类型，使其结果和期望运行结果一样。

*/
#include <stdio.h>
int x = 77;
void fn1()
{
	printf("fn1(): x=%d\n", x);//这里使用全局变量x
}
int main()
{
	int x = 10;
	//如果在if的复合语句中没有重新定义x，则会使用离if逻辑最近定义的x，即int x=10的这个x
	//这样，在if中即改变了x的值从10变为100，做完计算跳出if复合语句时x=50
	//也就是说main函数中的局部变量int x=10值变成了50
	//这样在main函数中输出的x使用离自己最近定义的x，而此时x已经变为50了，故输出了50
	if (x > 0)
	{
		int x = 100;//唯一需要修改的地方在这里
		//在这里重新定义了if复合语句中的局部变量x，其值为100，
		//这个x与main函数中的局部变量x=10以及全局变量x=77无关
		x /= 2;
		printf("if语句内, x=%d\n", x);//这里使用if符合语句中定义的局部变量x
	}

	printf("main方法内, x=%d\n", x);//这里使用main函数中的局部变量x
	fn1();
	return 0;
}