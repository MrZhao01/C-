//水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 1^3 + 5^3+ 3^3。本题要求编写程序,计算所有N位水仙花数。
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {
	int a=0,first=1;
	do
	{
		printf("请输入多少位数：");		//输入并检测位数是否符合范围
		scanf("%d", &a);
	} while (a<3 || a>7);		
	for (int i = 1; i < a; i++) {		//确认位数的初始值
		first *= 10;
	}
	int last = first * 10;				//确认位数的结束值
	while (first<last)
	{
		int x = first;					//创建临时变量来进行拆解验证
		int sum = 0;
		do
		{
			int d = x%10;				//获取个位数
			x /= 10;					//保存前面位数等下循环继续判断
			int p = d;
			for (int y = 1; y < a; y++) {
				p *= d;
			}
			sum += p;
		} while (x>0);
		if (sum == first) {
			printf("%d\n", first);
		}
		first++;
	}
	system("pause");
	return 0;
}