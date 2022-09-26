#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {
	for (int x = 1; x <= 9; x++) {
		for (int y = 1; y <= x; y++) {
			printf("%d¡Á%d=%d  ", x, y, x * y);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}