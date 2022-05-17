#include <iostream>
using namespace std;
//#define Day 7

int main0() {

	//cout << "HelloWorld" << endl;

	/*标识符命名规则
	* 标识符不能是关键字
	* 标识符只能由字母 数字 下划线组成
	* 第一个字符必须为字母或下划线
	* 字母区分大小写
	*/
    
	/*
	* 编写代码快捷键：
	* 将选定内容注释：Ctrl+K,Ctrl+C
	* 选定内容取消注释：Ctrl+K,Ctrl+U
	*/

	/*1.用#define定义常量
	cout << "一周一共有" << day << "天" << endl;
	2.用const定义常量  const修饰的变量称为常量
	const int month = 12;
	cout << "一年共有" << month << "个月" << endl;*/

	// 2 4 4 8
	/*
	cout << "short 类型所占空间为：" << sizeof(short) << endl;
			
	cout << "int 类型所占空间为：" << sizeof(int) << endl;

	cout << "long 类型所占空间为：" << sizeof(long) << endl;

	cout << "long long 类型所占空间为：" << sizeof(long long) << endl;*/
	

	// 4 8
	/*float f1 = 3.14f;
	double d1 = 3.14;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << "float sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof =" << sizeof(d1) << endl;*/
	
	//科学计数法
	
	float f2 = 3e2; //3 * 10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3 * 0.1 ^ 2
	cout << "f3=" << f3 << endl;
	

	system("pause");

	return 0;
}
