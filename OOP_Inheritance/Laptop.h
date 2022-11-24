// ����� Danilova Galina

#pragma once

#include <string>

#include "ElectroDevice.h"

class Laptop : public ElectroDevice
{
private:
    string type; // ��� ��������

public:
    Laptop();

    /// <summary>
    /// ����������� �� ������� ���� �����
    /// </summary>
    /// <param name="_maker"> - �������������</param>
    /// <param name="_model"> - ������</param>
    /// <param name="_type"> - ���</param>
    /// <param name="_os"> - ������������ �������</param>
    /// <param name="_oper_mem"> - ���-�� ����������� ������</param>
    /// <param name="_memory"> - ���-�� ��������� ������</param>
    /// <param name="_data"> - ��� ������������</param>
    /// <param name="_diagonal"> - ���������</param>
    Laptop(const string& _os, const string& _proc, const string& _maker, const string& _model,
        int ram_size, const string& ram_unit_measur, int storage_size, const string& storage_unit_measur,
        int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal,
        const string& _type);

    Laptop(const string& _maker, const string& _os, const string& _model);

    // ������� ����
    void set_type(const string &_����);

    // ����������� ����
    string get_type() const;

    // �������������� � ������
    string get_tostring() const;
};

