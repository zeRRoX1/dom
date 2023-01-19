#pragma once
#include <Windows.h>
#include <iostream>
#include "Person.h"

using namespace std;

class Apartment
{
private:
	int size;
	Person* arrr;
public:
	Apartment(int size, Person* arr) {
		this->size = size;
		arrr = new Person[size];
		arrr = arr;
	}
	Apartment() {
		size = 0;
		arrr = new Person[size];
	}
	void PrintPersons() {
		for (int i = 0; i < size; i++) {
			arrr[i].PrintP();
			cout << endl;
		}
	}
	void AddPerson() {
		size++;
		Person* tempRes = new Person[size];
		for (int i = 0; i < size - 1; i++) {
			tempRes[i] = arrr[i];
		}
		tempRes[size - 1].NewP();
		delete[] arrr;
		arrr = new Person[size];
		arrr = tempRes;
	}
	void PrintNumbers() {
		cout << "Number of apartments:\n";
		for (int i = 0; i < size; i++) {
			cout << "|" << i + 1 << "|\n";
		}
	}
	int getSize() {
		return size;
	}
	Person* getResidents() {
		return arrr;
	}
	~Apartment() {
		delete[] arrr;
	}
};