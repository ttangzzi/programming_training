#include <stdio.h>

/* �ǽ����� 1 : �հ� ���ϱ�
int main() {
	int num[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		printf("���� >> ");
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

/* �ǽ�����2 : ��������
int main() {
	int mode;
	int d, n;
	int k = 0;
	printf("���� ��� ���� >> ");
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
		printf("�߸��� �Է�\n");
	}
}
*/

/* �ǽ����� 4 : counter - for�� �̻��
void count_mult(n, m, k) {
	int count1 = n / k;
	int count2 = m / k;

	if (n == k * count1 && n != 0) {
		count1 -= 1;
	}

	printf("[%d, %d]���� %d�� ����� %d��\n", n, m, k, count2 - count1);
}

int main() {
	int n, m, k;
	printf("n m k = ");
	scanf_s("%d %d %d", &n, &m, &k);
	count_mult(n, m, k);
}
*/

/* �ǽ����� 5 : ������
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

/* �ǽ����� 6
int main() {
	int age[4], tall[4];
	int isEnter = 0, who;

	for (int i = 0; i < 4; i++) {
		printf("���尴%d ���� Ű(cm)>> ", i+1);
		scanf_s("%d %d", &age[i], &tall[i]);

		if (age[i] < 6 || tall[i] < 140) {
			isEnter = 1;
			who = i+1;
		}
	}
	printf("\n");
	
	if (isEnter == 1) {
		printf("%d�� �մ� ������ �� ���ʴϴ�.\n", who);
	}
	else {
		printf("�� �о� �����Ͻðڽ��ϴ�.\n");
	}
}
*/

/* �ǽ����� 9 : �Ҽ� �Ǻ��ϱ� �ڡڡ�
#include <math.h>
int main() {
	int n;
	printf("n = ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("��\n");
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

/* �ǽ����� 10 : �Ǻ���ġ ����  �ڡڡڡ�

// �Ǻ���ġ ���� (���۸� ����) 
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

///* �ǽ����� 11 : 1�� 1��? */
//chicken(n) {
//	if (n == 0) return 0;
//	else if (n == 1) return 1;
//	else return chicken(n - 2) + chicken(n - 1);
//}
//int main() {
//
//}