#include "allinclude.h"  //DO NOT edit this line
int main()
{
	int a, b;

	//第1种交换a和b的值的方法
	printf("第1种交换a和b的值的方法：\n", a, b);
	a = 8;
	b = 10;
	printf("交换前：a = %d, b = %d\n", a, b);

	int c = b;
	b = a;
	a = c;
	printf("交换后：a = %d, b = %d\n\n", a, b);

	//第2种交换a和b的值的方法
	printf("第2种交换a和b的值的方法：\n", a, b);
	a = 8;
	b = 10;
	printf("交换前：a = %d, b = %d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后：a = %d, b = %d\n\n", a, b);

	//第3种交换a和b的值的方法
	printf("第3种交换a和b的值的方法：\n", a, b);
	a = 8;
	b = 10;
	printf("交换前：a = %d, b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a = %d, b = %d\n", a, b);
	//试一试：在第3种交换方法中，令a和b的值相等，例如都为8，会出现什么现象？

	return 0;
}
