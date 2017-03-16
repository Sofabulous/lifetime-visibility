// homework1_1.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include <iostream>
using namespace std;
static int y=1;//静态全局变量-------------生命周期和可用范围用法一
extern int x;//extern修饰的全局变量-------------生命周期和可用范围用法二
extern void testextern();//extern修饰的函数声明,实现了函数的跨文件调用-------------生命周期和可用范围用法三
void static testlifetime()//-------------生命周期和可用范围用法四
{
	cout << "函数testlifetime第" << y << "调用" << endl;
	int z = 1;//普通局部变量//-------------生命周期和可用范围用法五
	static int n = 1;//静态局部变量//-------------生命周期和可用范围用法六
	extern int m;//extern修饰的局部变量,只能声明,不能初始化(可以理解为外部变量的局部声明)//-------------生命周期和可用范围用法七
	z++;
	y++;
	n++;
	x++;
	m++;
	cout << "普通局部变量z:" << z<<endl;  //只有函数调用期间才存在
	cout << "静态全局变量y:" << y << endl;//具有较长的生命期，程序结束才释放空间
	cout << "静态局部变量n:" << n << endl;//这里可以看到静态局部变量尽管作用域只在语句块中，但它与全局变量具有相同的生命周期
	cout << "extern修饰的全局变量x:" << x << endl;//全局变量，并能够在不同的源文件中调用
	cout << "extern修饰的局部变量m:" << m << endl;//具有全局变量的特征，并能够在不同的源文件中调用
	cout << "-----------------------------------------------" << endl;
	testextern();
};
int main()
{
	testlifetime();
	testlifetime();
	testlifetime();
	system("pause");
    return 0;
}

