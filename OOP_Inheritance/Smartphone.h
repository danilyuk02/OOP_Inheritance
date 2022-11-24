// Автор Danilova Galina

#pragma once

#include <string>
#include "ElectroDevice.h"

class Smartphone :
    public ElectroDevice
{
private:
    
    string network,  // сеть 
        main_camera; // основная камера  main camera
    unsigned int count_sim; // кол-во симок
public:
    Smartphone();
   
    /// <summary>
    /// Задание всех полей
    /// </summary>
    /// <param name="_maker"> - Производитель</param>
    /// <param name="_model"> - Модель</param>
    /// <param name="_os"> - Операционная система</param>
    /// <param name="_oper_mem"> - Кол-во оперативной памяти</param>
    /// <param name="_memory"> - Кол-во вмещаемой памяти</param>
    /// <param name="_year"> - Год производства</param>
    /// <param name="_audio_jacks"> - Аудиразъёмы</param>
    /// <param name="_webcam"> - вебкамера</param>
    /// <param name="_size_scr"> - размер экрана</param>
    /// <param name="_count_sim"> - кол-во симкарт</param>
    /// <param name="_network"> - поддержка сети</param>
    /// <param name="_main_camera"> - основная камера</param>
    Smartphone(const string& _os, const string& _proc, const string& _maker, const string& _model,
        int ram_size, const string& ram_unit_measur, int storage_size, const string& storageunit_measur,
        int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal,
        const string& _network, const string& _main_camera, unsigned int count_sim);

    Smartphone(const string& _os, const string& _maker, const string& _model);

    // Задание основной камеры
    void set_main_camera(const string &m_camera);

    // сеть
    void set_network(const string &_network);

    // кол-во симкарт
    void set_count_sim(unsigned int count);

    // возвращение основной камеры
    string get_main_camera() const;

    // возвращение типа сети
    string get_network() const;

    // возвращение кол-ва симок
    unsigned int get_count_network() const;

    // преобразование в строку
    string get_tostring() const;
};

