#include <stdio.h>

extern int sharedVar;           // �ܺ� ���� ���� ��� ����
// �ٸ� �ҽ� ���Ͽ��� ���ǵ� ������ �����ϱ� ���� �ܺ� ����

void displaySharedVar(void);    // �ܺ� ���� �Լ� ����

int main()
{
    printf("���� ���� sharedVar: %d\n", sharedVar);
    displaySharedVar();         // �ܺο��� ���ǵ� �Լ� ȣ��
    return 0;
}
