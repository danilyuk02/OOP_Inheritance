// ����� Danilova Galina

#pragma once

#include <string>
#include "ElectroDevice.h"

class Smartphone :
    public ElectroDevice
{
private:
    
    string network,  // ���� 
        main_camera; // �������� ������  main camera
    unsigned int count_sim; // ���-�� �����
public:
    Smartphone();
   
    /// <summary>
    /// ������� ���� �����
    /// </summary>
    /// <param name="_maker"> - �������������</param>
    /// <param name="_model"> - ������</param>
    /// <param name="_os"> - ������������ �������</param>
    /// <param name="_oper_mem"> - ���-�� ����������� ������</param>
    /// <param name="_memory"> - ���-�� ��������� ������</param>
    /// <param name="_year"> - ��� ������������</param>
    /// <param name="_audio_jacks"> - �����������</param>
    /// <param name="_webcam"> - ���������</param>
    /// <param name="_size_scr"> - ������ ������</param>
    /// <param name="_count_sim"> - ���-�� �������</param>
    /// <param name="_network"> - ��������� ����</param>
    /// <param name="_main_camera"> - �������� ������</param>
    Smartphone(const string& _os, const string& _proc, const string& _maker, const string& _model,
        int ram_size, const string& ram_unit_measur, int storage_size, const string& storageunit_measur,
        int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal,
        const string& _network, const string& _main_camera, unsigned int count_sim);

    Smartphone(const string& _os, const string& _maker, const string& _model);

    // ������� �������� ������
    void set_main_camera(const string &m_camera);

    // ����
    void set_network(const string &_network);

    // ���-�� �������
    void set_count_sim(unsigned int count);

    // ����������� �������� ������
    string get_main_camera() const;

    // ����������� ���� ����
    string get_network() const;

    // ����������� ���-�� �����
    unsigned int get_count_network() const;

    // �������������� � ������
    string get_tostring() const;
};

