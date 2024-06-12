#include <stdio.h>

/* 실습문제 1
int main() {
	char title[50], author[50], company[50];
	printf("제목>> ");
	scanf_s("%s", title, (unsigned) sizeof(title));
	printf("저자>> ");
	scanf_s("%s", author, (unsigned) sizeof(author));
	printf("출판사>> ");
	scanf_s("%s", company, (unsigned) sizeof(company));

	printf("제목은 %s, 저자는 %s, 출판사는 %s입니다.\n", title, author, company);
}
*/

/* 실습문제 2
int main() {
	int count = 1;
	while (1) {
		printf("%d\n계속하려면 엔티 키를 입력하세요...", count);
		char enter = getchar();
		if (enter != '\n') {
			break;
		}
		count++;
	}
}
*/
