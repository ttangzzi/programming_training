#include <stdio.h>

/* 실습문제 1 : 합계 구하기
int main() {
	int num[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("정수 >> ");
		scanf_s("%d", &num[i]);
		if (num[i] < 0) {
			break;
		}
		else {
			sum += num[i];
		}
	}
	printf("%d\n", sum);
}
*/

/* 실습문제2 : 등차수열
int main() {
	int mode;
	int d, n;
	int k = 0;
	printf("구현 모드 선택 >> ");
	scanf_s("%d", &mode);

	if (mode == 1) {
		printf("d n = ");
		scanf_s("%d %d", &d, &n);
		for (int i = 0; i < n; i++) {
			printf("A%d = %d\n", i+1,k);
			k += d;
		}
	}
	else if (mode == 2) {
		printf("k d n = ");
		scanf_s("%d %d %d",&k, &d, &n);
		for (int i = 0; i < n; i++) {
			printf("A%d = %d\n", i+1,k);
			k += d;
		}
	}
	else {
		printf("잘못된 입력\n");
	}
}
*/

/* 실습문제 4 : counter - for문 미사용
void count_mult(n, m, k) {
	int count1 = n / k;
	int count2 = m / k;

	if (n == k * count1 && n != 0) {
		count1 -= 1;
	}

	printf("[%d, %d]에서 %d의 배수는 %d개\n", n, m, k, count2 - count1);
}

int main() {
	int n, m, k;
	printf("n m k = ");
	scanf_s("%d %d %d", &n, &m, &k);
	count_mult(n, m, k);
}
*/

/* 실습문제 5 : 등비수열
int power(n, r) {
	int result = 1;
	for (int i = 0; i < r; i++) {
		result *= n;
	}
	return result;
}

int main() {
	int n, r;
	printf("n r = ");
	scanf_s("%d %d", &n, &r);
	printf("return value = %d\n", power(n, r));
}
*/

/* 실습문제 6
int main() {
	int age[4], tall[4];
	int isEnter = 0, who;

	for (int i = 0; i < 4; i++) {
		printf("입장객%d 나이 키(cm)>> ", i+1);
		scanf_s("%d %d", &age[i], &tall[i]);

		if (age[i] < 6 || tall[i] < 140) {
			isEnter = 1;
			who = i+1;
		}
	}
	printf("\n");
	
	if (isEnter == 1) {
		printf("%d번 손님 때문에 못 들어가십니다.\n", who);
	}
	else {
		printf("한 분씩 입장하시겠습니다.\n");
	}
}
*/

/* 실습문제 9 : 소수 판별하기 ★★★
#include <math.h>
int main() {
	int n;
	printf("n = ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("끝\n");
	}
	else if (n == 1) {
		printf("1 is NOT a prime number\n\n");
	}
	else {
		int m = sqrt(n);
		for (int i = 2; i <= m; i++) {
			if (n % i == 0) {
				printf("%d is NOT a prime number\n", n);
				return 0;
			}
		}
		printf("%d is a prime number\n", n);
	}
}
*/

/* 실습문제 10 : 피보나치 수열  ★★★★

// 피보나치 수열 (구글링 버전) 
// int fibo(n) {
	// if (n == 0) return 0;
	// else if (n == 1) return 1;
	// else return fibo(n-1) + fibo(n-2);
// }

int fibo(n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibo(n - 2) + fibo(n - 1);
	}
}
int main() {
	int n;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i == n) {
			printf("%d", fibo(i));
		}
		else {
			printf("%d ", fibo(i));
		}
	}
}
*/

///* 실습문제 11 : 1인 1닭? */
//chicken(n) {
//	if (n == 0) return 0;
//	else if (n == 1) return 1;
//	else return chicken(n - 2) + chicken(n - 1);
//}
//int main() {
//
//}