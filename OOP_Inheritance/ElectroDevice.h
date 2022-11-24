
// Автор Danilova Galina
#pragma once

#include <string>
#include <iostream>

using namespace std;


// структура Память
struct Memory
{
public:
	int size;			// размер
	string unit_measur; // единица измерения


	// констурктор по умолчанию
	Memory()
	{
		size = 0;
		unit_measur = "";
	}

	// констурктор с данными
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
		screen_resolution;	// разрешение

	Memory ram,				// оперативная память
		   storage_memory;	// память накопителей 

	int year; // Год производства
	double diagonal; // диагональ

public:
	// конструктор по умолчанию
	ElectroDevice();
	

	ElectroDevice(const string& _os, const string& _proc, const string& _maker, const string& _model,
		int ram_size, const string& ram_unit_measur, int storage_size, const string& storageunit_measur,
		int _year, const string& _audio_jacks, const string& _webcam, const string& _screen_resolution, double _diagonal);

	void set_proc(const string &_proc);					// задание процессора
	void set_graph_accel(const string &_graph_accel);	// задание графического ускорителя
	void set_opsystem(const string &_os);				// задание операционной системы
	void set_maker(const string &_maker);				// задание производителя
	void set_year(int _year);							// задание года производства
	void set_model(const string &_model);				// задание модели
	void set_ram_size(int _size);			// задание кол-ва оперативной памяти
	void set_storage_memory_size(int _size);				// задание кол-ва постоянной памяти
	void set_diagonal(const double& _diagonal);				// задание диагонали
	
	string get_proc() const;					// возвращение процессора
	string get_graph_accel() const;				// возвращение графического ускорителя
	string get_opsystem() const;				// возвращение ОП
	string get_maker() const;					// возвращение произ-ля
	int get_year() const;						// возвращение года производства
	string get_model() const;					// возвращение модели
	string get_ram() const;				// возвращение кол-ва опер. памяти
	string get_storage_memory() const;					// возвращение кол-ва пост памяти
	double get_diagonal() const;				// задание диагонали

	virtual string get_tostring() const;		// преобразование в строку


};

