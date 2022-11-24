// ����� Danilova Galina

#include "Laptop.h"

Laptop::Laptop()
	:ElectroDevice()
{
	type = "None";
}

// ����������� �� ������� ���� �����
Laptop::Laptop(const string& _os, const string& _proc, const string& _maker, const string& _model,
	int ram_size, const string& ram_unit_measur, int storage_size, const string& storageunit_measur,
	int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal,
	const string& _type)
	:ElectroDevice(_os, _proc, _maker, _model, ram_size, ram_unit_measur, storage_size, 
		storageunit_measur, _year, _audio_jacks, _webcam, _screen_resolution, _diagonal)
{
	type = _type;
}

// ���������� ���-���
Laptop::Laptop(const string& _os, const string& _maker, const string& _model)
{
	maker = _maker;
	os = _os;
	model = _model;
}

// ������� ����
void Laptop::set_type(const string& name)
{
	type = name;
}

// ����������� ����
string Laptop::get_type() const
{
	return type;
}

// �������������� � ������
string Laptop::get_tostring() const
{
	string res;
	res += ElectroDevice::get_tostring() + 
		"��� " + type + "\n";
	return res;
}
