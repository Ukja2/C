//���� 2: ���Ǳ� �ùķ��̼� ���α׷�
//���� �޴��� ���� ���Ǳ� ���α׷��� �ۼ��ϼ��� :
//*���� : while �������� ���ѷ���, ���Ǳ� ������ switch (case�� default�� ����� ��)�� ���� ��
//1.�ݶ�(1, 000��)
//2.���̴�(900��)
//3.Ŀ��(1, 200��)
//4.����(500��)
//5.����
//����ڿ��� �ʱ� �ݾ��� �Է¹ް�, �޴� ������ ���� ���Ḧ ������ �� �ֵ��� �ϼ���.
//1)���� �� �������� �����߽��ϴ�.���� �ܾ� ���������� ��� ��
//2)�ܾ��� �����ϸ� ������ �� ���� ���ܾ��� �����մϴ�.�ʿ�ݾ� ������, ���� �������� ��� ��
//3)����ڰ� 5�� �Է��ϸ� ���α׷��� ����ǰ� �ܾ��� ��ȯ �����Ǳ⸦ �����մϴ� �ܾ� �������� ��ȯ�մϴ�.���� ��� ��
//4)��ȣ�� �߸� �����ϸ� ���߸��� �����Դϴ�.1~5������ ��ȣ�� �������ּ���.����� ��� ��


#include<stdio.h>
#pragma warning(disable:4996)


int main() {

	int coke = 1000;
	int cider = 900;
	int coffee = 1200;
	int water = 500;

	int balance = 0; //������ �ݾ����� �հ�



	printf("�ݾ��� �Է��ϼ���: ");
	scanf("%d", &balance);

	while (1) {
		
		int currentState = 0;

		printf("������ ���Ḧ �����ϼ��� 1.�ݶ� 2.���̴� 3.Ŀ�� 4.���� 5.����: ");
		scanf("%d", &currentState);

		switch (currentState)
		{
		case 1:

			if (coke > balance) {
				printf("�ܾ��� �����մϴ�. �ʿ�ݾ� %d�� ���� %d��\n", coke, balance);
			} else{
				balance -= coke;
				printf("�ݶ� �����߽��ϴ�. ���� �ܾ� %d��\n", balance);
			}
			break;
			
		case 2:

			if (cider > balance) {
				printf("�ܾ��� �����մϴ�. �ʿ�ݾ� %d�� ���� %d��\n", cider, balance);
			}
			else {
				balance -= cider;
				printf("���̴ٸ� �����߽��ϴ�. ���� �ܾ� %d��\n", balance);
			}
			break;

		case 3:

			if (coffee > balance) {
				printf("�ܾ��� �����մϴ�. �ʿ�ݾ� %d�� ���� %d��\n", coffee, balance);
			}
			else {
				balance -= coffee;
				printf("Ŀ�Ǹ� �����߽��ϴ�. ���� �ܾ� %d��\n", balance);
			}
			break;

		case 4:

			if (water > balance) {
				printf("�ܾ��� �����մϴ�. �ʿ�ݾ� %d�� ���� %d��\n", water, balance);
			}
			else {
				balance -= water;
				printf("������ �����߽��ϴ�. ���� �ܾ� %d��\n", balance);
			}
			break;
		case 5:
			printf("���Ǳ⸦ �����մϴ�. �ܾ� %d���� ��ȯ�մϴ�.\n", balance);
			return 0;

		default:
			printf("�߸��� �����Դϴ�. 1~5������ ��ȣ�� �������ּ���.\n");
			break;
		}
	}


}
