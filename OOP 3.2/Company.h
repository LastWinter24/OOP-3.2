#pragma once
#include <iostream>
#include <string>
class Company {
public:
    std::string name; // �������� ��������
    int persons; // ���������� �����������
    int money; // �������� ���� ��������

    void show() {
        std::cout << "� �������� " << name << " �������� " << persons << " ����������� " << std::endl;
        std::cout << "���� ��������: " << money << std::endl;
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
