#include <cstdlib>
#include <iostream>

#include "main.hpp"
#include "menu_functions.hpp"

const RGor::MenuItem* RGor::show_menu(const MenuItem* current) {
	std::cout << "Обучайка приветсвует тебя, мой юный ученк!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Обучайка > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	return current->children[user_input];
}

const RGor::MenuItem* RGor::exit(const MenuItem* current) {
	std::exit(0);
}

const RGor::MenuItem* RGor::study_summ(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const RGor::MenuItem* RGor::study_substract(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const RGor::MenuItem* RGor::study_multiply(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const RGor::MenuItem* RGor::study_divide(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const RGor::MenuItem* RGor::study_go_back(const MenuItem* current) {
	// TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}
