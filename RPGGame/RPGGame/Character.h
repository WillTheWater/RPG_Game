#pragma once
#include <iostream>
#include <string>

class Character
{
public:
	Character();
	~Character();
	void SetupStats(std::string name, int vita, int str, int dex, int intel);
	void DisplayStats();

private:
	std::string m_Name;
	int m_Vita{}, m_Str{}, m_Dex{}, m_Intel{}, m_MaxVita{};
};

