// ***** �þ�Դ� C++ *****
// 09, Oct 2021

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//int main() {
//	cout << "Hello, World" << endl;
//	return 0;
//}

// p.30


//int change_val(int* p) {
//	*p = 3;
//	return 0;
//}
//
//int main() {
//	int number = 5;
//	cout << number << endl;
//	change_val(&number);
//	cout << number << endl;
//}


//int main() {
//	int a = 3;
//	int& another_a = a;
//
//	another_a = 5;
//	cout << "a: " << a << endl;
//	cout << "another_a: " << another_a << endl;
//	return 0;
//}


//void change_val(int& p) {
//	p = 3;
//}
//
//int main() {
//	int number = 5;
//	cout << number << endl;
//	change_val(number);
//	cout << number << endl;
//}


//int main() {
//	int x;
//	int& y = x;
//	int& z = y;
//
//	x = 1;
//	cout << "x: " << x << " y: " << y << " z: " << z << endl;
//	y = 2;
//	cout << "x: " << x << " y: " << y << " z: " << z << endl;
//	z = 3;
//	cout << "x: " << x << " y: " << y << " z: " << z << endl;
//}


//int main() {
//	int arr[3] = { 1, 2, 3 };
//	int(&ref)[3] = arr;
//	int* pref = arr;
//
//	ref[0] = 2;
//	ref[1] = 3;
//	ref[2] = 1;
//
//	cout << arr[0] << arr[1] << arr[2] << endl;
//	cout << pref[0] << pref[1] << pref[2] << endl;
//	return 0;
//}


//int& function(int& a) {
//	a = 5;
//	return a;
//}
//
//int main() {
//	int b = 2;
//	int c = function(b);
//	return 0;
//}


//int function() {
//	int a = 5;
//	return a;
//}
//
//int main() {
//	const int& c = function();
//	cout << "c : " << c << endl;
//	return 0;
//}


//int main() {
//	int* p = new int;
//	*p = 10;
//
//	cout << *p << endl;
//	delete p;
//	return 0;
//}


//int main() {
//	int arr_size;
//	cout << "array size : ";
//	cin >> arr_size;
//	int* list = new int[arr_size];
//	
//	for (int i = 0; i < arr_size; i++) {
//		cin >> list[i];
//	}
//
//	for (int i = 0; i < arr_size; i++) {
//		cout << i << "th element of the list : " << list[i] << endl;
//	}
//
//	delete[] list;
//	return 0;
//}


//typedef struct Animal {
//	char name[30];
//	int age;
//
//	int health;
//	int food;
//	int clean;
//} Animal;
//
//void create_animal(Animal* animal) {
//	cout << "������ �̸�: ";
//	cin >> animal->name;
//
//	cout << "������ ����: ";
//	cin >> animal->age;
//
//	animal->health = 100;
//	animal->food = 100;
//	animal->clean = 100;
//}
//
//void play(Animal* animal) {
//	animal->health += 10;
//	animal->food -= 20;
//	animal->clean -= 30;
//}
//
//void one_day_pass(Animal* animal) {
//	animal->health -= 10;
//	animal->food -= 30;
//	animal->clean -= 20;
//}
//
//void show_stat(Animal* animal) {
//	cout << animal->name << "�� ����" << endl;
//	cout << "ü�� : " << animal->health << endl;
//	cout << "��θ� : " << animal->food << endl;
//	cout << "û�� : " << animal->clean << endl;
//}
//
//int main() {
//	Animal* list[10];
//	int animal_num = 0;
//
//	for (;;) {
//		cout << "1. ���� �߰��ϱ�" << endl;
//		cout << "2. ���" << endl;
//		cout << "3. ���� ����" << endl;
//
//		int input;
//		cout << "->��ȣ ����: ";
//		cin >> input;
//
//		switch (input) {
//			int play_with;
//		case 1:
//			list[animal_num] = new Animal;
//			create_animal(list[animal_num]);
//
//			animal_num++;
//			break;
//
//		case 2:
//			cout << "������ ���?: ";
//			cin >> play_with;
//
//			if (play_with < animal_num) 
//				play(list[play_with]);
//			break;
//
//		case 3:
//			cout << "���� �� ��ȣ: ";
//			cin >> play_with;
//			if (play_with < animal_num)
//				show_stat(list[play_with]);
//			break;
//		}
//
//		for (int i = 0; i < animal_num; i++) {
//			one_day_pass(list[i]);
//		}
//	}
//
//	for (int i = 0; i < animal_num; i++) {
//		delete list[i];
//	}
//}


//class Animal {
//private:
//	int food;
//	int weight;
//
//public:
//	void set_animal(int food, int weight) {
//		this->food = food;
//		this->weight = weight;
//	}
//	void increase_food(int inc) {
//		this->food += inc;
//		this->weight += (inc / 3);
//	}
//	void view_stat() {
//		cout << "�� ������ food   : " << food << endl;
//		cout << "�� ������ weight : " << weight << endl;
//	}
//};
//
//int main() {
//	Animal animal;
//	animal.set_animal(100, 50);
//	animal.increase_food(30);
//
//	animal.view_stat();
//	return 0;
//}


// p.84


//class Marine {
//private:
//	int hp;
//	int coord_x, coord_y;
//	int damage;
//	bool is_dead;
//	char* name;
//
//public:
//	Marine() {
//		hp = 50;
//		coord_x = coord_y = 0;
//		damage = 5;
//		is_dead = false;
//	}
//	Marine(int x, int y, const char* marine_name) {
//		name = new char[strlen(marine_name) + 1];
//		strcpy_s(name, strlen(marine_name) + 1, marine_name);
//
//		coord_x = x;
//		coord_y = y;
//		hp = 50;
//		damage = 5;
//		is_dead = false;
//	}
//
//	int attack() {
//		return damage;
//	}
//
//	void be_attacked(int damage_earn) {
//		hp -= damage_earn;
//		if (hp <= 0)
//			is_dead = true;
//	}
//
//	void move(int x, int y) {
//		coord_x = x;
//		coord_y = y;
//	}
//
//	void show_status() {
//		cout << " *** Marine *** " << name << " *** " << endl;
//		cout << " Location : ( " << coord_x << " , " << coord_y << " ) " << endl;
//		cout << " HP : " << hp << endl;
//	}
//
//	~Marine() {
//		cout << name << "�� �Ҹ��� ȣ��" << endl;
//		if (name != NULL) {
//			delete[] name;
//		}
//	}
//};
//
//int main() {
//	Marine* marines[100];
//
//	marines[0] = new Marine(2, 3, "Marine 1");
//	marines[1] = new Marine(3, 5, "Marine 2");
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	cout << endl << "����1�� ����2�� ����!" << endl;
//
//	marines[1]->be_attacked(marines[0]->attack());
//
//	marines[0]->show_status();
//	marines[1]->show_status();
//
//	delete marines[0];
//	delete marines[1];
//	return 0;
//}


class Test {
	char c;

public:
	Test(char c) {
		this->c = c;
		cout << "������ ȣ��" << c << endl;
	}
	~Test()
	{
		cout << "�Ҹ��� ȣ��" << c << endl;
	}
};

void simple_function() {
	Test b('b');
}

int main() {
	Test a('a');
	simple_function();
	return 0;
}

// p.98