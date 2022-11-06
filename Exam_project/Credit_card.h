#pragma once
#include <iostream>
#include "Mono_card.h"
#include "privat_card.h"
#include "Visa_card.h"
#include "Maxsum_in_month.h"
using namespace std;

class Credit_Card : public Mono_card, public  Privat_card, public Maxsum_in_month, public Vias_card {
private:
	int credit_limite;
	double money_sum;

public:
	Credit_Card() : Mono_card() {
		credit_limite = 0;
		money_sum = 0;
	}
	Credit_Card(int cl, double am, string n, string s, string bn, string num, string ed, int cvv) : Mono_card(n, s, bn, num, ed, cvv) {
		credit_limite = cl;
		money_sum = am;
	}

	void TaxCosts() { // Ћимит денег на спорт
		int answer;
		cout << "Enter amount of money spent of sport: ";
		cin >> answer;
		sport_sum += answer;
		money_sum -= sport_sum;
	}
	void PurchasesCosts() {  // Ћимит денег на одежду
		int answer;
		cout << "Enter amount of money spent of clothes: ";
		cin >> answer;
		buy_clothes += answer;
		money_sum -= buy_clothes;
	}
	void FoodCosts() { // Ћимит денег на еду 
		int answer;
		cout << "Enter amount of money spent of food: ";
		cin >> answer;
		money_for_food += answer;
		money_sum -= money_for_food;
	}
	void EntertainmentCosts() { // Ћимит денег на интернет игры
		int answer;
		cout << "Enter amount of money spent on the internet game: ";
		cin >> answer;
		internet_game += answer;
		money_sum -= internet_game;
	}

	string NumberOfCard() {
		return bank_name_mono;
	}
	double getTaxExpens() {
		return sport_sum;
	}
	double getPurchasesExpens() {
		return buy_clothes;
	}
	double getFoodExpens() {
		return money_for_food;
	}
	double getEntertainmentExpens() {
		return internet_game;
	}

	void InputCredit_card() {
		InputCredit_card();
		cout << "Enter credit limite: "; 
		cin >> credit_limite;// ¬вод кредитного лимита
		cout << "Enter balance account: ";
		cin >> money_sum;// ¬вод суммы денег на балансе
		while (money_sum > credit_limite) { // ќшибка выход за сумму кредита 
			money_sum = 0;
			cout << "\nError\nEnter again: ";
			cin >> money_sum;
		}
		cout << endl;
	}
	void PrintCredit_Card() {
		PrintCredit_Card();
		cout << "Credit limite: " << credit_limite << endl;
		cout << "Account balance: " << money_sum << endl;
	}
};
