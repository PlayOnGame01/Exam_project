#pragma once
#include <iostream>
#include <string>
using namespace std;

class Mono_card {
protected:
	string name;
	string surname;
	string bank_name_mono;
	string numb;
	string data;
	int cvv;

public:
	Mono_card() = default;
	Mono_card(string n, string s, string bnm, string num, string ed, int cvv) {
		name = n;
		surname = s;
		bank_name_mono = bnm;
		numb = num;
		data = ed;
		this->cvv = cvv;
	}
	Mono_card(Mono_card& obj) {
		name = obj.name;
		surname = obj.surname;
		bank_name_mono = obj.bank_name_mono;
		numb = obj.numb;
		cvv = obj.cvv;
		data = obj.data;
	}

	void InputCard() {
		cout << endl;
		cout << "Enter your name: ";		
		cin >> name;	//¬вод имени
		cout << "Enter your surname: ";	
		cin >> surname;	//¬вод фамилии
		cout << "Enter name of bank: ";	
		cin >> bank_name_mono;	//¬вод имени банка
		cout << "Enter number of your card: ";
		cin >> numb;	//¬вод лицевого счета
		cout << "Enter date: ";
		cin >> data;	//¬вод дн€ рождени€ 
		cout << "Enter your cvv code: ";
		cin >> cvv;	// ¬вод 3 задних цифр 
		while (cvv < 100 || cvv > 999) {
			cvv = 0;
			cout << "\nError\nEnter again: "; 
			cin >> cvv; //ќшибка повторный ввод данных пин-кода
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;//¬вод имени
		cout << "Surname: " << surname << endl;//¬вод фамилии
		cout << "Bank: " << bank_name_mono << endl;//¬вод имени банка
		cout << "Card number: " << numb << endl;//¬вод лицевого счета
		cout << "Data: " << data << endl;// ¬вод 3 задних цифр 
		cout << "CVV code: " << cvv << endl;//¬вод дн€ рождени€ 
	}

};