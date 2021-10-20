// 09, Oct 2021
// C++ Primer.pdf

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


//#include <list>
//int main() {
//	std::list<int> lst;
//
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	lst.push_back(40);
//
//	for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//		cout << *itr << endl;
//	}
//}


//#include <list>
//template <typename T>
//void print_list(std::list<T>& lst) {
//	cout << "[ ";
//	for (const auto& elem : lst) {
//		cout << elem << " ";
//	}
//	cout << "]" << endl;
//}
//
//int main() {
//	std::list<int> lst;
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	lst.push_back(40);
//
//	cout << "ó�� ����Ʈ�� ����" << endl;
//	print_list(lst);
//
//	for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//		if (*itr == 20) {
//			lst.insert(itr, 50);
//		}
//	}
//
//	cout << "���� 20�� ���� �տ� 50�� �߰�" << endl;
//	print_list(lst);
//
//	for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//		if (*itr == 30) {
//			lst.erase(itr);
//			break;
//		}
//	}
//
//	cout << "���� 30�� ���Ҹ� �����Ѵ�" << endl;
//	print_list(lst);
//}


//#include <deque>
//
//template <typename T>
//void print_deque(std::deque<T>& dq) {
//	cout << "[ ";
//	for (const auto& elem : dq) {
//		cout << elem << " ";
//	}
//	cout << " ] " << endl;
//}
//
//int main() {
//	std::deque<int> dq;
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//	dq.push_back(40);
//
//	cout << "�ʱ� dq ����" << endl;
//	print_deque(dq);
//
//	cout << "�� ���� ���� ����" << endl;
//	dq.pop_front();
//	print_deque(dq);
//}


//#include <set>
//
//template <typename T>
//void print_set(std::set<T>& s) {
//	cout << "[ ";
//	for (typename std::set<T>::iterator itr = s.begin(); itr != s.end(); ++itr) {
//		cout << *itr << " ";
//	}
//	cout << " ] " << endl;
//}
//
//int main() {
//	std::set<int> s;
//	s.insert(10);
//	s.insert(50);
//	s.insert(20);
//	s.insert(40);
//	s.insert(30);
//
//	cout << "������� ����" << endl;
//	print_set(s);
//
//	cout << "20�� s�� �����ΰ���? :: ";
//	auto itr = s.find(50);
//	if (itr != s.end()) {
//		cout << "Yes" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}
//
//	cout << "25�� s�� �����ΰ��� :: ";
//	itr = s.find(25);
//	if (itr != s.end()) {
//		cout << "Yes" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}
//}


//#include <set>
//#include <string>
//
//template <typename T>
//void print_set(std::set<T>& s) {
//	for (const auto& elem : s) {
//		std::cout << elem << " " << std::endl;
//	}
//}
//	
//
//class Todo {
//private:
//	int priority;
//	std::string job_desc;
//public:
//	Todo(int priority, std::string job_desc) : priority(priority), job_desc(job_desc) {}
//
//	bool operator<(const Todo& t) const {
//		if (priority == t.priority) {
//			return job_desc < t.job_desc;
//		}
//		return priority > t.priority;
//	}
//
//	friend std::ostream& operator<<(std::ostream& o, const Todo& td);
//};
//
//std::ostream& operator<<(std::ostream& o, const Todo& td) {
//	o << "[ �߿䵵: " << td.priority << "] " << td.job_desc;
//	return o;
//}
//
//int main() {
//	std::set<Todo> todos;
//
//	todos.insert(Todo(1, "���ϱ�"));
//	todos.insert(Todo(2, "���� ���� �ϱ�"));
//	todos.insert(Todo(1, "���α׷��� ������Ʈ"));
//	todos.insert(Todo(3, "ģ�� ������"));
//	todos.insert(Todo(2, "��ȭ ����"));
//
//	print_set(todos);
//
//	cout << "--------------" << endl;
//	cout << "������ ���´ٸ�!" << endl;
//	todos.erase(todos.find(Todo(2, "���� ���� �ϱ�")));
//	print_set(todos);
//}


