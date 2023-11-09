#include <iostream>
#include <string>
#include "Company.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    Company company1;
    company1.name = "Computers";
    company1.persons = 100;
    company1.money = 1000000; // рис. 3.4а

    Company company2;
    company2.name = "Books";
    company2.persons = 200;
    company2.money = 2000000; // рис. 3.4б

    // появление недоступного объекта
    company1 = company2; // рис.3.4с

    cout << "В компании " << company1.name << " трудятся " << company1.persons << " сотрудников" << endl;
    cout << "Фонд зарплаты: " << company1.money << endl;

	return 0;
}



