// gcc -m32 ex01.c -o ex01
#include <stdio.h>

void main() {
	printf("May ATM - Bank XYZ\n");
	int money = 1000000;
	int n1, n2;
	char c;
	while (1) {
		printf("Tai khoan con %d vnd\nNhap so tien: ", money);
		scanf("%d", &n1);
		fflush(stdin);
		printf("Quyet dinh chac chua?\nNhap so tien muon rut them: ");
		scanf("%d", &n2);
		fflush(stdin);
		if (n1 >= 0 && n2 >= 0 && n1 + n2 < money) {
			money = money - (n1 + n2);
			printf("Ban da rut thanh cong %d vnd va %d vnd, tk con %d vnd\n", n1, n2, money);
		}
		else
			printf("So tien trong tai khoan khong du, hoac ban nhap so tien khong hop le\n");
		printf("Tiep tuc giao dich? (y/n) ");
		getchar();
		c = getchar();
		if (c == 'n')
			break;
	}
}
