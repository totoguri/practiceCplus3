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
//	cout << "처음 리스트의 상태" << endl;
//	print_list(lst);
//
//	for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//		if (*itr == 20) {
//			lst.insert(itr, 50);
//		}
//	}
//
//	cout << "값이 20인 원소 앞에 50을 추가" << endl;
//	print_list(lst);
//
//	for (std::list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
//		if (*itr == 30) {
//			lst.erase(itr);
//			break;
//		}
//	}
//
//	cout << "값이 30인 원소를 제거한다" << endl;
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
//	cout << "초기 dq 상태" << endl;
//	print_deque(dq);
//
//	cout << "맨 앞의 원소 제거" << endl;
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
//	cout << "순서대로 정렬" << endl;
//	print_set(s);
//
//	cout << "20이 s의 원소인가요? :: ";
//	auto itr = s.find(50);
//	if (itr != s.end()) {
//		cout << "Yes" << endl;
//	}
//	else {
//		cout << "No" << endl;
//	}
//
//	cout << "25가 s의 원소인가요 :: ";
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
//	o << "[ 중요도: " << td.priority << "] " << td.job_desc;
//	return o;
//}
//
//int main() {
//	std::set<Todo> todos;
//
//	todos.insert(Todo(1, "농구하기"));
//	todos.insert(Todo(2, "수학 숙제 하기"));
//	todos.insert(Todo(1, "프로그래밍 프로젝트"));
//	todos.insert(Todo(3, "친구 만나기"));
//	todos.insert(Todo(2, "영화 보기"));
//
//	print_set(todos);
//
//	cout << "--------------" << endl;
//	cout << "숙제를 끝냈다면!" << endl;
//	todos.erase(todos.find(Todo(2, "수학 숙제 하기")));
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
//	o << "[ 중요도 : " << td.priority << "] " << td.job_desc;
//	return o;
//}
//
//int main() {
//	std::set<Todo, TodoCmp> todos;
//	todos.insert(Todo(1, "농구하기"));
//	todos.insert(Todo(2, "수학 숙제 하기"));
//	todos.insert(Todo(3, "프로그래밍 프로젝트"));
//	todos.insert(Todo(4, "친구 만나기"));
//	todos.insert(Todo(5, "영화 보기"));
//
//	print_set(todos);
//
//	std::cout << " ----------------- " << endl;
//	std::cout << "숙제를 끝냈다면!" << endl;
//	todos.erase(todos.find(Todo(2, "수학 숙제 하기")));
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
//	pitcher_list.insert(std::pair<std::string, double>("박세웅", 2.23));
//	pitcher_list.insert(std::pair<std::string, double>("해커:", 2.93));
//	pitcher_list.insert(std::pair<std::string, double>("피어밴드", 2.95));
//
//	pitcher_list.insert(std::make_pair("차우찬", 3.04));
//	pitcher_list.insert(std::make_pair("장원준", 3.05));
//	pitcher_list.insert(std::make_pair("헥터", 3.09));
//
//	pitcher_list["니퍼트"] = 3.56;
//	pitcher_list["박종훈"] = 3.76;
//	pitcher_list["켈리"] = 3.90;
//
//	print_map(pitcher_list);
//	cout << "박세웅 방어율은? :: " << pitcher_list["박세웅"] << endl;
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
//		cout << key << "은(는) 목록에 없습니다" << endl;
//	}
//}
//
//int main() {
//	std::map<std::string, double> pitcher_list;
//	pitcher_list["오승환"] = 3.58;
//
//	print_map(pitcher_list);
//	cout << " ------------------- " << endl;
//	search_and_print(pitcher_list, std::string("오승환"));
//	search_and_print(pitcher_list, std::string("류현진"));
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


#include <string>
#include <unordered_set>

template <typename K>
void print_unordered_set(const std::unordered_set<K>& m) {
	for (const auto& elem : m) {
		cout << elem << endl;
	}
}

template <typename K>
void is_exist(std::unordered_set<K>& s, K key) {
	auto itr = s.find(key);
	if (itr != s.end()) {
		cout << key << "가 존재" << endl;
	}
	else {
		cout << key << "가 없다" << endl;
	}
}

int main() {
	std::unordered_set<std::string> s;

	s.insert("hi");
	s.insert("my");
	s.insert("name");
	s.insert("is");
	s.insert("psi");
	s.insert("welcome");
	s.insert("to");
	s.insert("c++");

	print_unordered_set(s);
	
	cout << " ---------------- " << endl;
	is_exist(s, std::string("c++"));
	is_exist(s, std::string("c"));

	cout << " ----------------- " << endl;
	cout << "'hi'를 삭제" << endl;
	s.erase(s.find("hi"));
	is_exist(s, std::string("hi"));
}

// p.556