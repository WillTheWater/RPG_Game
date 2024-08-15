#pragma once
#include <iostream>
#include <string>


void main()
{

	std::cout << "Greetings, what shall I call you?" << std::endl;

	std::string name;

	std::cin >> name; //Get name

	std::cout << "Welcome to hell " << name << std::endl;

	std::cout << "And, how old might you be?" << std::endl;

	int age;

	std::cin >> age;
	std::cout << "hmm... " << age << " years old huh." << std::endl;




	system("pause");
}