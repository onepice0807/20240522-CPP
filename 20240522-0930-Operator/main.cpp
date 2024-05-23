#include <iostream>

using namespace std;

// 상속
// 상속을 하는 방법에는
// 일반화, 특수화

// 동물육성 시물레이션 게임 
// 소, 돼지, 닭
// 기존 20240522-0900-Operator 프로젝트의 main.cpp파일 내용에 
// Stock 클래스를 만들어서 소, 돼지, 닭 클래스가 상속되게 만들기

class Stock {
private:
	string _name; // 이름
	float _weight; // 몸무게
	float _height; // 신장
	float _health; // 건강지수

public:
	Stock(string name, float weight, float height, float health)
		: _name(name), _weight(weight), _height(height), _health(health) {}

	string GetName() {
		return _name;
	}

	void Speak() {
		cout << _name << "이 말합니다." << endl;
	}

	void Run() {
		cout << _name << "이 뜁니다." << endl;
	}

	void Eat() {
		cout << _name << "이 먹습니다." << endl;
	}

	string GetHealth() {
		if (_health > 80) {
			return "매우 건강";
		}

		else if (_health > 60 && _health <= 80) {
			return "건강";
		}

		else if (_health > 40 && _health <= 60) {
			return "부실";
		}
		else {
			return "치료요망";
		}
	}

	void Info() {
		cout << "이름: " << _name << endl;
		cout << "몸무게: " << _weight << endl;
		cout << "신장: " << _height << endl;
		cout << "건강지수: " << _health << endl;
	}
};

class Cow : public Stock {

public:
	Cow(string name, float weight, float height, float health)
		: Stock(name, weight, height, health) {}


	void Speak() {
		cout << GetName() << "가 음매합니다." << endl;
	}
};

class Pig : public Stock {

public:
	Pig(string name, float weight, float height, float health)
		: Stock(name, weight, height, health) {}

	void Speak() {
		cout << GetName() << "가 꿀꿀합니다." << endl;
	}
};

class Chicken : public Stock {
private:
	bool _isFly;

	void Fly() {
		cout << GetName() << "이 납니다." << endl;
	}

public:
	Chicken(string name, float weight, float height, float health, bool isFly)
		: Stock(name, weight, height, health), _isFly(isFly){}

	
	void Speak() {
		cout << GetName() << "이 꼬끼오합니다." << endl;
	}

	void Run() {
		if (_isFly) {
			Fly();
		}
		else {
			Stock::Run();
		}
	}

	void Info() {
		Stock::Info();

		if (_isFly) {
			cout << "종류: 나는 닭" << endl;
		}
		else {
			cout << "종류: 못 나는 닭" << endl;
		}
	}
};

class Sheep : public Stock {
private:
	int _type; // 0: 털을 제공하는 양, 1: 고기를 제공하는 양

public:
	Sheep(string name, float weight, float height, float health, int type)
		: Stock(name, weight, height, health), _type(type){}

	void Speak() {
		cout << GetName() << "이 음메메에합니다." << endl;
	}

	void Info() {
		Stock::Info();

		switch (_type) {
		case 0:
			cout << "종류: 털양" << endl;
			break;
		case 1:
			cout << "종류:고기양" << endl;
			break;
		default:
			cout << "종류: 미확인" << endl;
			break;
		}
	}
};

class Horse : public Stock {
private: 
	bool _type; // true 보통 말, false 조랑말

public:
	Horse(string name, float weight, float height, float health, bool type)
		: Stock(name, weight, height, health), _type(type) {}

	void Speak() {
		cout << GetName() << "이 히이잉합니다." << endl;
	}

	void Info() {
		Stock::Info();

		if (_type) {
			cout << "종류: 보통말" << endl;
		}
		else {
			cout << "종류: 조랑말" << endl;
		}
	}
};

int main() {
	Cow cow("소", 230.0f, 200.0f, 81.0f);
	Pig pig("돼지", 190.0f, 160.0f, 75.0f);
	Chicken flyChicken("나는 닭", 4.0f, 40.0f, 60.0f, true);
	Chicken notFlyChicken("못 나는 닭", 3.8f, 40.0f, 60.0f, false);
	Sheep purSheeap("털양", 100.0f, 110.0f, 80.0f, 0);
	Sheep beefSheeap("고기 양", 120.0f, 120.0f, 70.0f, 0);
	Horse normalHorse("보통말", 150.0f, 130.0f, 70.0f, 0);
	Horse pony("보통말", 100.0f, 100.0f, 70.0f, 0);

	cow.Speak();
	pig.Speak();
	flyChicken.Speak();
	notFlyChicken.Speak();
	purSheeap.Speak();
	beefSheeap.Speak();

	cout << endl;

	cow.Run();
	pig.Run();
	flyChicken.Run();
	notFlyChicken.Run();
	purSheeap.Run();
	beefSheeap.Run();

	cout << endl;

	cow.Info();
	cout << endl;
	pig.Info();
	cout << endl;
	flyChicken.Info();
	cout << endl;
	notFlyChicken.Info();
	cout << endl;
	purSheeap.Info();
	cout << endl;
	beefSheeap.Info();

	return 0;
}