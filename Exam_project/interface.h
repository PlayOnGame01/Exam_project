#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include "Maxsum_in_month.h"
#include "Mono_card.h"
#include "privat_card.h"
#include "repeir.h"
#include "Money.h"
#include "Visa_card.h"
#include "interface.h"
using namespace std;

void Menu() {
	typedef map<double, string> MyMap;
	typedef MyMap::iterator Iter;
	MyMap m;
	Iter it;


	vector<Mono_card*> Mono_card;
	vector<Privat_card*> privat_card;
	vector<Money*> Money;
	int credit_counter = 0;
	int debit_counter = 0;
	int wallet_counter = 0;

	ofstream report("Report.txt"); // ?? ??????????!!!
	ofstream out_report;
	ifstream in_report;

	int day = 0;
	string line;

	string number_card;
	int choose, choose_case1, choose_case2, choose_case3, choose_case4;
	int choose_case_3_1, choose_case_3_2, choose_case_3_3, choose_case_3_4;
	bool exit = false;
	while (exit != true) {
		cout << "\n1. Add\n2. Show\n3. Entering costs\n4. Expense Report\n5. Exit\n-> ";
		cin >> choose;
		switch (choose) {
		case 1:
			cout << "\n1. Credit card\n2. Debit card\n3. Wallet\n-> ";
			cin >> choose_case1;
			switch (choose_case1) {
			case 1:
				credit_card.push_back(new CreditCard());
				credit_card[credit_counter]->Input();
				credit_counter++;
				break;

			case 2:
				debit_card.push_back(new DebitCard());
				debit_card[debit_counter]->Input();
				debit_counter++;
				break;

			case 3:
				wallet.push_back(new Wallet());
				wallet[wallet_counter]->Input();
				wallet_counter++;
				break;
			}
			break;

		case 2:
			cout << "\n1. Credit card\n2. Debit card\n3. Wallet\n4. All\n-> ";
			cin >> choose_case2;
			switch (choose_case2) {
			case 1:
				cout << "\nEnter number of card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < credit_card.size(); i++) {
					if (number_card == credit_card[i]->NumberOfCard()) {
						credit_card[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 2:
				cout << "\nEnter number of card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < debit_card.size(); i++) {
					if (number_card == debit_card[i]->NumberOfCard()) {
						debit_card[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 3:
				cout << "Enter number of wallet: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < wallet.size(); i++) {
					if (number_card == wallet[i]->getNumberOfWallet()) {
						wallet[i]->Print();
					}
				}
				cin.ignore();
				break;

			case 4:
				for (int i = 0; i < credit_card.size(); i++) {
					cout << "\nCredit card " << i + 1 << endl;
					credit_card[i]->Print();
					cout << endl;
				}
				for (int i = 0; i < debit_card.size(); i++) {
					cout << "\nDebit card " << i + 1 << endl;
					debit_card[i]->Print();
					cout << endl;
				}
				for (int i = 0; i < wallet.size(); i++) {
					cout << "Wallet " << i + 1 << endl;
					wallet[i]->Print();
					cout << endl;
				}
				break;
			}
			break;

		case 3:
			cout << "\n1. Tax\n2. Purchases\n3. Food\n4. Entertainment\n-> ";
			cin >> choose_case3;
			switch (choose_case3) {
			case 1:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. Debit card\n-> ";
				cin >> choose_case_3_1;
				switch (choose_case_3_1) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->NumberOfCard()) {
							credit_card[i]->TaxCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < debit_card.size(); i++) {
						if (number_card == debit_card[i]->NumberOfCard()) {
							debit_card[i]->TaxCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				}
				break;

			case 2:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. Debit card\n-> ";
				cin >> choose_case_3_2;
				switch (choose_case_3_2) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->NumberOfCard()) {
							credit_card[i]->PurchasesCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < debit_card.size(); i++) {
						if (number_card == debit_card[i]->NumberOfCard()) {
							debit_card[i]->PurchasesCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				}
				break;

			case 3:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. Debit card\n-> ";
				cin >> choose_case_3_3;
				switch (choose_case_3_3) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->NumberOfCard()) {
							credit_card[i]->FoodCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < debit_card.size(); i++) {
						if (number_card == debit_card[i]->NumberOfCard()) {
							debit_card[i]->FoodCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				}
				break;

			case 4:
				cout << "\nChoose card:" << endl;
				cout << "1. Credit card\n2. Debit card\n-> ";
				cin >> choose_case_3_4;
				switch (choose_case_3_4) {
				case 1:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < credit_card.size(); i++) {
						if (number_card == credit_card[i]->NumberOfCard()) {
							credit_card[i]->EntertainmentCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;

				case 2:
					cout << "Enter number of card: ";
					cin >> number_card;
					for (int i = 0; i < debit_card.size(); i++) {
						if (number_card == debit_card[i]->NumberOfCard()) {
							debit_card[i]->EntertainmentCosts();
							cout << endl;
						}
					}
					cin.ignore();
					break;
				}
				break;
			}
			break;

		case 4:
			out_report.open("Save report.txt");
			in_report.open("Save report.txt");
			cout << "\n1. Credit card\n2. Debit card\n-> ";
			cin >> choose_case4;
			if (choose_case4 == 1) {
				cout << "\nEnter number of card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < credit_card.size(); i++) {
					if (number_card == credit_card[i]->NumberOfCard()) {
						m.emplace(make_pair(credit_card[i]->getTaxExpens(), "Tax: "));
						m.emplace(make_pair(credit_card[i]->getPurchasesExpens(), "Purchase: "));
						m.emplace(make_pair(credit_card[i]->getFoodExpens(), "Food: "));
						m.emplace(make_pair(credit_card[i]->getEntertainmentExpens(), "Entertainment: "));
					}
				}
				cin.ignore();
			}
			else if (choose_case4 == 2) {
				cout << "\nEnter number of card: ";
				cin >> number_card;
				cout << endl;
				for (int i = 0; i < debit_card.size(); i++) {
					if (number_card == debit_card[i]->NumberOfCard()) {
						m.emplace(make_pair(debit_card[i]->getTaxExpens(), "Tax: "));
						m.emplace(make_pair(debit_card[i]->getPurchasesExpens(), "Purchase: "));
						m.emplace(make_pair(debit_card[i]->getFoodExpens(), "Food: "));
						m.emplace(make_pair(debit_card[i]->getEntertainmentExpens(), "Entertainment: "));
					}
				}
				cin.ignore();
			}

			cout << "\n1. Expens on the first day\n2. Expens on the week\n-> ";
			cin >> choose_case4;
			if (choose_case4 == 1) {
				day++;
				out_report << day << endl;
				for (it = m.end(); it != m.begin(); ) {
					it--;
					out_report << it->second << it->first << endl;
				} m.clear();
				if (day == 1) {
					while (!in_report.eof()) {
						if (line == to_string(day) || line != to_string(day + 1)) {
							getline(in_report, line);
							report << line << endl;
						}
					}
					cout << "Completed..." << endl;
				}
			}
			else if (choose_case4 == 2) {
				day++;
				out_report << day << endl;
				for (it = m.end(); it != m.begin(); ) {
					it--;
					out_report << it->second << it->first << endl;
				} m.clear();
				if (day == 7) {
					while (!in_report.eof()) {
						if (line == to_string(day) || line != to_string(day + 1)) {
							getline(in_report, line);
							report << line << endl;
						}
					}
					cout << "Completed..." << endl;
				}
			}

			out_report.close();
			in_report.close();
			break;

		case 5:
			exit = true;
			break;
		}
	}

}