#include "shape.h"

// Простейший контейнер на основе одномерного массива
class container {
public:
	enum { max_len = 100 }; // максимальная длина
	int len; // текущая длина
	shape *cont[max_len];

	container();   // инициализация контейнера
	~container() { Clear(); }   // утилизация контейнера

	void In(ifstream &ifst);  // ввод фигур
	void Out(ofstream &ofst);  // вывод фигур
	void Clear();  // очистка контейнера от фигур
	void Sort();
	void OutBall(ofstream &ofst);
	void OutParallelepiped(ofstream &ofst);
	void OutTetraedr(ofstream &ofst);
	void Multimethod(ofstream &outFile);
};