//#include <set>
//#include <string>
//
//template <typename T, typename C>
//void print_set(std::set<T, C>& s) {
//	for (const auto& elem : s) {
//		std::cout << elem << " " << endl;
//	}
//}
//
//class Todo {
//private:
//	int priority;
//	std::string job_desc;
//public:
//	Todo(int priority, std::string job_desc) : priority(priority), job_desc(job_desc) {}
//	friend struct TodoCmp;
//	friend std::ostream& operator<<(std::ostream& o, const Todo& td);
//};
//
//struct TodoCmp {
//	bool operator() (const Todo& t1, const Todo& t2) const {
//		if (t1.priority == t2.priority) {
//			return t1.job_desc < t2.job_desc;
//		}
//		return t1.priority > t2.priority;
//	}
//};
//
//std::ostream& operator<<(std::ostream& o, const Todo& td) {
//	o << "[ �߿䵵 : " << td.priority << "] " << td.job_desc;
//	return o;
//}
//
//int main() {
//	std::set<Todo, TodoCmp> todos;
//	todos.insert(Todo(1, "���ϱ�"));
//	todos.insert(Todo(2, "���� ���� �ϱ�"));
//	todos.insert(Todo(3, "���α׷��� ������Ʈ"));
//	todos.insert(Todo(4, "ģ�� ������"));
//	todos.insert(Todo(5, "��ȭ ����"));
//
//	print_set(todos);
//
//	std::cout << " ----------------- " << endl;
//	std::cout << "������ ���´ٸ�!" << endl;
//	todos.erase(todos.find(Todo(2, "���� ���� �ϱ�")));
//	print_set(todos);
//}


//#include <map>
//#include <string>
//
//template <typename K, typename V>
//void print_map(std::map<K, V>& m) {
//	for (auto itr = m.begin(); itr != m.end(); ++itr) {
//		cout << itr->first << " " << itr->second << endl;
//	}
//}
//
//int main() {
//	std::map<std::string, double> pitcher_list;
//
//	pitcher_list.insert(std::pair<std::string, double>("�ڼ���", 2.23));
//	pitcher_list.insert(std::pair<std::string, double>("��Ŀ:", 2.93));
//	pitcher_list.insert(std::pair<std::string, double>("�Ǿ���", 2.95));
//
//	pitcher_list.insert(std::make_pair("������", 3.04));
//	pitcher_list.insert(std::make_pair("�����", 3.05));
//	pitcher_list.insert(std::make_pair("����", 3.09));
//
//	pitcher_list["����Ʈ"] = 3.56;
//	pitcher_list["������"] = 3.76;
//	pitcher_list["�̸�"] = 3.90;
//
//	print_map(pitcher_list);
//	cout << "�ڼ��� �������? :: " << pitcher_list["�ڼ���"] << endl;
//}


//#include <map>
//#include <string>
//
//template <typename K, typename V>
//void print_map(const std::map<K, V>& m) {
//	for (const auto& kv : m) {
//		cout << kv.first << " " << kv.second << endl;
//	}
//}
//
//template <typename K, typename V>
//void search_and_print(std::map<K, V>& m, K key) {
//	auto itr = m.find(key);
//	if (itr != m.end()) {
//		cout << key << " --> " << itr->second << endl;
//	}
//	else {
//		cout << key << "��(��) ��Ͽ� �����ϴ�" << endl;
//	}
//}
//
//int main() {
//	std::map<std::string, double> pitcher_list;
//	pitcher_list["����ȯ"] = 3.58;
//
//	print_map(pitcher_list);
//	cout << " ------------------- " << endl;
//	search_and_print(pitcher_list, std::string("����ȯ"));
//	search_and_print(pitcher_list, std::string("������"));
//}


