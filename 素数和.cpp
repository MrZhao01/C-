#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {
	int min = 0;
	int max = 0;
	int cnt = 0;
	int sum = 0;
	do
	{
		printf("������һ��1��500�����䣺\n");		//��������
		scanf("%d %d", &min, &max);

	} while (min<1||min>max||max>500);
	
	for (min; min <= max; min++) {
		int is = 1;
		if (min == 1) {
			continue;
		};									//�������ж�ֵ
		for (int i = 2; i < min; i++) {
			if (min%i == 0)
			{
				is = 0;
				break;
			}
		}
		if (is == 1) {
			cnt++;
			sum += min;
		}
	}
	printf("����%d��%d����%d������,���ǵĺ�Ϊ%d\n", min, max, cnt, sum);

	system("pause");
	return 0;
}