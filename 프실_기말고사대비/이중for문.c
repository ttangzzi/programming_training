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
		printf("n = ");
		scanf_s("%d", &n);
		printf("%d\n", sum(n));
	}
}
*/

/* �ǽ�����3 : 2�� for�� 1
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

/* �ǽ�����4 : 2�� for�� 2

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

/* �ǽ� ���� 5 : �̷�
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

/* �ǽ����� 6 : ���� ���ϱ�
int result(int stu, int sub) {
	int score;
	int sum = 0;
	for (int j = 1; j <= sub; j++) {
		printf("�л�%d�� ����%d�� ���� = ", stu, j);
		scanf_s("%d", &score);
		sum += score;
	}
	return sum;
}
int main() {
	int stu, sub;
	int sum = 0;
	printf("�л��� ���񰳼� = ");
	scanf_s("%d %d", &stu, &sub);

	for (int i = 1; i <= stu; i++) {
		sum = result(i, sub);
		printf("���� = %d / %d\n\n", sum, sub * 100);
	}
}
*/

/* �ǽ� ���� 7 : �Ҽ� ã�� �ڡڡڡ�
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

/* �ǽ����� 8 : ����
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

/* �ǽ����� 9 : �ֻ���
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

/* �ǽ����� 10 : �ֻ��� 2
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