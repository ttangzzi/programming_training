#include <stdio.h>
/* ------------------ 02분반 ------------------ */
/* 문제 1 : 카XX뱅크
int main() {
	int balance[20] = { 1, 2, 3, 4, 5};
	int len = 5;
	int first = len % 3;

	for (int i = 0; i < len; i++) {
		if (i == first) {
			if (i != 0) {
				printf(",");
			}
			first += 3;
		}
		printf("%d", balance[i]);	
	}
}
*/

/* 문제 2 : 다각형의 넓이
#include <math.h>
int main() {
	int n;
	printf("int n = ");
	scanf_s("%d", &n);

	double x[20] = { 0.2165, 2.53, -3.76 };
	x[n] = x[0];
	double y[20] = { 3.733, -12.02, -6.433 };
	y[n] = y[0];
	double xy = 0, yx=0, result = 0;

	for (int i = 0; i <= n; i++) {
		if (i < n) 
			xy = xy + (x[i] * y[i + 1]);
			yx = yx + (y[i] * x[i + 1]);
	}
	result = (xy - yx) / 2;

	// fabs -> 절대값 만들어줌
	printf("%.4f", fabs(result));
}
*/

/* 문제 3 : 미로 Maze
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int n, m;
	printf("n m = ");
	scanf_s("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			for (int j = 0; j < m; j++) {
				printf("*");
			}
		}
		else {
			for (int j = 0; j < m; j++) {
				int ran = rand() % (m - 2) + 1;
				if (j == 0 || j == m - 1 || j == ran) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
*/

/* 문제 4 : 최소공배수
long long gcd(long long x, long long y) {
	if (y== 0)
		return x;
	else
		gcd(y, x % y);
}

long long lcm(long long x, long long y) {
	return x * y / gcd(x, y);
}

int main() {
	long long x, y;
	printf("x y >> ");
	scanf_s("%lld %lld", &x, &y);
	printf("%lld\n", lcm(x,y));
}
*/


/* ------------------ 03분반 ------------------ */

