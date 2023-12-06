﻿#include<clocale>
#include<iostream>

#include "main.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
	std::setlocale(LC_ALL, "");

	const RGor::MenuItem* current = &RGor::MAIN;
	do {
		current = current->func(current);
	} while (true);

	return 0;
}