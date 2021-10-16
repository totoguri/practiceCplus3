//#include <iostream>
//using std::cout;
//using std::endl;

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
//		cout << "요청 내용을 계산합니다." << endl;
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
//			cout << "충전이 필요합니다." << endl;
//			return;
//		}
//		cout << "이동하면서 ";
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
//			cout << "충전이 필요합니다." << endl;
//			return;
//		}
//		if (strcmp(regstPenModel, penInfo) != 0) {
//			cout << "등록된 펜이 아닙니다.";
//			return;
//		}
//		cout << "필기 내용을 처리합니다." << endl;
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
//class Police {
//private:
//	int handcuffs;
//	Gun* pistol;
//public:
//	Police(int bnum, int bcuff) : handcuffs(bcuff) {
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//	void PutHandcuff() {
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shot() {
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shot();
//	}
//	~Police() {
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main() {
//	Police pman1(5, 3);
//	pman1.Shot();
//	pman1.PutHandcuff();
//
//	Police pman2(0, 3);
//	pman2.Shot();
//	pman2.PutHandcuff();
//	return 0;
//}


//#include <cstring>
//class Employee {
//private:
//	char name[100];
//public:
//	Employee(const char* name) {
//		int len = strlen(name) + 1;
//		strcpy_s(this->name, len, name);
//	}
//	void ShowYourName() const {
//		cout << "name: " << name << endl;
//	}
//};
//
//class PermanentWorker : public Employee {
//private:
//	int salary;
//public:
//	PermanentWorker(const char* name, int money) : Employee(name), salary(money) {
//		//
//	}
//	int GetPay() const {
//		return salary;
//	}
//	void ShowSalaryInfo() const {
//		ShowYourName();
//		cout << "Salary: " << GetPay() << endl << endl;
//	}
//};
//
//class TemporaryWorker : public Employee {
//private:
//	int workTime;
//	int payPerHour;
//public:
//	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {
//		//
//	}
//	void AddWorkTime(int time) {
//		workTime += time;
//	}
//	int GetPay() const {
//		return workTime * payPerHour;
//	}
//	void ShowSalaryInfo() const {
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class SalesWorker : public PermanentWorker {
//private:
//	int salesResult;
//	double bonusRatio;
//public:
//	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {
//		//
//	}
//	void AddSalesResult(int value) {
//		salesResult += value;
//	}
//	int GetPay() const {
//		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
//	}
//	void ShowSalaryInfo() const {
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class EmployeeHandler {
//private:
//	Employee* empList[50];
//	int empNum;
//public:
//	EmployeeHandler() : empNum(0) {
//		//
//	}
//	void AddEmployee(Employee* emp) {
//		empList[empNum++] = emp;
//	}
//	void ShowAllSalaryInfo() const {
//		//
//	}
//	void ShowTotalSalary() const {
//		int sum = 0;
//		//
//		cout << "salary sum: " << sum << endl;
//	}
//	~EmployeeHandler() {
//		for (int i = 0; i < empNum; i++)
//			delete empList[i];
//	}
//};
//
//int main(void) {
//	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
//	EmployeeHandler handler;
//
//	// 정규직 등록
//	handler.AddEmployee(new PermanentWorker("KIM", 1000));
//	handler.AddEmployee(new PermanentWorker("LEE", 1500));
//	
//	// 임시직 등록
//	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
//	alba->AddWorkTime(5);
//	handler.AddEmployee(alba);
//
//	// 영업직 등록
//	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
//	seller->AddSalesResult(7000);
//	handler.AddEmployee(seller);
//
//	// 이번 달에 지불해야 할 급여의 정보
//	handler.ShowAllSalaryInfo();
//
//	// 이번 달에 지불해야 할 급여의 종합
//	handler.ShowTotalSalary();
//	return 0;
//}


//class First {
//public:
//	virtual void MyFunc() {
//		cout << "FirstFunc" << endl;
//	}
//};
//
//class Second : public First {
//public:
//	virtual void MyFunc() {
//		cout << "SecondFunc" << endl;
//	}
//};
//
//class Third : public Second {
//public:
//	virtual void MyFunc() {
//		cout << "ThirdFunc" << endl;
//	}
//};
//
//int main() {
//	Third* tptr = new Third();
//	Second* sptr = tptr;
//	First* fptr = sptr;
//
//	fptr->MyFunc();
//	sptr->MyFunc();
//	tptr->MyFunc();
//	delete tptr;
//	return 0;
//}


//#include <cstring>
//class Employee {
//private:
//	char name[100];
//public:
//	Employee(const char* name) {
//		int len = strlen(name) + 1;
//		strcpy_s(this->name, len, name);
//	}
//	void ShowYourName() const {
//		cout << "name: " << name << endl;
//	}
//	virtual int GetPay() const {
//		return 0;
//	}
//	virtual void ShowSalaryInfo() const {
//		//
//	}
//};
//
//class PermanentWorker : public Employee {
//private:
//	int salary;
//public:
//	PermanentWorker(const char* name, int money) : Employee(name), salary(money) {
//		//
//	}
//	int GetPay() const {
//		return salary;
//	}
//	void ShowSalaryInfo() const {
//		ShowYourName();
//		cout << "Salary: " << GetPay() << endl << endl;
//	}
//};
//
//class TemporaryWorker : public Employee {
//private:
//	int workTime;
//	int payPerHour;
//public:
//	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHour(pay) {
//		//
//	}
//	void AddWorkTime(int time) {
//		workTime += time;
//	}
//	int GetPay() const {
//		return workTime * payPerHour;
//	}
//	void ShowSalaryInfo() const {
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class SalesWorker : public PermanentWorker {
//private:
//	int salesResult;
//	double bonusRatio;
//public:
//	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {
//		//
//	}
//	void AddSalesResult(int value) {
//		salesResult += value;
//	}
//	int GetPay() const {
//		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
//	}
//	void ShowSalaryInfo() const {
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//};
//
//class EmployeeHandler {
//private:
//	Employee* empList[50];
//	int empNum;
//public:
//	EmployeeHandler() : empNum(0) {
//		//
//	}
//	void AddEmployee(Employee* emp) {
//		empList[empNum++] = emp;
//	}
//	void ShowAllSalaryInfo() const {
//		for (int i = 0; i < empNum; i++)
//			empList[i]->ShowSalaryInfo();
//	}
//	void ShowTotalSalary() const {
//		int sum = 0;
//		for (int i = 0; i < empNum; i++)
//			sum += empList[i]->GetPay();
//		cout << "salary sum: " << sum << endl;
//	}
//	~EmployeeHandler() {
//		for (int i = 0; i < empNum; i++)
//			delete empList[i];
//	}
//};
//
//int main(void) {
//	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체 생성
//	EmployeeHandler handler;
//
//	// 정규직 등록
//	handler.AddEmployee(new PermanentWorker("KIM", 1000));
//	handler.AddEmployee(new PermanentWorker("LEE", 1500));
//	
//	// 임시직 등록
//	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
//	alba->AddWorkTime(5);
//	handler.AddEmployee(alba);
//
//	// 영업직 등록
//	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
//	seller->AddSalesResult(7000);
//	handler.AddEmployee(seller);
//
//	// 이번 달에 지불해야 할 급여의 정보
//	handler.ShowAllSalaryInfo();
//
//	// 이번 달에 지불해야 할 급여의 종합
//	handler.ShowTotalSalary();
//	return 0;
//}


//class First {
//private:
//	char* strOne;
//public:
//	First(const char* str) {
//		strOne = new char[strlen(str) + 1];
//	}
//	virtual ~First() {
//		cout << "~First()" << endl;
//		delete[]strOne;
//	}
//};
//
//class Second : public First {
//private:
//	char* strTwo;
//public:
//	Second(const char* str1, const char* str2) : First(str1) {
//		strTwo = new char[strlen(str2) + 1];
//	}
//	virtual ~Second() {
//		cout << "~Second()" << endl;
//		delete[]strTwo;
//	}
//};
//
//int main() {
//	First* ptr = new Second("simple", "complex");
//	delete ptr;
//	return 0;
//}


//class First {
//public:
//	void FirstFunc() {
//		cout << "FirstFunc()" << endl;
//	}
//	virtual void SimpleFunc() {
//		cout << "First's SimpleFunc()" << endl;
//	}
//};
//
//class Second : public First {
//public:
//	void SecondFunc() {
//		cout << "SecondFunc()" << endl;
//	}
//	virtual void SimpleFunc() {
//		cout << "Second's SimpleFunc()" << endl;
//	}
//};
//
//class Third : public Second {
//public:
//	void ThirdFunc() {
//		cout << "ThirdFunc()" << endl;
//	}
//	virtual void SimpleFunc() {
//		cout << "Third's SimpleFunc()" << endl;
//	}
//};
//
//int main() {
//	Third obj;
//	obj.FirstFunc();
//	obj.SecondFunc();
//	obj.ThirdFunc();
//	obj.SimpleFunc();
//
//	Second& sref = obj;
//	sref.FirstFunc();
//	sref.SecondFunc();
//	sref.SimpleFunc();
//
//	First& fref = obj;
//	fref.FirstFunc();
//	fref.SimpleFunc();
//	return 0;
//}


//class Data {
//private:
//	int data;
//public:
//	Data(int num) : data(num) {
//		//
//	}
//	void ShowData() {
//		cout << "Data: " << data << endl;
//	}
//	void Add(int num) {
//		data += num;
//	}
//};
//
//int main() {
//	Data obj(15);
//	obj.Add(17);
//	obj.ShowData();
//	return 0;
//}


//typedef struct Data {
//	int data;
//	void (*ShowData)(Data*);
//	void (*Add)(Data*, int);
//} Data;
//
//void ShowData(Data* THIS) {
//	cout << "Data: " << THIS->data << endl;
//}
//
//void Add(Data* THIS, int num) {
//	THIS->data += num;
//}
//
//int main() {
//	Data obj1 = { 15, ShowData, Add };
//	Data obj2 = { 7, ShowData, Add };
//
//	obj1.Add(&obj1, 17);
//	obj2.Add(&obj2, 9);
//	obj1.ShowData(&obj1);
//	obj2.ShowData(&obj2);
//	return 0;
//}


//class AAA {
//private:
//	int num1;
//public:
//	AAA() : num1(0) {};
//	virtual void Func1() {
//		cout << "Func1" << endl;
//	}
//	virtual void Func2() {
//		cout << "Func2" << endl;
//	}
//};
//
//class BBB : public AAA {
//private:
//	int num2;
//public:
//	BBB() : AAA(), num2(0) {};
//	virtual void Func1() {
//		cout << "BBB::Func1" << endl;
//	}
//	void Func3() {
//		cout << "Func3" << endl;
//	}
//};
//
//int main() {
//	AAA* aptr = new AAA();
//	aptr->Func1();
//
//	BBB* bptr = new BBB();
//	bptr->Func1();
//	return 0;
//}

// p.380


//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {
//		//
//	}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point operator+(const Point& ref) {
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//};
//
//int main() {
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//	return 0;
//}


//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {
//		//
//	}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	friend Point operator+(const Point& pos1, const Point& pos2);
//};
//
//Point operator+(const Point& pos1, const Point& pos2) {
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	return pos;
//}
//
//int main() {
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//	return 0;
//}


//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {
//		//
//	}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point& operator++() {
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	friend Point& operator--(Point& ref);
//};
//
//Point& operator--(Point& ref) {
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//
//int main() {
//	Point pos(1, 2);
//	++pos;
//	pos.ShowPosition();
//	--pos;
//	pos.ShowPosition();
//
//	++(++pos);
//	pos.ShowPosition();
//	--(--pos);
//	pos.ShowPosition();
//	return 0;
//}


//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {
//		//
//	}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point& operator++() {
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	const Point operator++(int) {
//		const Point retobj(xpos, ypos);
//		xpos += 1;
//		ypos += 1;
//		return retobj;
//	}
//	friend Point& operator--(Point& ref);
//	friend const Point operator--(Point& ref, int);
//};
//
//Point& operator--(Point& ref) {
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//
//const Point operator--(Point& ref, int) {
//	const Point retobj(ref);
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return retobj;
//}
//
//int main() {
//	Point pos(3, 5);
//	Point cpy;
//	cpy = pos--;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//
//	cpy = pos++;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//	return 0;
//}


//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {
//		//
//	}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point operator*(int times) {
//		Point pos(xpos * times, ypos * times);
//		return pos;
//	}
//	friend Point operator*(int times, Point& ref);
//};
//
//Point operator*(int times, Point& ref) {
//	return ref * times;
//}
//
//int main() {
//	Point pos(1, 2);
//	Point cpy;
//
//	cpy = pos * 3;
//	cpy.ShowPosition();
//
//	cpy = pos * 3 * 2;
//	cpy.ShowPosition();
//	return 0;
//}


//namespace mystd {
//	using namespace std;
//
//	class ostream {
//	public:
//		void operator<< (const char* str) {
//			printf("%s", str);
//		}
//		void operator<< (char str) {
//			printf("%c", str);
//		}
//		void operator<< (int num) {
//			printf("%d", num);
//		}
//		void operator<< (double e) {
//			printf("%g", e);
//		}
//		void operator<< (ostream& (*fp)(ostream& ostm)) {
//			fp(*this);
//		}
//	};
//
//	ostream& endl(ostream& ostm) {
//		ostm << '\n';
//		fflush(stdout);
//		return ostm;
//	}
//
//	ostream cout;
//}
//
//int main() {
//	using mystd::cout;
//	using mystd::endl;
//
//	cout << "Simple String";
//	cout << endl;
//	cout << 3.14;
//	cout << endl;
//	cout << 123;
//	endl(cout);
//	return 0;
//}

// END.