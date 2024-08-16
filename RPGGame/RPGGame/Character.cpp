#include "Character.h"

Character::Character()
{
}

Character::~Character()
{
}

void Character::SetupStats(std::string name, int vita, int str, int dex, int intel)
{
	m_Name = name;
	m_Vita = vita;
	m_Str = str;
	m_Dex = dex;
	m_Intel = intel;
}

void Character::DisplayStats()
{
	std::cout << "    *     Character Name: " << m_Name << std::endl;
	std::cout << "    *           Vitality: " << m_Vita << std::endl;
	std::cout << "    *           Strength: " << m_Str << std::endl;
	std::cout << "    *          Dexterity: " << m_Dex << std::endl;
	std::cout << "    *       Intelligence: " << m_Intel << std::endl;
}
