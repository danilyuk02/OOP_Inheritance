// Автор Danilova Galina

#include "ElectroDevice.h"

// конструктор по умолчанию
ElectroDevice::ElectroDevice()
{
	os = maker = model = "None";
	audio_jacks = webcam = screen_resolution = "None";
	diagonal = year = 0;
	storage_memory.size = ram.size = 0;
	storage_memory.unit_measur = ram.unit_measur = "None";
}

/// <summary>
/// конструктор с заданием всех полей
/// </summary>
/// <param name="_os"> - Операционная система</param>
/// <param name = "_proc"> - процессор< / param>
/// <param name="_maker"> - Производитель</param>
/// <param name="_model"> - Модель</param>
/// <param name="ram_size"> - размер оперативной памяти</param>
/// <param name="ram_unit_measur"> - единица измерения ОП</param>
/// <param name="storage_size"> - размер внутренней памяти</param>
/// <param name="storageunit_measur"> - единица измерения внутренней памяти</param>
/// <param name="_year"> - год производства </param>
/// <param name="_audio_jacks"> - аудиоразъёмы</param>
/// <param name="_webcam"> - вебкамера</param>
/// <param name="_screen_resolution"> - разрешение экрана</param>
/// <param name="_diagonal"> - диагональ экрана</param>
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

// задание процессора
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

// задание ОП
void ElectroDevice::set_opsystem(const string &_os) {
	if (_os == "") throw invalid_argument("Error: field _os is empty");
	os = _os;
}

// задание производителя
void ElectroDevice::set_maker(const string &_maker) {
	if (_maker == "") throw invalid_argument("Error: field _maker is empty");
	maker = _maker;
}

// задание модели
void ElectroDevice::set_model(const string &_model)
{
	if (_model == "") throw invalid_argument("Error: field _model is empty");
	model = _model;
}


// задание года производства
void ElectroDevice::set_year(int _year) {
	if (_year > 1978 && _year < 2023)
		year = _year;
	else
		throw invalid_argument("Некоректный год производства");
}

// задание кол - ва оперативной памяти
void ElectroDevice::set_ram_size(int _size)
{
	if (_size <= 0) throw invalid_argument("Error: field _size error");
	ram.size = _size;
}

// задание кол-ва постоянной памяти
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

// возвращение процессора
string ElectroDevice::get_proc() const
{
	return proc;
}

string ElectroDevice::get_graph_accel() const
{
	return graph_accel;
}

// возвращение ОП
string ElectroDevice::get_opsystem() const{
	return os;
}

// возвращение произ-ля
string ElectroDevice::get_maker() const {
	return maker;
}

// возвращение года производства
int ElectroDevice::get_year() const {
	return year;
}

// возвращение модели
string ElectroDevice::get_model() const 
{
	return model;
}

// возвращение кол-ва опер. памяти
string ElectroDevice::get_ram() const 
{
	return to_string(ram.size) + ram.unit_measur;
}

// возвращение кол-ва пост памяти
string ElectroDevice::get_storage_memory() const 
{
	return to_string(storage_memory.size) + storage_memory.unit_measur;
}

double ElectroDevice::get_diagonal() const
{
	return diagonal;
}

// преобразование в строку
string ElectroDevice::get_tostring() const
{
	string res;
	res = "Производитель - " + maker + "\n" +
		"Операционая система - " + os + "\n" +
		"Модель - " + model + "\n" +
		"Процессор" + proc + "\n" +
		"Графический ускоритель/процессор " + graph_accel + "\n" +
		"Оперативная память - " + to_string(ram.size) + storage_memory.unit_measur + "\n" +
		"Постоянная память - " + to_string(storage_memory.size) + storage_memory.unit_measur + "\n" +
		"Аудиоразъёмы - " + audio_jacks + "\n" +
		"Вебкамера - " + webcam + "\n" +
		"Разрешение экрана - " + screen_resolution + "\n" +
		"Диагональ - " + to_string(diagonal) + "\n" +
		"Год производства - " + to_string(year) + "\n";
	return res;
}
