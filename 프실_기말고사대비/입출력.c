#include <stdio.h>

/* �ǽ����� 1
int main() {
	char title[50], author[50], company[50];
	printf("����>> ");
	scanf_s("%s", title, (unsigned) sizeof(title));
	printf("����>> ");
	scanf_s("%s", author, (unsigned) sizeof(author));
	printf("���ǻ�>> ");
	scanf_s("%s", company, (unsigned) sizeof(company));

	printf("������ %s, ���ڴ� %s, ���ǻ�� %s�Դϴ�.\n", title, author, company);
}
*/

/* �ǽ����� 2
int main() {
	int count = 1;
	while (1) {
		printf("%d\n����Ϸ��� ��Ƽ Ű�� �Է��ϼ���...", count);
		char enter = getchar();
		if (enter != '\n') {
			break;
		}
		count++;
	}
}
*/
