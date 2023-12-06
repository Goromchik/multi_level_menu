#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const RGor::MenuItem RGor::STUDY_SUMM = {
	 "1 - Хочу научиться складывать!", RGor::study_summ, &RGor::STUDY
};
const RGor::MenuItem RGor::STUDY_SUBSTRACT = {
	 "2 - Хочу научиться вычитать!", RGor::study_substract, &RGor::STUDY
};
const RGor::MenuItem RGor::STUDY_MULTIPLY = {
	 "3 - Хочу научиться умножать!", RGor::study_multiply, &RGor::STUDY
};
const RGor::MenuItem RGor::STUDY_DIVIDE = {
	 "4 - Хочу научиться делить!", RGor::study_divide, &RGor::STUDY
};
const RGor::MenuItem RGor::STUDY_GO_BACK = {
	 "0 - Выйти в главное меню", RGor::study_go_back, &RGor::STUDY
};

namespace {
	const RGor::MenuItem* const study_children[] = {
		&RGor::STUDY_GO_BACK,
		&RGor::STUDY_SUMM,
		&RGor::STUDY_SUBSTRACT,
		&RGor::STUDY_MULTIPLY,
		&RGor::STUDY_DIVIDE,
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const RGor::MenuItem RGor::STUDY = {
	"1 - Хочу учиться математике!", RGor::show_menu, &RGor::MAIN, study_children, study_size
};
const RGor::MenuItem RGor::EXIT = {
	"0 - Я лучше полежу...", RGor::exit, &RGor::MAIN
};

namespace {
	const RGor::MenuItem* const main_children[] = {
		&RGor::EXIT,
		&RGor::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const RGor::MenuItem RGor::MAIN = {
	nullptr, RGor::show_menu, nullptr, main_children, main_size
};