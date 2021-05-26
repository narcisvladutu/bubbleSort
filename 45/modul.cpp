#include "modul.h"
#include<iostream>
using namespace std;

SECVENTA::SECVENTA()
{
	this->lungime = 0;
	this->numere = NULL;
}

SECVENTA::SECVENTA(int lungime)
{
	this->lungime = lungime;
	this->numere = new int[lungime];
}

SECVENTA::~SECVENTA()
{
	if (this->numere != NULL) {
		delete[] this->numere;
		this->numere = NULL;
	}
	this->lungime = 0;
}

int SECVENTA::getLung()
{
	return this->lungime;
}

void SECVENTA::setLung(int lungime)
{
	this->lungime = lungime;
	if (this->numere != NULL) {
		delete[] this->numere;
		this->numere = NULL;
	}
	this->numere = new int[lungime];
}

int SECVENTA::getElem(int pozitie)
{
	return this->numere[pozitie];
}

void SECVENTA::setElem(int numar, int pozitie)
{
	this->numere[pozitie] = numar;
}

void SECVENTA::bubbleSort()
{
	int i, utima_pozitie_unde_am_facut_o_schimbare;                         
	int lungimea_subsecventei_ramase_neordonate = this->lungime;               
	do {
		utima_pozitie_unde_am_facut_o_schimbare = 0;
		for (i = 0; i < lungimea_subsecventei_ramase_neordonate; i++)
			if (this->numere[i] < this->numere[i + 1]) {
				swap(this->numere[i], this->numere[i + 1]);      
				utima_pozitie_unde_am_facut_o_schimbare = i;
			}
		lungimea_subsecventei_ramase_neordonate = utima_pozitie_unde_am_facut_o_schimbare;
	} while (utima_pozitie_unde_am_facut_o_schimbare > 0);
}
