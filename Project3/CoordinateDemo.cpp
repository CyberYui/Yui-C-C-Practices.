#include <iostream>
#include <stdlib.h>
#include "CoordinateDemo.h"
using namespace std;

/************************************************************************/
/*    对象数组                                                          */
/*      要求：                                                          */
/*          定义Coordinate类                                            */
/*      数据成员：m_iX和m_iY                                            */
/*                                                                      */
/*      分别从栈和堆中实例化长度为3的对象数组		                    */
/*      给数组中的元素分别赋值			                                */
/*      遍历两个数组                                                    */
/************************************************************************/
int main(void)
{
	//从栈上实例化数组
	Coordinate coor[3];
	coor[0].m_iX = 20;
	coor[0].m_iY = 5;
	//从堆上实例化数组
	Coordinate *p = new Coordinate[3];
	p->m_iX = 15;//这样不给p赋值，是直接赋值给第一个元素对象
	p[0].m_iY = 9;
	//接下来赋值给堆数组的第二个元素对象
	p++;//p=p+1  p+=1是一个意思
	p->m_iX = 12;
	p[1].m_iY = 11;//这样控制的是第三个元素,主要看指针指哪里
	//此时如果想再用p[0].m_iX给第一个元素对象赋值就不行了，因为指针指向已经变了
	p[0].m_iY = 14;//这样控制的是第二个元素
	p++;
	p->m_iX = 10;
	//到这里，有以下点
	//栈中:(20,5)  堆中:(15,9)(12,14)(10,11)
	//接下来遍历栈中的元素对象
	cout << "遍历栈中的元素对象:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i << "个元素:" << endl;
		cout << "coor_[" << i << "]x: " << coor[i].m_iX << endl;
		cout << "coor_[" << i << "]y: " << coor[i].m_iY << endl;
	}
	cout << "遍历栈中的元素对象结束。。。" << endl;
	//接下来遍历第二个数组
	//B:此时p指针已经变位置了，要先改回来,之前p++两次，现在就p--两次
	p--;
	p--;
	//A:用A计划时记得把B计划的内容都注释掉
	cout << "************分隔符************" << endl;
	cout << "遍历堆中的元素对象:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i << "个元素:" << endl;
		cout << "p[" << i << "]x: " << p->m_iX << endl;
		cout << "p[" << i << "]y: " << p->m_iY << endl;
		//A:可以用p--;来实现对数组元素的遍历
		//A:注意！最后一次p--之后，会跳到申请的内存区的上一区块，则要用计划A
		p++;//B:p不随i变，所以要添加这一句让p每次都向后挪一位
	}//循环体一共执行3次
	//遍历结束后p指向下一区块，故要利用一个循环让p回归原点
	for (int i = 0; i < 3 ; i++)
	{
		p--;
	}
	//此时p回归原点了
	cout << "遍历堆中的元素对象结束。。。" << endl;
	/*  PLan A
		//因为p指向了上一区块，故p++一次,回到原点
		p++;
		//释放内存
		delete []p;
		p=NULL;
	*/
	delete[]p;
	p = NULL;

	system("pause");

	return 0;
}
/*CMD.exe************************************************************************/
/*	Coordinate()//    程序开始，在栈上实例化一个对象数组，包含三个对象元素，调用*/
/*	Coordinate()//三次构造函数													*/
/*	Coordinate()																*/
/*	Coordinate()//在堆上实例化一个对象数组，包含三个对象元素，调用三次构造函数  */
/*	Coordinate()																*/
/*	Coordinate()//实例化完成													*/
/*	遍历栈中的元素对象://由于只给第一个对象元素赋值了，所以其他两个会显示异常数 */
/*	第0个元素:																	*/
/*	coor_[0]x: 20																*/
/*	coor_[0]y: 5																*/
/*	第1个元素:																	*/
/*	coor_[1]x: -858993460														*/
/*	coor_[1]y: -858993460														*/
/*	第2个元素:																	*/
/*	coor_[2]x: -858993460														*/			
/*	coor_[2]y: -858993460														*/
/*	遍历栈中的元素对象结束。。。//栈中对象遍历完毕								*/
/*	************分隔符************												*/
/*	遍历堆中的元素对象://遍历堆中对象											*/
/*	第0个元素:																	*/
/*	p[0]x: 15																	*/
/*	p[0]y: 9																	*/
/*	第1个元素:																	*/
/*	p[1]x: 12																	*/
/*	p[1]y: 14																	*/
/*	第2个元素:																	*/
/*	p[2]x: 10																	*/
/*	p[2]y: 11																	*/
/*	遍历堆中的元素对象结束。。。												*/
/*	~Coordinate()//释放内存，调用析构函数销毁栈中对象							*/
/*	~Coordinate()																*/
/*	~Coordinate()																*/
/*	请按任意键继续. . .//system("pause");										*/
/*	~Coordinate()//调用析构函数销毁堆中对象										*/
/*	~Coordinate()																*/
/*	~Coordinate()																*/
/********************************************************************************/