//#include <map>
//#include <string>
//
//template <typename K, typename V>
//void print_map(const std::multimap<K, V>& m) {
//	for (const auto& kv : m) {
//		cout << kv.first << " " << kv.second << endl;
//	}
//}
//
//int main() {
//	std::multimap<int, std::string> m;
//	m.insert(std::make_pair(1, "hello"));
//	m.insert(std::make_pair(1, "hi"));
//	m.insert(std::make_pair(1, "ahihi"));
//	m.insert(std::make_pair(2, "bye"));
//	m.insert(std::make_pair(2, "baba"));
//
//	print_map(m);
//	cout << " ---------------- " << endl;
//
//	auto range = m.equal_range(1);
//	for (auto itr = range.first; itr != range.second; ++itr) {
//		cout << itr->first << " : " << itr->second << " " << endl;
//	}
//}


//#include <string>
//#include <unordered_set>
//
//template <typename K>
//void print_unordered_set(const std::unordered_set<K>& m) {
//	for (const auto& elem : m) {
//		cout << elem << endl;
//	}
//}
//
//template <typename K>
//void is_exist(std::unordered_set<K>& s, K key) {
//	auto itr = s.find(key);
//	if (itr != s.end()) {
//		cout << key << "�� ����" << endl;
//	}
//	else {
//		cout << key << "�� ����" << endl;
//	}
//}
//
//int main() {
//	std::unordered_set<std::string> s;
//
//	s.insert("hi");
//	s.insert("my");
//	s.insert("name");
//	s.insert("is");
//	s.insert("psi");
//	s.insert("welcome");
//	s.insert("to");
//	s.insert("c++");
//
//	print_unordered_set(s);
//	
//	cout << " ---------------- " << endl;
//	is_exist(s, std::string("c++"));
//	is_exist(s, std::string("c"));
//
//	cout << " ----------------- " << endl;
//	cout << "'hi'�� ����" << endl;
//	s.erase(s.find("hi"));
//	is_exist(s, std::string("hi"));
//}

// p.556


//#include <algorithm>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		std::cout << *begin << " ";
//		begin++;
//	}
//	std::cout << std::endl;
//}
//
//struct int_compare {
//	bool operator()(const int& a, const int& b) const {
//		return a > b;
//	}
//};
//
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(1);
//	vec.push_back(6);
//	vec.push_back(4);
//	vec.push_back(7);
//	vec.push_back(2);
//
//	std::cout << "���� �� ----" << std::endl;
//	print(vec.begin(), vec.end());
//	std::sort(vec.begin(), vec.end(), int_compare());
//
//	std::cout << "���� �� ----" << std::endl;
//	print(vec.begin(), vec.end());
//}


//#include <algorithm>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		cout << *begin << " ";
//		begin++;
//	}
//	cout << endl;
//}
//
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(1);
//	vec.push_back(6);
//	vec.push_back(4);
//	vec.push_back(7);
//	vec.push_back(2);
//
//	cout << "���� �� ----" << endl;
//	print(vec.begin(), vec.end());
//	std::partial_sort(vec.begin(), vec.begin() + 3, vec.end());
//
//	cout << "���� �� ----" << endl;
//	print(vec.begin(), vec.end());
//}


//#include <algorithm>
//#include <functional>
//#include <string>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		cout << "[" << *begin << "] ";
//		begin++;
//	}
//	cout << endl;
//}
//
//struct User {
//	std::string name;
//	int age;
//
//	User(std::string name, int age) : name(name), age(age) {}
//	bool operator<(const User& u) const { return age < u.age; }
//};
//
//std::ostream& operator<<(std::ostream& o, const User& u) {
//	o << u.name << " , " << u.age;
//	return o;
//}
//
//int main() {
//	std::vector<User> vec;
//	for (int i = 0; i < 100; i++) {
//		std::string name = "";
//		name.push_back('a' + i / 26);
//		name.push_back('a' + i % 26);
//		vec.push_back(User(name, static_cast<int>(rand() % 10)));
//	}
//
//	std::vector<User> vec2 = vec;
//	std::cout << "���� �� ----" << std::endl;
//	print(vec.begin(), vec.end());
//	
//	std::sort(vec.begin(), vec.end());
//
//	std::cout << "���� �� ----" << std::endl;
//	print(vec.begin(), vec.end());
//	
//	std::cout << "stable_sort�� ��� ---" << endl;
//	std::stable_sort(vec2.begin(), vec2.end());
//	print(vec2.begin(), vec2.end());
//}


