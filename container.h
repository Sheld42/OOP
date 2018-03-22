#include "shape.h"

// ���������� ��������� �� ������ ����������� �������
class container {
	enum { max_len = 100 }; // ������������ �����
	int len; // ������� �����
	shape *cont[max_len];
public:
	container();   // ������������� ����������
	~container() { Clear(); }   // ���������� ����������

	void In(ifstream &ifst);  // ���� �����
	void Out(ofstream &ofst);  // ����� �����
	void Clear();  // ������� ���������� �� �����
	void OutBall(ofstream &ofst);
	void OutParallelepiped(ofstream &ofst);
};