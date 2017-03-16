#include "stdafx.h"
#include <iostream>
using namespace std;
extern int x = 1;//extern修饰的全局变量
extern int m = 1;//extern修饰的全局变量
int i = 1;
extern void testlifetime();//尝试跨文件调用静态函数
extern void testextern() {
	cout << "函数testextern第" << i << "调用" << endl;
	i++;
	x++;
	m++;
	cout << "extern修饰的全局变量x:" << x << endl;
	cout << "extern修饰的局部变量m:" << m << endl;//具有全局变量的特征，并能够在不同的源文件中调用
	cout << "-----------------------------------------------" << endl;
	//testlifetime();//静态函数，无法跨文件调用，虽然通过编译但在link时出现错误
};