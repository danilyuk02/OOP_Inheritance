
// ����� Danilova Galina
#pragma once

#include <string>
#include <iostream>

using namespace std;


// ��������� ������
struct Memory
{
public:
	int size;			// ������
	string unit_measur; // ������� ���������


	// ����������� �� ���������
	Memory()
	{
		size = 0;
		unit_measur = "";
	}

	// ����������� � �������
	Memory(int _size, string _unit_measur)
	{
		size = _size;
		unit_measur = _unit_measur;
	}
};

class ElectroDevice
{
protected:
	string proc, graph_accel;
	string os, maker, model, audio_jacks, webcam, 
		screen_resolution;	// ����������

	Memory ram,				// ����������� ������
		   storage_memory;	// ������ ����������� 

	int year; // ��� ������������
	double diagonal; // ���������

public:
	// ����������� �� ���������
	ElectroDevice();
	

	ElectroDevice(const string& _os, const string& _proc, const string& _maker, const string& _model,
		int ram_size, const string& ram_unit_measur, int storage_size, const string& storageunit_measur,
		int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal);

	void set_proc(const string &_proc);					// ������� ����������
	void set_graph_accel(const string &_graph_accel);	// ������� ������������ ����������
	void set_opsystem(const string &_os);				// ������� ������������ �������
	void set_maker(const string &_maker);				// ������� �������������
	void set_year(int _year);							// ������� ���� ������������
	void set_model(const string &_model);				// ������� ������
	void set_ram_size(int _size);			// ������� ���-�� ����������� ������
	void set_storage_memory_size(int _size);				// ������� ���-�� ���������� ������
	void set_diagonal(const double& _diagonal);				// ������� ���������
	
	string get_proc() const;					// ����������� ����������
	string get_graph_accel() const;				// ����������� ������������ ����������
	string get_opsystem() const;				// ����������� ��
	string get_maker() const;					// ����������� �����-��
	int get_year() const;						// ����������� ���� ������������
	string get_model() const;					// ����������� ������
	string get_ram() const;				// ����������� ���-�� ����. ������
	string get_storage_memory() const;					// ����������� ���-�� ���� ������
	double get_diagonal() const;				// ������� ���������

	virtual string get_tostring() const;		// �������������� � ������


};

