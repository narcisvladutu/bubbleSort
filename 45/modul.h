#pragma once
class SECVENTA
{
private:
    int lungime;		/// lungimea secventei
    int* numere;		/// pointer spre locul unde se memoreaza elementele

public:
    SECVENTA();
    SECVENTA(int);	/// constructor
    ~SECVENTA();

    int  getLung();     	/// accesori
    void setLung(int);
    int  getElem(int);
    void setElem(int, int);

    void bubbleSort();	  	/// sortare secventa
};

