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


#include <cstring>
class Person {
private:
	char* name;

public:
	Person(const char* myname) {
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname)+1, myname);
	}
	~Person() {
		delete[]name;
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person {
private: 
	char* major;

public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname) {
		major = new char[strlen(mymajor) + 1];
		strcpy_s(major, strlen(mymajor)+1, mymajor);
	}
	~UnivStudent() {
		delete[]major;
	}
	void WhoAreYou() const {
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}

// p.304