//#include <algorithm>
//#include <functional>
//#include <string>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		cout << "[" << *begin << "] ";
//		begin++;
//	}
//	cout << endl;
//}
//
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	cout << "ó�� vec ���� ------" << endl;
//	print(vec.begin(), vec.end());
//
//	cout << "���Ϳ��� Ȧ���� ���� ���� ---" << endl;
//	vec.erase(std::remove_if(vec.begin(), vec.end(), [](int i) -> bool {return i % 2 == 1; }),
//		vec.end());
//	print(vec.begin(), vec.end());
//}


//#include <algorithm>
//#include <functional>
//#include <string>
//#include <vector>
//
//template <typename Iter>
//void print(Iter begin, Iter end) {
//	while (begin != end) {
//		cout << "[" << *begin << "] ";
//		begin++;
//	}
//	cout << endl;
//}
//
//int main() {
//	std::vector<int> vec;
//	vec.push_back(5);
//	vec.push_back(3);
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	cout << "ó�� vec ���� ------" << endl;
//	print(vec.begin(), vec.end());
//
//	cout << "���Ϳ��� Ȧ���� ���� ---" << endl;
//	int num_erased = 0;
//	vec.erase(std::remove_if(vec.begin(), vec.end(),
//		[&num_erased](int i) {
//			if (num_erased >= 2)
//				return false;
//			else if (i % 2 == 1) {
//				num_erased++;
//				return true;
//			}
//			return false;
//		}),
//		vec.end());
//	print(vec.begin(), vec.end());
//}


//#include <cctype>
//#include <string>
//
//struct my_char_traits : public std::char_traits<char> {
//	static int get_real_rank(char c) {
//		if (isdigit(c)) {
//			return c + 256;
//		}
//		return c;
//	}
//
//	static bool lt(char c1, char c2) {
//		return get_real_rank(c1) < get_real_rank(c2);
//	}
//
//	static int compare(const char* s1, const char* s2, size_t n) {
//		while (n-- != 0) {
//			if (get_real_rank(*s1) < get_real_rank(*s2)) {
//				return -1;
//			}
//			if (get_real_rank(*s1) > get_real_rank(*s2)) {
//				return 1;
//			}
//			++s1;
//			++s2;
//		}
//		return 0;
//	}
//};
//
//int main() {
//	std::basic_string<char, my_char_traits> my_s1 = "la";
//	std::basic_string<char, my_char_traits> my_s2 = "a1";
//
//	std::cout << "������ �켱������ �� ���� ���ڿ� : " << std::boolalpha << (my_s1 < my_s2) << endl;
//	std::string s1 = "la";
//	std::string s2 = "a1";
//
//	cout << "�Ϲ� ���ڿ�: " << std::boolalpha << (s1 < s2) << endl;
//}


//#include <string>
//
//int main() {
//	std::u32string u32_str = U"�̰� UTF-32 ���ڿ� �Դϴ�";
//	cout << u32_str.size() << endl;
//}


//#include <string>
//
//void* operator new(std::size_t count) {
//	cout << count << " bytes �Ҵ�" << endl;
//	return malloc(count);
//}
//
//bool contains_very(const std::string& str) {
//	return str.find("very") != std::string::npos;
//}
//
//int main() {
//	cout << std::boolalpha << contains_very("C++ string is very easy to use") << endl;
//	cout << contains_very("C++ string is not easy to use") << endl;
//}


//#include <stdexcept>
//
//template <typename T>
//class Vector {
//public:
//	Vector(size_t size) : size_(size) {
//		data_ = new T[size_];
//		for (int i = 0; i < size_; i++) {
//			data_[i] = 3;
//		}
//	}
//	const T& at(size_t index) const {
//		if (index >= size_) {
//			throw std::out_of_range("vector�� index�� ������ �ʰ��Ͽ����ϴ�.");
//		}
//		return data_[index];
//	}
//	~Vector() { delete[] data_; }
//
//private:
//	T* data_;
//	size_t size_;
//};
//
//int main() {
//	Vector<int> vec(3);
//	int index, data = 0;
//	std::cin >> index;
//
//	try {
//		data = vec.at(index);
//	}
//	catch (std::out_of_range& e) {
//		cout << "���� �߻�!" << e.what() << endl;
//	}
//	cout << "���� ������: " << data << endl;
//}


