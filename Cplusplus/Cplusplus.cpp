#include <iostream>
using std::cout;
using std::endl;

//class SoBase {
//private:
//	int baseNum;
//
//public:
//	SoBase() : baseNum(20) {
//		cout << "SoBase()" << endl;
//	}
//	SoBase(int n) : baseNum(n) {
//		cout << "SoBase(int n)" << endl;
//	}
//	void ShowBaseData() {
//		cout << baseNum << endl;
//	}
//};
//
//class SoDerived : public SoBase {
//private:
//	int derivNum;
//
//public:
//	SoDerived() : derivNum(30) {
//		cout << "SoDerived()" << endl;
//	}
//	SoDerived(int n) : derivNum(n) {
//		cout << "SoDerived(int n)" << endl;
//	}
//	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2) {
//		cout << "SoDerived(int n1, int n2)" << endl;
//	}
//	void ShowDerivData() {
//		ShowBaseData();
//		cout << derivNum << endl;
//	}
//};
//
//int main() {
//	cout << "case1..... " << endl;
//	SoDerived dr1;
//	dr1.ShowDerivData();
//	cout << "-----------------------" << endl;
//	cout << "case2..... " << endl;
//	SoDerived dr2(12);
//	dr2.ShowDerivData();
//	cout << "-----------------------" << endl;
//	cout << "case3..... " << endl;
//	SoDerived dr3(23, 24);
//	dr3.ShowDerivData();
//	return 0;
//}


//#include <cstring>
//class Person {
//private:
//	char* name;
//
//public:
//	Person(const char* myname) {
//		name = new char[strlen(myname) + 1];
//		strcpy_s(name, strlen(myname)+1, myname);
//	}
//	~Person() {
//		delete[]name;
//	}
//	void WhatYourName() const {
//		cout << "My name is " << name << endl;
//	}
//};
//
//class UnivStudent : public Person {
//private: 
//	char* major;
//
//public:
//	UnivStudent(const char* myname, const char* mymajor) : Person(myname) {
//		major = new char[strlen(mymajor) + 1];
//		strcpy_s(major, strlen(mymajor)+1, mymajor);
//	}
//	~UnivStudent() {
//		delete[]major;
//	}
//	void WhoAreYou() const {
//		WhatYourName();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//int main() {
//	UnivStudent st1("Kim", "Mathematics");
//	st1.WhoAreYou();
//	UnivStudent st2("Hong", "Physics");
//	st2.WhoAreYou();
//	return 0;
//}

// p.304


//#include <cstring>
//class Computer {
//private:
//	char owner[50];
//public:
//	Computer(const char* name) {
//		strcpy_s(owner, strlen(name) + 1, name);
//	}
//	void Calculate() {
//		cout << "��û ������ ����մϴ�." << endl;
//	}
//};
//
//class NotebookComp : public Computer {
//private:
//	int Battery;
//public:
//	NotebookComp(const char* name, int initChag) : Computer(name), Battery(initChag) {}
//	void Charging() {
//		Battery += 5;
//	}
//	void UseBattery() {
//		Battery -= 1;
//	}
//	void MovingCal() {
//		if (GetBatteryInfo() < 1) {
//			cout << "������ �ʿ��մϴ�." << endl;
//			return;
//		}
//		cout << "�̵��ϸ鼭 ";
//		Calculate();
//		UseBattery();
//	}
//	int GetBatteryInfo() {
//		return Battery;
//	}
//};
//
//class TabletNotebook : public NotebookComp {
//private:
//	char regstPenModel[50];
//public:
//	TabletNotebook(const char* name, int initChag, const char* pen) : NotebookComp(name, initChag) {
//		strcpy_s(regstPenModel, strlen(pen) + 1, pen);
//	}
//	void Write(const char* penInfo) {
//		if (GetBatteryInfo() < 1) {
//			cout << "������ �ʿ��մϴ�." << endl;
//			return;
//		}
//		if (strcmp(regstPenModel, penInfo) != 0) {
//			cout << "��ϵ� ���� �ƴմϴ�.";
//			return;
//		}
//		cout << "�ʱ� ������ ó���մϴ�." << endl;
//		UseBattery();
//	}
//};
//
//int main() {
//	NotebookComp nc("LEE", 5);
//	TabletNotebook tn("JEONG", 5, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//	return 0;
//}

// p.307


//#include <cstring>
//class Gun {
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum) {
//		//
//	}
//	void Shot() {
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police : public Gun {
//private:
//	int handcuffs;
//public:
//	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff) {
//		//
//	}
//	void PutHandcuff() {
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//};
//
//int main() {
//	Police pman(5, 3);
//	pman.Shot();
//	pman.PutHandcuff();
//	return 0;
//}


