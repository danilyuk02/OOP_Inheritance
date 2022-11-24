// Автор Danilova Galina

#pragma once

#include <string>

#include "ElectroDevice.h"

class Laptop : public ElectroDevice
{
private:
    string type; // тип ноутбука

public:
    Laptop();

    /// <summary>
    /// Конструктор по заданию всех полей
    /// </summary>
    /// <param name="_maker"> - Производитель</param>
    /// <param name="_model"> - Модель</param>
    /// <param name="_type"> - Тип</param>
    /// <param name="_os"> - Операционная система</param>
    /// <param name="_oper_mem"> - Кол-во оперативной памяти</param>
    /// <param name="_memory"> - Кол-во вмещаемой памяти</param>
    /// <param name="_data"> - Год производства</param>
    /// <param name="_diagonal"> - Диагональ</param>
    Laptop(const string& _os, const string& _proc, const string& _maker, const string& _model,
        int ram_size, const string& ram_unit_measur, int storage_size, const string& storage_unit_measur,
        int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal,
        const string& _type);

    Laptop(const string& _maker, const string& _os, const string& _model);

    // Задание типа
    void set_type(const string &_ензу);

    // Возвращение типа
    string get_type() const;

    // Преобразование в строку
    string get_tostring() const;
};