//class A {
//	int data_;
//
//public:
//	A(int data) : data_(data) { cout << "�Ϲ� ������ ȣ��" << endl; }
//	A(const A& a) : data_(a.data_) {
//		cout << "���� ������ ȣ��" << endl;
//	}
//};
//
//int main() {
//	A a(1);
//	A b(a);
//
//	A c(A(2));
//}


//#include <memory>
//
//class A {
//private:
//	int* data;
//public:
//	A() {
//		cout << "�ڿ��� ȹ����!" << endl;
//		data = new int[100];
//	}
//	void some() {
//		cout << "�Ϲ� �����Ϳ� �����ϰ� ��� ����!" << endl;
//	}
//	void do_sth(int a) {
//		std::cout << "���𰡸� �Ѵ�" << std::endl;
//		data[0] = a;
//	}
//	~A() {
//		cout << "�ڿ��� ������!" << endl;
//		delete[] data;
//	}
//};
//
//void do_something(A* ptr) {
//	ptr->do_sth(3);
//}
//
//int main() {
//	std::unique_ptr<A> pa(new A());
//	do_something(pa.get());
//}


//#include <memory>
//class Foo {
//private:
//	int a, b;
//public:
//	Foo(int a, int b) : a(a), b(b) {
//		std::cout << "������ ȣ��" << std::endl;
//	}
//	void print() {
//		std::cout << "a : " << a << ", b : " << b << std::endl;
//	}
//	~Foo() {
//		std::cout << "�Ҹ��� ȣ��" << std::endl;
//	}
//};
//
//int main() {
//	auto ptr = std::make_unique<Foo>(3, 5);
//	ptr->print();
//}


//#include <memory>
//#include <vector>
//
//class A {
//private:
//	int* data;
//public:
//	A() {
//		data = new int[100];
//		std::cout << "�ڿ��� ȹ����" << std::endl;
//	}
//	~A() {
//		std::cout << "�Ҹ��� ȣ��" << std::endl;
//		delete[] data;
//	}
//};
//
//int main() {
//	std::vector<std::shared_ptr<A>> vec;
//	vec.push_back(std::shared_ptr<A>(new A()));
//	vec.push_back(std::shared_ptr<A>(vec[0]));
//	vec.push_back(std::shared_ptr<A>(vec[1]));
//
//	std::cout << "ù ��° �Ҹ�" << std::endl;
//	vec.erase(vec.begin());
//
//	std::cout << "���� ���� �Ҹ�" << std::endl;
//	vec.erase(vec.begin());
//
//	std::cout << "������ ���� �Ҹ�" << std::endl;
//	vec.erase(vec.begin());
//
//	std::cout << "���α׷� ����" << std::endl;
//}


//#include <memory>
//class A : public std::enable_shared_from_this<A> {
//	int* data;
//public:
//	A() {
//		data = new int[100];
//		std::cout << "�ڿ��� ȹ����" << std::endl;
//	}
//	
//	~A() {
//		std::cout << "�Ҹ��� ȣ��" << std::endl;
//		delete[] data;
//	}
//
//	std::shared_ptr<A> get_shared_ptr() {
//		return shared_from_this();
//	}
//};
//
//int main() {
//	std::shared_ptr<A> pa1 = std::make_shared<A>();
//	std::shared_ptr<A> pa2 = pa1->get_shared_ptr();
//
//	std::cout << pa1.use_count() << std::endl;
//	std::cout << pa2.use_count() << std::endl;
//}


//#include <thread>
//using std::thread;
//
//void func1() {
//	for (int i = 0; i < 10; i++) {
//		std::cout << "thread 1 working \n";
//	}
//}
//
//void func2() {
//	for (int i = 0; i < 10; i++) {
//		std::cout << "thread 2 working \n";
//	}
//}
//
//void func3() {
//	for (int i = 0; i < 10; i++) {
//		std::cout << "thread 3 working \n";
//	}
//}
//
//int main() {
//	thread t1(func1);
//	thread t2(func2);
//	thread t3(func3);
//
//	t1.detach();
//	t2.detach();
//	t3.detach();
//	cout << "���� �Լ� ���� \n";
//}


