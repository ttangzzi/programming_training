#include <stdio.h>

/* �ǽ����� 1 : ������
int main() {
	for (int i = 2; i <= 8; i += 2) {
		printf("<������ %d��>\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
*/

/* �ǽ����� 2 : ������ ��
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

/* �ǽ� ���� 7 : �Ҽ� ã��
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
				if (i % j == 0) { // 1�� �ڱ��ڽ��� ������ ���ڿ��� ����������
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
	printf("\n%d���� �Ҽ��� %d��\n", m, sum);
}
int main() {
	int m;
	printf("m = ");
	scanf_s("%d", &m);
	is_prime(m);
}
*/