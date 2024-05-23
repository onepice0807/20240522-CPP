#include <iostream>
#include <string>

using namespace std;
// Ư��ȭ
// ���� ���� �ù����̼ǰ���
// ����, ��, ��, ����

enum type {
	COW,
	PIG,
	CHICKEN,
	DOLPHIN
};


class Animal {
private:
	int _type; // 0: ��, 1: ����, 2: ��
	string _name; 
	float _weight; 
	float _height; 
	float _healthRate;
	bool _isFly;
	bool _isSwim;

	void Fly() {
		cout << _name << "�� ���ϴ�." << endl;
	}

	void Swim() {
		cout << _name << "�� ���Ĩ�ϴ�." << endl;
	}
public: 
	Animal(int type, string name, float weight, float height, float _healthRate, bool isFly, bool isSwim)
		: _type(type), _name(name), _weight(weight), _height(height), _healthRate(_healthRate), _isFly(isFly), _isSwim(isSwim) {}

	void Speak() {
		switch (_type) {
		case COW:
			cout << _name << "�� �����մϴ�." << endl;
			break;

		case PIG:
			cout << _name << "�� �ܲ��մϴ�." << endl;
			break;
		case CHICKEN:
			cout << _name << "�� �������մϴ�." << endl;
			break;
		case DOLPHIN:
			cout << _name << "�� �����մϴ�." << endl;
			break;
		default:
			cout << _name << "�� ���մϴ�." << endl;
			break;
		}
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else if (_isSwim) {
			Swim();
		}
		else {
			cout << _name << "�� �ݴϴ�." << endl;
		}
	}

	string GetHealth() {
		if (_healthRate > 80) {
			return "�ſ� �ǰ�";
		}

		else if (_healthRate > 60 && _healthRate <= 80) {
			return "�ǰ�";
		}

		else if (_healthRate > 40 && _healthRate <= 60) {
			return "�ν�";
		}
		else {
			return "ġ����";
		}
	}

	void Info() {
		cout << "�̸�: " << _name << endl;
		cout << "������: " << _weight << endl;
		cout << "����: " << _height << endl;
		cout << "�ǰ�����: " << GetHealth() << endl;

		if (_type == CHICKEN) {
			if (_isFly) {
				cout << "����: ���� ��" << endl;
			}
			else {
				cout << "����: �� ���� ��" << endl;
			}
		}
	}
};

int main() {

	Animal cow(COW, "��", 280.0f, 160.0f, 77.0f, false, false);
	Animal pig(PIG, "����", 230.0f, 160.0f, 88.0f, false, false);
	Animal flyChicken(CHICKEN, "���� ��", 4.5f, 43.0f, 90.0f, false, false);
	Animal notFlyChicken(CHICKEN, "�� ���� ��", 230.0f, 40.0f, 66.0f, false, false);
	Animal dolphin(DOLPHIN, "����", 300.0f, 200.0f, 84.0f, false, true);


	cow.Speak();
	pig.Speak();
	flyChicken.Speak();
	notFlyChicken.Speak();
	dolphin.Speak();

	cout << endl;

	cow.Run();
	pig.Run();
	flyChicken.Run();
	notFlyChicken.Run();
	dolphin.Run();

	cout << endl;

	cow.Info();
	cout << endl;
	pig.Info();
	cout << endl;
	flyChicken.Info();
	cout << endl;
	notFlyChicken.Info();
	cout << endl;
	dolphin.Info();

	return 0;
}