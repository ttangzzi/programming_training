#include <stdio.h>

/* 실습문제 1 : 구구단
int main() {
	for (int i = 2; i <= 8; i += 2) {
		printf("<구구단 %d단>\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
*/

/* 실습문제 2 : 정수의 합
int sum(n) {
	int result = 0;
	for (int i = 1; i <= n; i++) {
		result += i;
	}
	return result;
}

int main() {
	int m, n;
	printf("m = ");
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		printf("n = ");
		scanf_s("%d", &n);
		printf("%d\n", sum(n));
	}
}
*/

/* 실습문제3 : 2중 for문 1
//void quiz1(n, m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("1");
//		}
//		printf("\n");
//	}
//}

//void quiz2(n, m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j <= m; j++) {
//			printf("%d", j);
//		}
//		printf("\n");
//	}
//}

//void quiz3(n, m, k, first) {
//	for (int i = 0; i < n; i++) {
//		for (int j = k; j <= m; j++) {
//			printf("%02d ", j);
//		}
//		k = m + 1;
//		m += first;
//		printf("\n");
//	}
//}

//void quiz4(n, m, k) {
//	for (int i = 0; i < n; i++) {
//		for (int j = k; j <= m; j++) {
//			printf("%02d ", j);
//		}
//		printf("\n");
//		m++;
//		k++;
//	}
//}


int main() {
	int n, m;
	int k = 1;
	printf("n m = ");
	scanf_s("%d %d", &n, &m);
	int first = m;

	// quiz5
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= m; j++) {
				printf("%d", j);
			}
		}
		else {
			for (int j = m; j >= 1; j--) {
				printf("%d", j);
			}
		}
		printf("\n");
	}
}
*/

/* 실습문제4 : 2중 for문 2

void quiz1(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void quiz2(int n) {
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void quiz3(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int k = i; k < n; k++) {
			printf("*");
		}
		printf("\n");
	}
}

void quiz4(int n, int g) {
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= g; j++) {
			printf("*");
		}
		g += 2;
		printf("\n");
	}
}

int main() {
	int n;
	int g = 1;
	printf("n = ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n-i; j > 1; j--) {
			printf(" ");
		}
		
		for (int k = 0; k < g; k++) {
			printf("*");
		}
		printf("\n");
		g += 2;
	}
	
}
*/

/* 실습 문제 5 : 미로
int main() {
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
				if (j == 0 || j == m - 1) {
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

/* 실습문제 6 : 총점 구하기
int result(int stu, int sub) {
	int score;
	int sum = 0;
	for (int j = 1; j <= sub; j++) {
		printf("학생%d의 과목%d의 점수 = ", stu, j);
		scanf_s("%d", &score);
		sum += score;
	}
	return sum;
}
int main() {
	int stu, sub;
	int sum = 0;
	printf("학생수 과목개수 = ");
	scanf_s("%d %d", &stu, &sub);

	for (int i = 1; i <= stu; i++) {
		sum = result(i, sub);
		printf("총점 = %d / %d\n\n", sum, sub * 100);
	}
}
*/

/* 실습 문제 7 : 소수 찾기 ★★★★
#include<math.h>
void is_prime(m) {
	int sum = 0;
	for (int i=2; i < m; i++) {
		int isPrime = 0;
		if (i == 2) {
			sum++;
			printf("%d, ", i);
		}
		else {
			for (int j = 2; j < i; j++) {
				if (i % j == 0) { // 1과 자기자신을 제외한 숫자에게 나눠떨어짐
					isPrime = 1;
					break;
				}
			}
			if (isPrime == 0) {
				sum++;
				printf("%d, ", i);
			}
		}
	}
	printf("\n%d이하 소수는 %d개\n", m, sum);
}
int main() {
	int m;
	printf("m = ");
	scanf_s("%d", &m);
	is_prime(m);
}
*/

/* 실습문제 8 : 순열
int main() {
	char arr[4] = { 'a', 'b', 'c', 'd'};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%c%c%c\n", arr[i], arr[j], arr[k]);
			}
		}
	}
}
*/

/* 실습문제 9 : 주사위
int main() {
	int n;
	int sum = 0;
	printf("n = ");
	scanf_s("%d", &n);

	printf("R G B\n");
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			for (int k = 1; k <= 6; k++) {
				if (i + j + k == n) {
					printf("%d %d %d\n", i, j, k);
					sum++;
				}
			}
		}
	}
	printf("%d cases\n", sum);
}
*/

/* 실습문제 10 : 주사위 2
int main() {
	int n;
	int sum = 0;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 1; i <= 6; i++) {
		for (int j = i; j <= 6; j++) {
			for (int k = j; k <= 6; k++) {
				if (i + j + k == n) {
					printf("%d %d %d\n", i, j, k);
					sum++;
				}
			}
		}
	}
	printf("%d cases\n",sum);
}
*/