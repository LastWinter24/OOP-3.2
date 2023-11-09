#pragma once
#include <iostream>
#include <string>
class Company {
public:
    std::string name; // название компании
    int persons; // количество сотрудников
    int money; // месячный фонд зарплаты

    void show() {
        std::cout << "В компании " << name << " трудятся " << persons << " сотрудников " << std::endl;
        std::cout << "Фонд зарплаты: " << money << std::endl;
    }

    int averageSalary() {
        return money / persons;
    }

    int maxPersons(int salary) {
        return money / salary;
    }

    int minus(int minus1, int minus2) {
     
        return money * (minus1 + minus2) / 100;
    }
};
