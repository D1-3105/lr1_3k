#include "Keeper.h"
#include "KeeperHandler.h"
int main()
{
	AbstractKeeperHandler* handler(new IOKeeperHandler); //���� ��� ���������� ����� ����\�����
	Keeper containers(handler); //1� �������
	containers.run(); //2� �������(�� ������ Keeper �������� � ����)
	return 0;
}