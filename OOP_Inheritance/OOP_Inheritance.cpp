// OOP_Inheritance.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Автор Danilova Galina

#include <iostream>
#include "ElectroDevice.h"
#include "Smartphone.h"
#include "Laptop.h"
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    try {
        ElectroDevice ex("Windows 10", "Intel Pentium Gold 6500", "No Name Corporation", "S-908-MKE", 8, "Gb", 256, "GB",
            2018, "3.5 мм jack (микрофон/аудио)", "10 Мп", "3840x2160", 21.5);
        cout << ex.get_tostring();
    }
    catch (exception error)
    {
        cout << error.what() << endl;
    }

    Smartphone smart("Android 12", "Exynos 2200", "Samsung", "Galaxy S22 Ultra", 12, "Gb", 256, "GB",
        2018, "3.5 мм jack (микрофон/аудио)", "40  Мп", "3088х1440", 6.8, "4G", "108 Мп", 2);
    cout << endl << "Смартфон" << endl;
    cout << smart.get_tostring();

    Laptop lap("Windows 10", "Intel Pentium Gold 6500", "No Name Corporation", "S-908-MKE", 8, "Gb", 256, "GB",
        2018, "3.5 мм jack (микрофон/аудио)", "10 Мп", "3840x2160", 21.5, "laptop");
    cout << endl << "Ноутбук" << endl;
    cout << lap.get_tostring();


    cout << endl << "Динамический полиморфизм" << endl;
    ElectroDevice* ptr;
    ptr = &lap;
    cout << "ноутбук" << endl << ptr->get_tostring() << endl;
    ptr = &smart;
    cout << "смартфон" << endl << ptr->get_tostring() << endl;

}
