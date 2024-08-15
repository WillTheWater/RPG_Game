#include "Questions.h"

int Question_1()
{
	std::cout << "Question 1: What is the square root of 64?" << std::endl;
	int answer;
	std::cin >> answer;
	if (answer == 8) { std::cout << "That is correct." << std::endl; return 0; }
	else { std::cout << "That is wrong!" << std::endl; return 18; }
}

int Question_2(int x, int y)
{
	std::cout << "Question 2: What is " << x << " + " << y << " ?" << std::endl;
	int answer;
	std::cin >> answer;
	if (answer == x + y) { std::cout << "That is correct." << std::endl; return 0; }
	else { std::cout << "Wrong you idiot!" << std::endl; return 23; }
}

int Question_3()
{
	std::cout << "Question 3: What is always coming but never arrives?" << std::endl;
	std::string answer;
	std::cin >> answer;
	if (answer == "tomorrow" || answer == "Tomorrow") { std::cout << "That is correct." << std::endl; return 0; }
	else { std::cout << "Wrong!" << std::endl; return 6; }
}
