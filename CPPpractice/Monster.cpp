#include "Monster.h"


// Monster 클래스의 구현부
void Monster::Attack(int power)
{
	// 클래스의 멤버 변수와 매개 변수의 이름같을 때 
	// this로 명확하게 구분하여 값을 저장할 수 있습니다.
	this->power = power;
	std::cout << this << "이 객체가" << this->power << "만큼 공격하였습니다." << std::endl;
}