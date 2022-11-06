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
	string data;
	int cvv;

public:
	Vias_card() = default;
	Vias_card(string n, string s, string bn, string num, string ed, int cvv) {
		name = n;
		surname = s;
		bank_name_visa = bn;
		numb = num;
		this->cvv = cvv;
		data = ed;
	}
	Vias_card(Vias_card& obj) {
		name = obj.name;
		surname = obj.surname;
		bank_name_visa = obj.bank_name_visa;
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
		cin >> bank_name_visa;	//¬вод имени банка
		cout << "Enter number of your card: ";
		cin >> numb;	//¬вод лицевого счета
		cout << "Enter date: ";
		cin >> data;	//¬вод дн€ рождени€ 
		cout << "Enter your cvv code: ";
		cin >> cvv;	// ¬вод 3 задних цифр 
		while (cvv < 100 || cvv > 999) { //¬вод только 3 значного числа если будет больше тогда выдаст ошибку 
			cvv = 0;
			cout << "\nError\nEnter again: ";
			cin >> cvv; //ќшибка повторный ввод данных пин-кода
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;//¬вод имени
		cout << "Surname: " << surname << endl;//¬вод фамилии
		cout << "Bank: " << bank_name_visa << endl;//¬вод имени банка
		cout << "Card number: " << numb << endl;//¬вод лицевого счета
		cout << "Data: " << data << endl;// ¬вод 3 задних цифр 
		cout << "CVV code: " << cvv << endl;//¬вод дн€ рождени€ 
	}

};