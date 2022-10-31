#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vias_card {
protected:
	string name;
	string surname;
	string bank_name_visa;
	string numb;
	string end_date;
	int cvv;

public:
	Vias_card() = default;
	Vias_card(string n, string s, string bn, string num, string ed, int cvv) {
		name = n;
		surname = s;
		bank_name_visa = bn;
		numb = num;
		this->cvv = cvv;
		end_date = ed;
	}
	Vias_card(Vias_card& obj) {
		name = obj.name;
		surname = obj.surname;
		bank_name_visa = obj.bank_name_visa;
		numb = obj.numb;
		cvv = obj.cvv;
		end_date = obj.end_date;
	}

	void InputCard() {
		cout << endl;
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your surname: ";
		cin >> surname;
		cout << "Enter name of bank: ";
		cin >> bank_name_visa;
		cout << "Enter number of your card: ";
		cin >> numb;
		cout << "Enter date: ";
		cin >> end_date;
		cout << "Enter your cvv code: ";
		cin >> cvv;
		while (cvv < 100 || cvv > 999) {
			cvv = 0;
			cout << "\nError\nEnter again: ";
			cin >> cvv;
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Bank: " << bank_name_visa << endl;
		cout << "Card number: " << numb << endl;
		cout << "CVV code: " << cvv << endl;
		cout << "Date: " << end_date << endl;
	}

};