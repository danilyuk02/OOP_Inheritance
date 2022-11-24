// ����� Danilova Galina

#include "Smartphone.h"

Smartphone::Smartphone() 
	:ElectroDevice()
{
	count_sim = 0;
	network = main_camera = "None";
}

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
Smartphone::Smartphone(const string& _os, const string& _proc, const string& _maker, const string& _model,
	int ram_size, const string& ram_unit_measur, int storage_size, const string& storageunit_measur,
	int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal,
	const string& _network, const string& _main_camera, unsigned int _count_sim)
	:ElectroDevice(_os, _proc, _maker, _model, ram_size, ram_unit_measur, storage_size,
		storageunit_measur, _year, _audio_jacks, _webcam, _screen_resolution, _diagonal)
{
	set_count_sim(_count_sim);
	main_camera = _main_camera;
	network = _network;
}

Smartphone::Smartphone(const string& _maker, const string& _os, const string& _model)
{
	maker = _maker;
	os = _os;
	model = _model;
}

// �������� ������
void Smartphone::set_main_camera(const string& m_camera)
{
	main_camera = m_camera;
}

// ����
void Smartphone::set_network(const string& _network)
{
	network = _network;
}

// ���-�� �������
void Smartphone::set_count_sim(unsigned int count)
{
	if (count_sim > 0)
		count_sim = count;
	else
		throw invalid_argument("���-�� ��� ���� ������ ���� ������ 0.");
}


// ���������� �������� ������
string Smartphone::get_main_camera() const
{
	return main_camera;
}

// ����������� ����
string Smartphone::get_network() const
{
	return network;
}

// ���-�� �������
unsigned int Smartphone::get_count_network() const
{
	return count_sim;
}

// �������������� � ������
string Smartphone::get_tostring() const
{
	string res;
	res += ElectroDevice::get_tostring() +
		"���-�� ���-���� " + to_string(count_sim) + "\n" +
		"���� " + network + "\n" + 
		"�������� ������ " + main_camera + "\n";
	return res;
}

