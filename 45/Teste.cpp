#include "Teste.h"
#include "modul.h"
#include <cassert>

void Teste::teste_sortare()
{
	//numerele sunt deja in ordine descrescatoare
	SECVENTA secventa_de_test_1(8);
	secventa_de_test_1.setElem(22, 0);
	secventa_de_test_1.setElem(18, 1);
	secventa_de_test_1.setElem(17, 2);
	secventa_de_test_1.setElem(17, 3);
	secventa_de_test_1.setElem(15, 4);
	secventa_de_test_1.setElem(10, 5);
	secventa_de_test_1.setElem(5, 6);
	secventa_de_test_1.setElem(0, 7);

	secventa_de_test_1.bubbleSort();

	assert(secventa_de_test_1.getLung() == 8);
	assert(secventa_de_test_1.getElem(0) == 22);
	assert(secventa_de_test_1.getElem(1) == 18);
	assert(secventa_de_test_1.getElem(2) == 17);
	assert(secventa_de_test_1.getElem(3) == 17);
	assert(secventa_de_test_1.getElem(4) == 15);
	assert(secventa_de_test_1.getElem(5) == 10);
	assert(secventa_de_test_1.getElem(6) == 5);
	assert(secventa_de_test_1.getElem(7) == 0);

	//numerele sunt in ordine crescatoare initial
	SECVENTA secventa_de_test_2(8);
	secventa_de_test_2.setElem(22, 7);
	secventa_de_test_2.setElem(18, 6);
	secventa_de_test_2.setElem(17, 5);
	secventa_de_test_2.setElem(17, 4);
	secventa_de_test_2.setElem(15, 3);
	secventa_de_test_2.setElem(10, 2);
	secventa_de_test_2.setElem(5, 1);
	secventa_de_test_2.setElem(0, 0);

	secventa_de_test_2.bubbleSort();

	assert(secventa_de_test_2.getLung() == 8);
	assert(secventa_de_test_2.getElem(0) == 22);
	assert(secventa_de_test_2.getElem(1) == 18);
	assert(secventa_de_test_2.getElem(2) == 17);
	assert(secventa_de_test_2.getElem(3) == 17);
	assert(secventa_de_test_2.getElem(4) == 15);
	assert(secventa_de_test_2.getElem(5) == 10);
	assert(secventa_de_test_2.getElem(6) == 5);
	assert(secventa_de_test_2.getElem(7) == 0);

	//numere in forma de munte
	SECVENTA secventa_de_test_3(8);
	secventa_de_test_3.setElem(1, 7);
	secventa_de_test_3.setElem(2, 6);
	secventa_de_test_3.setElem(3, 5);
	secventa_de_test_3.setElem(4, 4);
	secventa_de_test_3.setElem(3, 3);
	secventa_de_test_3.setElem(2, 2);
	secventa_de_test_3.setElem(1, 1);
	secventa_de_test_3.setElem(0, 0);

	secventa_de_test_3.bubbleSort();

	assert(secventa_de_test_3.getLung() == 8);
	assert(secventa_de_test_3.getElem(0) == 4);
	assert(secventa_de_test_3.getElem(1) == 3);
	assert(secventa_de_test_3.getElem(2) == 3);
	assert(secventa_de_test_3.getElem(3) == 2);
	assert(secventa_de_test_3.getElem(4) == 2);
	assert(secventa_de_test_3.getElem(5) == 1);
	assert(secventa_de_test_3.getElem(6) == 1);
	assert(secventa_de_test_3.getElem(7) == 0);

	//numere alandala
	SECVENTA secventa_de_test_4(8);
	secventa_de_test_4.setElem(678, 0);
	secventa_de_test_4.setElem(345, 1);
	secventa_de_test_4.setElem(456, 2);
	secventa_de_test_4.setElem(100, 3);
	secventa_de_test_4.setElem(234, 4);
	secventa_de_test_4.setElem(5000, 5);
	secventa_de_test_4.setElem(12, 6);
	secventa_de_test_4.setElem(47, 7);

	secventa_de_test_4.bubbleSort();

	assert(secventa_de_test_4.getLung() == 8);
	assert(secventa_de_test_4.getElem(0) == 5000);
	assert(secventa_de_test_4.getElem(1) == 678);
	assert(secventa_de_test_4.getElem(2) == 456);
	assert(secventa_de_test_4.getElem(3) == 345);
	assert(secventa_de_test_4.getElem(4) == 234);
	assert(secventa_de_test_4.getElem(5) == 100);
	assert(secventa_de_test_4.getElem(6) == 47);
	assert(secventa_de_test_4.getElem(7) == 12);
}
