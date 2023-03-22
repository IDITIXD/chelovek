#include <iostream>
#include <string>
using namespace std;
class CHELOVEK

{
private:
public:
	CHELOVEK() {}
	~CHELOVEK() {}
	virtual string GetInfo() = 0;
};

class RABOCHIY : public CHELOVEK
{
private:
	string name;
	int vozrast;
	string doljnost;
	int stag;
public:
	RABOCHIY() : name("Иван"), vozrast(37), doljnost("уборщик"), stag(2) {}
	RABOCHIY(string n, int v, string d, int s) : name(n), vozrast(v), doljnost(d), stag(v) {}
	~RABOCHIY() {}
	string GetInfo()
	{
		string info = "РАБОЧИЙ\n\n";
		info += "Имя: " + name + "\n";
		info += "Возраст: " + to_string(vozrast) + "  лет/года\n";
		info += "Должность: " + doljnost + "\n";
		info += "Стаж: " + to_string(stag) + "  лет/года";
		return info;
	}
};

class INGENER : public CHELOVEK
{
private:
	string name;
	int vozrast;
	string obrazovanie;
	string namef;
public:
	INGENER() : name("Станислав"), vozrast(25), obrazovanie("высшее"), namef("РАНД") {}
	INGENER(string n, int v, string o, string f) : name(n), vozrast(v), obrazovanie(o), namef(f) {}
	~INGENER() {}
	string GetInfo()

	{
		string info = "ИНЖЕНЕР\n\n";
		info += "Имя: " + name + "\n";
		info += "Возраст: " + to_string(vozrast) + "  лет/года\n";
		info += "Образование: " + obrazovanie + "\n";
		info += "Имя фирмы: " + namef + "\n";
		return info;
	}


};

class SNS : public CHELOVEK

{
private:
	string name;
	int vozrast;
	string tema;
public:
	SNS() : name("Антон"), vozrast(39), tema("существование единорогов") {}
	SNS(string n, int v, string t) : name(n), vozrast(v), tema(t) {}
	~SNS() {}
	string GetInfo()
	{
		string info = "СТАРШИЙ НАУЧНЫЙ СОТРУДНИК\n\n";
		info += "Имя: " + name + "\n";
		info += "Возраст: " + to_string(vozrast) + "  лет/года\n";
		info += "Тема научной работы: " + tema;
		return info;
	}
};

int main()

{
	setlocale(0, "");
	CHELOVEK* chel[3] = { new RABOCHIY,new INGENER,new SNS };
	for (int i = 0; i < 3; i++) cout << "\n" << chel[i]->GetInfo() << "\n\n";
	for (int i = 0; i < 3; i++)delete chel[i];
	return 0;
}
