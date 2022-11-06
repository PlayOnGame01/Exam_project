#pragma once
#include <iostream>
using namespace std;

class Maxsum_in_month {
protected:
	double sport_sum;
	double buy_clothes;
	double money_for_food;
	double internet_game;

public:
	Maxsum_in_month() {
		sport_sum = 0;
		buy_clothes = 0;
		money_for_food = 0;
		internet_game = 0;
	}
	Maxsum_in_month(double sp_sum, double b_cl, double m_f_f, double ie) {
		sport_sum = sp_sum;
		buy_clothes = b_cl;
		money_for_food = m_f_f;
		internet_game = ie;
	}

	void PrintExpenses() {
		cout << "Cost money for sport: " << sport_sum << endl;
		cout << "Buy clothes : " << buy_clothes << endl;
		cout << "Cost money for food: " << money_for_food << endl;
		cout << "Cost internet game: " << internet_game << endl;
	}

};