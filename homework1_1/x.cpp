#include "stdafx.h"
#include <iostream>
using namespace std;
extern int x = 1;//extern���ε�ȫ�ֱ���
extern int m = 1;//extern���ε�ȫ�ֱ���
int i = 1;
extern void testlifetime();//���Կ��ļ����þ�̬����
extern void testextern() {
	cout << "����testextern��" << i << "����" << endl;
	i++;
	x++;
	m++;
	cout << "extern���ε�ȫ�ֱ���x:" << x << endl;
	cout << "extern���εľֲ�����m:" << m << endl;//����ȫ�ֱ��������������ܹ��ڲ�ͬ��Դ�ļ��е���
	cout << "-----------------------------------------------" << endl;
	//testlifetime();//��̬�������޷����ļ����ã���Ȼͨ�����뵫��linkʱ���ִ���
};