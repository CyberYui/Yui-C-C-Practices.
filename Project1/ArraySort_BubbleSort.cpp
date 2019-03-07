/*任务19

小明班级有10人要参加比赛，进场时要按大小个升序排队，老师要用冒泡排序写一个小程序进行排序

在代码编辑器中老师给出了部分代码，请把他完成

在编辑器中

第18、21、22、23行填写代码

运行结果为

	************排队前*************
	1.78, 1.77, 1.82, 1.79, 1.85, 1.75, 1.86, 1.77, 1.81, 1.80
	************排队后*************
	1.75, 1.77, 1.77, 1.78, 1.79, 1.80, 1.81, 1.82, 1.85, 1.86

*/
#include <stdio.h>
int main()
{
	double arr[] = { 1.78, 1.77, 1.82, 1.79, 1.85, 1.75, 1.86, 1.77, 1.81, 1.80 };
	int i, j;//由于四个for循环中都要用i或j，先定义，之后就能少写点代码
	printf("\n************排队前*************\n");//分隔符
	for (i = 0; i < 10; i++)//遍历排序前的数组
	{
		//除了第十个数，剩下的输出时都带个逗号
		if (i != 9)
			printf("%.2f, ", arr[i]);  //%.2f表示小数点后精确到两位
		else
			printf("%.2f", arr[i]);    //%.2f表示小数点后精确到两位
	}
	//开始排序(冒泡排序)
	for (i = 8; i >= 0; i--)//从倒数第二位开始排起，每轮回一次，都把最大的定在最后一位
	{
		for (j = 0; j <= i; j++)//每次轮回，都从第一个数开始比起，直到此次轮回的最后一位
		{
			if (arr[j] > arr[j + 1])//当前面的数比后面的数大时，满足条件开始交换
			{
				double temp;			//定义临时变量temp
				temp = arr[j];			//将前面的数赋值给temp，此时前面数所在的位置多余
				arr[j] = arr[j + 1];    //前后之数颠倒位置，将后面数的值传到前面的位置
				arr[j + 1] = temp;      //将较大的数放在后面，实现前后数交换
			}
			//若后面的数本来就比前面的大，则不用交换
		}
	}
	printf("\n************排队后*************\n");//分隔符
	for (i = 0; i < 10; i++)//遍历排序完成后的数组
	{
		if (i != 9)
			printf("%.2f, ", arr[i]);  //%.2f表示小数点后精确到两位     
		else
			printf("%.2f", arr[i]);    //%.2f表示小数点后精确到两位
	}
	return 0;
}