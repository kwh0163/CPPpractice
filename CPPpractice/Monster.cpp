#include "Monster.h"


// Monster Ŭ������ ������
void Monster::Attack(int power)
{
	// Ŭ������ ��� ������ �Ű� ������ �̸����� �� 
	// this�� ��Ȯ�ϰ� �����Ͽ� ���� ������ �� �ֽ��ϴ�.
	this->power = power;
	std::cout << this << "�� ��ü��" << this->power << "��ŭ �����Ͽ����ϴ�." << std::endl;
}