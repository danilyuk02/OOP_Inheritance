// Автор Danilova Galina

#include "Smartphone.h"

Smartphone::Smartphone() 
	:ElectroDevice()
{
	count_sim = 0;
	network = main_camera = "None";
}

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

// основная камера
void Smartphone::set_main_camera(const string& m_camera)
{
	main_camera = m_camera;
}

// сеть
void Smartphone::set_network(const string& _network)
{
	network = _network;
}

// кол-во симкарт
void Smartphone::set_count_sim(unsigned int count)
{
	if (count_sim > 0)
		count_sim = count;
	else
		throw invalid_argument("Кол-во сим карт должно быть больше 0.");
}


// возращение основной камеры
string Smartphone::get_main_camera() const
{
	return main_camera;
}

// возвращение сеть
string Smartphone::get_network() const
{
	return network;
}

// кол-ва симкарт
unsigned int Smartphone::get_count_network() const
{
	return count_sim;
}

// Преобразование в строку
string Smartphone::get_tostring() const
{
	string res;
	res += ElectroDevice::get_tostring() +
		"Кол-во сим-карт " + to_string(count_sim) + "\n" +
		"Сеть " + network + "\n" + 
		"Основная камера " + main_camera + "\n";
	return res;
}

