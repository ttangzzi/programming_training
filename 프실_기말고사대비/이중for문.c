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
		int result = 0;
		printf("n = ");
		scanf_s("%d", &n);
		printf("%d\n", sum(n));
	}
}
*/

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

//int main() {
//	int n, m;
//	int k = 1;
//	printf("n m = ");
//	scanf_s("%d %d", &n, &m);
//	int first = m;
//
//	
//}

/* 실습 문제 7 : 소수 찾기
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