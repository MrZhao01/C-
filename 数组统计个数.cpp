#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {
	int a,sum = 0;
	int arr[10];
	for (int k = 0; k <= 9; k++) {
		arr[k] = 0;
	}
	printf("������0~9��Χ�ڲ�ȷ����������");
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a);
		while (a != -1)
		{
			if (a >= 0 && a <= 9) {
				arr[a]++;
				break;
			}
		}
	}
	for (int j = 0; j < 9; j++)
	{
		printf("%d", arr[j]);
	}

	printf("%d", sum);

	system("pause");
	return 0;
}