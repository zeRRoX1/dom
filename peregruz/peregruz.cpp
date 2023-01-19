﻿#include <Windows.h>
#include <iostream>

#include "Person.h";
#include "Apartment.h";
#include "Floor.h"
using namespace std;

int main()
{
    Person* arr = new Person[2];
    Person a((char*)"Eger", (char*)"Naruto", 15);
    Person b((char*)"Uchiha", (char*)"Orochimaru", 17);
    arr[0] = a;
    arr[1] = b;

    Person* arr1 = new Person[2];
    Person a1((char*)"Mitsuki", (char*)"IO", 27);
    Person b1((char*)"Natsu", (char*)"Nami", 99);
    arr1[0] = a1;
    arr1[1] = b1;

    Apartment* one = new Apartment[2];
    Apartment c(2, arr);
    Apartment c1(2, arr1);
    one[0] = c;
    one[1] = c1;

    Floor p(2, one);
    p.PrintA();
}