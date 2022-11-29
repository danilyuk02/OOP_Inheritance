// ����� Danilova Galina

#include "ElectroDevice.h"

// ����������� �� ���������
ElectroDevice::ElectroDevice()
{
	os = maker = model = "None";
	audio_jacks = webcam = screen_resolution = "None";
	diagonal = year = 0;
	storage_memory.size = ram.size = 0;
	storage_memory.unit_measur = ram.unit_measur = "None";
}

/// <summary>
/// ����������� � �������� ���� �����
/// </summary>
/// <param name="_os"> - ������������ �������</param>
/// <param name = "_proc"> - ���������< / param>
/// <param name="_maker"> - �������������</param>
/// <param name="_model"> - ������</param>
/// <param name="ram_size"> - ������ ����������� ������</param>
/// <param name="ram_unit_measur"> - ������� ��������� ��</param>
/// <param name="storage_size"> - ������ ���������� ������</param>
/// <param name="storageunit_measur"> - ������� ��������� ���������� ������</param>
/// <param name="_year"> - ��� ������������ </param>
/// <param name="_audio_jacks"> - ������������</param>
/// <param name="_webcam"> - ���������</param>
/// <param name="_screen_resolution"> - ���������� ������</param>
/// <param name="_diagonal"> - ��������� ������</param>
ElectroDevice::ElectroDevice(const string& _os, const string& _proc, const string& _maker, const string& _model,
	int ram_size, const string& ram_unit_measur, int storage_size, const string& storage_unit_measur,
	int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal)
{
	os = _os;
	proc = _proc;
	maker = _maker;
	model = _model;
	set_year(_year);
	ram.size = ram_size;
	ram.unit_measur = ram_unit_measur;
	storage_memory.size = storage_size;
	storage_memory.unit_measur = storage_unit_measur;
	audio_jacks = _audio_jacks;
	webcam = _webcam; 
	screen_resolution = _screen_resolution;
	diagonal = _diagonal;
}

// ������� ����������
void ElectroDevice::set_proc(const string& _proc)
{
	if (_proc == "") throw invalid_argument("Error: field _proc is empty");
	proc = _proc;
}

void ElectroDevice::set_graph_accel(const string& _graph_accel)
{
	if (_graph_accel == "") throw invalid_argument("Error: field _graph_accel is empty");
	graph_accel = _graph_accel;
}

// ������� ��
void ElectroDevice::set_opsystem(const string &_os) {
	if (_os == "") throw invalid_argument("Error: field _os is empty");
	os = _os;
}

// ������� �������������
void ElectroDevice::set_maker(const string &_maker) {
	if (_maker == "") throw invalid_argument("Error: field _maker is empty");
	maker = _maker;
}

// ������� ������
void ElectroDevice::set_model(const string &_model)
{
	if (_model == "") throw invalid_argument("Error: field _model is empty");
	model = _model;
}


// ������� ���� ������������
void ElectroDevice::set_year(int _year) {
	if (_year > 1978 && _year < 2023)
		year = _year;
	else
		throw invalid_argument("����������� ��� ������������");
}

// ������� ��� - �� ����������� ������
void ElectroDevice::set_ram_size(int _size)
{
	if (_size <= 0) throw invalid_argument("Error: field _size error");
	ram.size = _size;
}

// ������� ���-�� ���������� ������
void ElectroDevice::set_storage_memory_size(int _size)
{
	if (_size <= 0) throw invalid_argument("Error: field _size error");
	storage_memory.size = _size;
}

//
void ElectroDevice::set_diagonal(const double& _diagonal)
{
	if (_diagonal <= 0) throw invalid_argument("Error: field _size error");
	diagonal = _diagonal;
}

// ����������� ����������
string ElectroDevice::get_proc() const
{
	return proc;
}

string ElectroDevice::get_graph_accel() const
{
	return graph_accel;
}

// ����������� ��
string ElectroDevice::get_opsystem() const{
	return os;
}

// ����������� �����-��
string ElectroDevice::get_maker() const {
	return maker;
}

// ����������� ���� ������������
int ElectroDevice::get_year() const {
	return year;
}

// ����������� ������
string ElectroDevice::get_model() const 
{
	return model;
}

// ����������� ���-�� ����. ������
string ElectroDevice::get_ram() const 
{
	return to_string(ram.size) + ram.unit_measur;
}

// ����������� ���-�� ���� ������
string ElectroDevice::get_storage_memory() const 
{
	return to_string(storage_memory.size) + storage_memory.unit_measur;
}

double ElectroDevice::get_diagonal() const
{
	return diagonal;
}

// �������������� � ������
string ElectroDevice::get_tostring() const
{
	string res;
	res = "������������� - " + maker + "\n" +
		"����������� ������� - " + os + "\n" +
		"������ - " + model + "\n" +
		"���������" + proc + "\n" +
		"����������� ����������/��������� " + graph_accel + "\n" +
		"����������� ������ - " + to_string(ram.size) + storage_memory.unit_measur + "\n" +
		"���������� ������ - " + to_string(storage_memory.size) + storage_memory.unit_measur + "\n" +
		"������������ - " + audio_jacks + "\n" +
		"��������� - " + webcam + "\n" +
		"���������� ������ - " + screen_resolution + "\n" +
		"��������� - " + to_string(diagonal) + "\n" +
		"��� ������������ - " + to_string(year) + "\n";
	return res;
}
