#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {
	int time, n;
	scanf("%d %d", &n, &time);
	int x;
	int t = 1;
	while(true)
	{
		scanf("%d", &x);
		t ++;
		if (x == n && t == 1)
		{
			printf("Bingo!\n");
			break;
		}
		else if (x < 0||t>time) {
			printf("Game Over!\n");
			break;
		}
		else if (x == n && t <= 3) {
			printf("Lucky you!\n");
			break;
		}
		else if (x == n && t > 3 && t < time) {
			printf("Good Guess!");
			break;
		}
		else if (x > n) {
			printf("too big!\n");
		}
		else if (x < n) {
			printf("too small!\n");
		}
	}

	system("pause");
	return 0;
}