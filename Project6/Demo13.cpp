#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
	// 使用vector存储数字：3、4、8、4
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(8);
	vec.push_back(4);

	//循环打印数字
	vector<int>::iterator itor = vec.begin();
	for (; itor != vec.end(); itor++)
	{
		cout << *itor << endl;
	}

	// 使用map来存储字符串键值对
	map<string, string> m;
	pair<string, string> p1("S", "Shanghai");
	pair<string, string> p2("B", "Beijing");
	pair<string, string> p3("G", "Guangzhou");

	m.insert(p1);
	m.insert(p2);
	m.insert(p3);

	map<string, string>::iterator itor1 = m.begin();
	// 打印map中数据
	for (; itor1 != m.end(); itor1++)
	{
		cout << itor1->first << endl;
		cout << itor1->second << endl;
	}
	return 0;
}