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
		cin >> name;	//���� �����
		cout << "Enter your surname: ";	
		cin >> surname;	//���� �������
		cout << "Enter name of bank: ";	
		cin >> bank_name_mono;	//���� ����� �����
		cout << "Enter number of your card: ";
		cin >> numb;	//���� �������� �����
		cout << "Enter date: ";
		cin >> data;	//���� ��� �������� 
		cout << "Enter your cvv code: ";
		cin >> cvv;	// ���� 3 ������ ���� 
		while (cvv < 100 || cvv > 999) {
			cvv = 0;
			cout << "\nError\nEnter again: "; 
			cin >> cvv; //������ ��������� ���� ������ ���-����
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;//���� �����
		cout << "Surname: " << surname << endl;//���� �������
		cout << "Bank: " << bank_name_mono << endl;//���� ����� �����
		cout << "Card number: " << numb << endl;//���� �������� �����
		cout << "Data: " << data << endl;// ���� 3 ������ ���� 
		cout << "CVV code: " << cvv << endl;//���� ��� �������� 
	}

};