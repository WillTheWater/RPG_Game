#pragma once
#include <iostream>
#include <string>
#include "Questions.h"
#include "Character.h"
#include "Player.h"
#include "Enemy.h"

void main()
{
	/*
	std::cout << "Greetings, what shall I call you?" << std::endl;

	std::string name;

	std::cin >> name; //Get name

	std::cout << "Welcome to hell " << name << std::endl;
	system("cls"); //Clears the screen
	std::cout << "And, how old might you be?" << std::endl;

	int age;

	std::cin >> age;
	system("cls"); //Clears the screen

	std::cout << "hmm... " << age << " years old huh." << std::endl;

	std::cout << "Choose a number between 1 and 100." << std::endl;
	int randNum;
	std::cin >> randNum;
	system("cls"); //Clears the screen

	std::cout << "Hahaha... that's how long you'll be in Hell!" << std::endl;

	int newAge = age + randNum;

	std::cout << "You'll be " << newAge << " before you get out of here." << std::endl;

	if (newAge >= 80)
	{
		std::cout << "You'll probably be dead by then." << std::endl;
	}
	

	//Player Attributes
	int vita{}, str{}, dex{}, intel{};
	enum Choice{Barbarian = 1, Ranger = 2, Wizard = 3};
	Choice playerChoice{};
	bool characterSetup = false;

	while (!characterSetup)
	{
		std::cout << "What kind of player are you anyway?" << std::endl;
		std::cout << "1: Barbarian" << std::endl;
		std::cout << "2: Ranger" << std::endl;
		std::cout << "3: Wizard" << std::endl;
	
		int choice;
		std::cin >> choice;
		system("cls"); //Clears the screen

		if (choice >= 1 && choice <= 3)
		{
			switch (choice) 
			{
				case 1:
					std::cout << "A Barbarian, you must be strong!\n" << std::endl;
					vita = 100; str = 100; dex = 60; intel = 20;
					characterSetup = true;
					break;
				case 2:
					std::cout << "A sneaky little ranger Ranger, yes...\n" << std::endl;
					vita = 80; str = 60; dex = 100; intel = 40;
					characterSetup = true;
					break;
				case 3:
					std::cout << "You don't look like a Wizard.\n" << std::endl;
					vita = 60; str = 20; dex = 40; intel = 100;
					characterSetup = true;
					break;
			}
		}
		else { std::cout << "That is not a a possible choice!\n" << std::endl; }
	}

	std::cout << "----------Character Stats-----------" << std::endl;
	std::cout << std::endl;
	std::cout << "    *     Character Name: " << name << std::endl;
	std::cout << "    *           Vitality: " << vita << std::endl;
	std::cout << "    *           Strength: " << str << std::endl;
	std::cout << "    *          Dexterity: " << dex << std::endl;
	std::cout << "    *       Intelligence: " << intel << std::endl;

	system("pause");
	system("cls");

	std::cout << "The gates of Hell begin to open..." << std::endl;
	system("pause");
	for (int i = 3; i >= 0; i--) { std::cout << i << std::endl; }
	system("pause");
	system("cls");
	std::cout << "A dark wander approaches..." << std::endl;
	std::cout << "The Dark Wander: You must answer my questions." << std::endl;
	std::cout << "Get them right and no harm will come to you." << std::endl;
	std::cout << "Get them wrong and... well you may not survive." << std::endl;
	system("pause");
	system("cls");

	int dmg = Question_1() + Question_2(vita, dex) + Question_3();

	vita -= dmg;
	std::cout << "You have taken " << dmg << " damage." << std::endl;
	std::cout << "Your current health is: " << vita << std::endl;
	system("pause");
	system("cls");
	
	*/


	//Building a Character object
	std::cout << "A new character has enter the relm" << std::endl;

	Character playerOne;
	playerOne.SetupStats("Todd", 100, 40, 60, 30);
	playerOne.DisplayStats();

	Player playerTwo;
	playerTwo.SetupStats("Bob", 50, 50, 50, 50);
	playerTwo.DisplayStats();

	Enemy glob("Glob", 100, 100, 30, 40, 10);
	glob.DisplayStats();

	playerOne.TakeDamage(glob.GetDamage());
	glob.TakeDamage(playerTwo.SpecialAttack());
	
	playerOne.DisplayStats(); 
	playerTwo.DisplayStats(); 
	glob.DisplayStats();

	//Class Object Pointers

	system("cls");
	
	Enemy* globPtr = new Enemy("Blob",50,50,50,50,50);
	globPtr->DisplayStats();
	delete globPtr;






	system("pause");
}