#pragma once
#include <iostream>
using namespace std;
class PhoneBook
{
private:
	char* name = new char[125];
	char* surName = new char[125];
	char* middleName = new char[125];
	int homePhoneNumb;
	int workPhoneNumb;
	char* moreData = new char[255];
public:
	PhoneBook(char* n, char* sN, char* mN, int hPN, int wPN, char* mD) {
		strcpy_s(name, 126, n);
		strcpy_s(surName, 126, sN);
		strcpy_s(middleName, 126, mN);
		strcpy_s(moreData, 126, mD);
		homePhoneNumb = hPN;
		workPhoneNumb = wPN;
	}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surName << endl;
		cout << "Middle name: " << middleName << endl;
		cout << "Home phone Number: " << homePhoneNumb << endl;
		cout << "Work phone Number: " << workPhoneNumb << endl;
		cout << "More data: " << moreData << endl << endl;
	}

	char* getName() {
		return name;
	}
	char* getSurName() {
		return surName;
	}
	char* getMiddleName() {
		return middleName;
	}
	int getHomeNumber() {
		return homePhoneNumb;
	}
	int getWorkNumber() {
		return workPhoneNumb;
	}
	char* getMoreData() {
		return moreData;
	}
	~PhoneBook() {
		delete[]name;
		delete[]surName;
		delete[]middleName;
		delete[]moreData;
	}
};