//#include <cstdio>
//#include <thread>
//#include <vector>
//using std::thread;
//using std::vector;
//
//void worker(vector<int>::iterator start, vector<int>::iterator end, int* result) {
//	int sum = 0;
//	for (auto itr = start; itr < end; ++itr) {
//		sum += *itr;
//	}
//	*result = sum;
//
//	thread::id this_id = std::this_thread::get_id();
//	printf("������ %x ���� %d ���� %d ���� ����� ��� : %d \n", this_id, *start, *(end - 1), sum);
//}
//
//int main() {
//	vector<int> data(10000);
//	for (int i = 0; i < 10000; i++) {
//		data[i] = i;
//	}
//
//	vector<int> partial_sums(4);
//	
//	vector<thread> workers;
//	for (int i = 0; i < 4; i++) {
//		workers.push_back(thread(worker, data.begin() + i * 2500, data.begin() + (i + 1) * 2500, &partial_sums[i]));
//	}
//
//	for (int i = 0; i < 4; i++) {
//		workers[i].join();
//	}
//
//	int total = 0;
//	for (int i = 0; i < 4; i++) {
//		total += partial_sums[i];
//	}
//	std::cout << "��ü ��: " << total << endl;
//}


//#include <thread>
//#include <vector>
//void worker(int& counter) {
//	for (int i = 0; i < 10000; i++) {
//		counter += 1;
//	}
//}
//
//int main() {
//	int counter = 0;
//	std::vector<std::thread> workers;
//	for (int i = 0; i < 4; i++) {
//		workers.push_back(std::thread(worker, std::ref(counter)));
//	}
//
//	for (int i = 0; i < 4; i++) {
//		workers[i].join();
//	}
//
//	std::cout << "Counter ���� ��: " << counter << std::endl;
//}


//#include <mutex>
//#include <thread>
//#include <vector>
//
//void worker(int& result, std::mutex& m) {
//	for (int i = 0; i < 10000; i++) {
//		std::lock_guard<std::mutex> lock(m);
//		result += 1;
//	}
//}
//
//int main() {
//	int counter = 0;
//	std::mutex m;
//
//	std::vector<std::thread> workers;
//	for (int i = 0; i < 4; i++) {
//		workers.push_back(std::thread(worker, std::ref(counter), std::ref(m)));
//	}
//
//	for (int i = 0; i < 4; i++) {
//		workers[i].join();
//	}
//
//	std::cout << "Counter ���� ��: " << counter << std::endl;
//}


//#include <mutex>
//#include <thread>
//void worker1(std::mutex& m1, std::mutex& m2) {
//	for (int i = 0; i < 1000; i++) {
//		m1.lock();
//		m2.lock();
//		std::cout << "Worker1 Hi! " << i << std::endl;
//
//		m2.unlock();
//		m1.unlock();
//	}
//}
//
//void worker2(std::mutex& m1, std::mutex& m2) {
//	for (int i = 0; i < 1000; i++) {
//		while (true) {
//			m2.lock();
//
//			if (!m1.try_lock()) {
//				m2.unlock();
//				continue;
//			}
//
//			std::cout << "Worker2 Hi! " << i << std::endl;
//			m1.unlock();
//			m2.unlock();
//			break;
//		}
//	}
//}
//
//int main() {
//	std::mutex m1, m2;
//
//	std::thread t1(worker1, std::ref(m1), std::ref(m2));
//	std::thread t2(worker2, std::ref(m1), std::ref(m2));
//
//	t1.join();
//	t2.join();
//
//	std::cout << "END!" << std::endl;
//}

// p.755


//class A {
//public:
//	A() {
//		std::cout << "A constructor" << std::endl;
//	}
//};
//
//int main() {
//	A a{};
//}

// end and restart


