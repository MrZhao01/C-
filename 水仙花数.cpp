//ˮ�ɻ�����ָһ��Nλ��������N>=3��������ÿ��λ�ϵ����ֵ�N����֮�͵������������磺153 = 1^3 + 5^3+ 3^3������Ҫ���д����,��������Nλˮ�ɻ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {
	int a=0,first=1;
	do
	{
		printf("���������λ����");		//���벢���λ���Ƿ���Ϸ�Χ
		scanf("%d", &a);
	} while (a<3 || a>7);		
	for (int i = 1; i < a; i++) {		//ȷ��λ���ĳ�ʼֵ
		first *= 10;
	}
	int last = first * 10;				//ȷ��λ���Ľ���ֵ
	while (first<last)
	{
		int x = first;					//������ʱ���������в����֤
		int sum = 0;
		do
		{
			int d = x%10;				//��ȡ��λ��
			x /= 10;					//����ǰ��λ������ѭ�������ж�
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