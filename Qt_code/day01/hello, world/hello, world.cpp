//#include <iostream>
//using namespace std;
//
//// main() 是程序开始执行的地方
//
//int main()
//{
//	cout << "Hello World"; // 输出 Hello World
//	return 0;
//}

//#include<iostream>  
//#include<string>  
//#include <limits>  
//using namespace std;
//
//int main()
//{
//	cout << "type: \t\t" << "************size**************" << endl;
//	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
//	cout << "\t最大值：" << (numeric_limits<bool>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
//	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
//	cout << "\t最大值：" << (numeric_limits<char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
//	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
//	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
//	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
//	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
//	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
//	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
//	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
//	cout << "\t最大值：" << (numeric_limits<short>::max)();
//	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
//	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
//	cout << "\t最大值：" << (numeric_limits<int>::max)();
//	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
//	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
//	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
//	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
//	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
//	cout << "\t最大值：" << (numeric_limits<long>::max)();
//	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
//	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
//	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
//	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
//	cout << "double: \t" << "所占字节数：" << sizeof(double);
//	cout << "\t最大值：" << (numeric_limits<double>::max)();
//	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
//	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
//	cout << "\t最大值：" << (numeric_limits<long double>::max)();
//	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
//	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
//	cout << "\t最大值：" << (numeric_limits<float>::max)();
//	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
//	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
//	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
//	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
//	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
//	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
//	cout << "type: \t\t" << "************size**************" << endl;
//	return 0;
//}


#include <iostream>
using namespace std;

// 函数定义
void swap(int *x, int *y)
{
	int temp;
	temp = *x;    /* 保存地址 x 的值 */
	*x = *y;        /* 把 y 赋值给 x */
	*y = temp;    /* 把 x 赋值给 y */

	return;
}

int main()
{
	// 局部变量声明
	int a = 100;
	int b = 200;

	cout << "交换前，a 的值：" << a << endl;
	cout << "交换前，b 的值：" << b << endl;

	/* 调用函数来交换值
	 * &a 表示指向 a 的指针，即变量 a 的地址
	 * &b 表示指向 b 的指针，即变量 b 的地址
	 */
	swap(&a, &b);

	cout << "交换后，a 的值：" << a << endl;
	cout << "交换后，b 的值：" << b << endl;
	
	getchar();
	return 0;
}