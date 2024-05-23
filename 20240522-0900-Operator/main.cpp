#include <iostream>

using namespace std;

// ���
// ����� �ϴ� �������
// �Ϲ�ȭ, Ư��ȭ

// �������� �ù����̼� ���� 
// ��, ����, ��


class Cow {
private:
	string _name; // �̸�
	float _weight; // ������
	float _height; // ����
	float _health; // �ǰ�����

public:
	Cow(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}

	void Speak() {
		cout << _name << "�� �����մϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�." << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
	}

	string GetHealth() {
		if (_health > 80) {
			return "�ſ� �ǰ�";
		}

		else if (_health > 60 && _health <= 80) {
			return "�ǰ�";
		}

		else if (_health > 40 && _health <= 60) {
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
		cout << "�ǰ�����: " << _health << endl;
		cout << endl;
	}
};

class Pig {
private:
	string _name; // �̸�
	float _weight; // ������
	float _height; // ����
	float _health; // �ǰ�����
public:
	Pig(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}

	void Speak() {
		cout << _name << "�� �ܲ��մϴ�." << endl;
	}

	void Run() {
		cout << _name << "�� �ݴϴ�." << endl;
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
	}

	string GetHealth() {
		if (_health > 80) {
			return "�ſ� �ǰ�";
		}

		else if (_health > 60 && _health <= 80) {
			return "�ǰ�";
		}

		else if (_health > 40 && _health <= 60) {
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

	}
};

class Chicken {
private:
	string _name; // �̸�
	float _weight; // ������
	float _height; // ����
	float _health; // �ǰ�����
	bool _isFly;

	void Fly() {
		cout << _name << "�� ���ϴ�." << endl;
	}

public:
	Chicken(string name, float weight, float height, float health, bool isFly)
		: _name(name), _weight(weight), _height(height), _health(health), _isFly(isFly){}

	void Speak() {
		cout << _name << "�� ������ �մϴ�." << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			cout << _name << "�� �ݴϴ�." << endl;
		}
	}

	void Eat() {
		cout << _name << "�� �Խ��ϴ�." << endl;
	}

	string GetHealth() {
		if (_health > 80) {
			return "�ſ� �ǰ�";
		}

		else if (_health > 60 && _health <= 80) {
			return "�ǰ�";
		}

		else if (_health > 40 && _health <= 60) {
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

		if (_isFly) {
			cout << "����: ���� ��" << endl;
		}
		else {
			cout << "����: �� ���� ��" << endl;
		}
	}
};

int main() {
	Cow cow("��", 230.0f, 200.0f, 81.0f);
	Pig pig("����", 190.0f, 160.0f, 75.0f);
	Chicken flyChicken("���� ��", 4.0f, 40.0f, 60.0f, true);
	Chicken notFlyChicken("�� ���� ��", 3.8f, 40.0f, 60.0f, false);

	cow.Speak();
	pig.Speak();
	flyChicken.Speak();
	notFlyChicken.Speak();

	cout << endl;

	cow.Run();
	pig.Run();
	flyChicken.Run();
	notFlyChicken.Run();

	cout << endl;

	cow.Info();
	pig.Info();
	flyChicken.Info();
	notFlyChicken.Info();

	return 0;
}