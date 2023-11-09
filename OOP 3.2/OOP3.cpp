#include <iostream>
#include <string>
#include "Company.h"
#include "Text.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
    Company company1;
    company1.name = "Computers";
    company1.persons = 100;
    company1.money = 1000000;

    Company company2;
    company2.name = "Books";
    company2.persons = 200;
    company2.money = 2000000;

    // появление недоступного объекта
    company1 = company2;

    cout << "В компании " << company1.name << " трудятся " << company1.persons << " сотрудников" << endl;
    cout << "Фонд зарплаты: " << company1.money << endl;
    Text::displayText();

    //создание и инициализация объекта
    Company factory;
    factory.name = "Премьер";
    factory.persons = 100;
    factory.money = 1000000;

    //вызовы методов
    factory.show();
    cout << "Средняя зарплата: " << factory.averageSalary() << endl;
    cout << "Отчисления: " << factory.minus(13, 4) << endl;

    cout << "Средняя зарплата?" << endl;
    int average;
    cin >> average;
    cout << "Количество сотрудников: " << factory.maxPersons(average) << endl;


	return 0;
}



