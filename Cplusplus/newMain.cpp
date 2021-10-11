// 09, Oct 2021

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// 템플릿, STL 부분 보고 끝내자.
// p.495


//#include <cstring>
//template <typename T>
//T Max(T a, T b) {
//	return a > b ? a : b;
//}
//
//template <>
//char* Max(char* a, char* b) {
//	cout << "const char* Max<const char*>(const char* a, const char* b)" <<endl;
//	return strlen(a) > strlen(b) ? a : b;
//}
//
//template<>
//const char* Max(const char* a, const char* b) {
//	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
//	return strcmp(a, b) > 0 ? a : b;
//}
//
//int main() {
//	cout << Max(11, 15) << endl;
//	cout << Max('T', 'Q') << endl;
//	cout << Max(3.5, 7.5) << endl;
//	cout << Max("Simple", "Best") << endl;
//
//	char str1[] = "Simple";
//	char str2[] = "Best";
//	cout << Max(str1, str2) << endl;
//	return 0;
//}


//#include <vector>
//int main() {
//	std::vector<int> vec;
//	vec.push_back(10);
//	vec.push_back(20);
//	vec.push_back(30);
//	vec.push_back(40);
//
//	for (std::vector<int>::size_type i = 0; i < vec.size(); i++) {
//		cout << "vec의 " << i + 1 << " 번째 원소 :: " << vec[i] << endl;
//	}
//	return 0;
//}

#include <vector>
template <typename T>
void print_vector(std::vector<T>& vec) {
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		cout << *itr << endl;
	}
}

int main() {
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	cout << "처음 벡터 상태" << endl;
	print_vector(vec);
	std::cout << "-------------------------------------" << std::endl;

	vec.insert(vec.begin() + 2, 15);
	print_vector(vec);
	std::cout << "--------------------------------------" << std::endl;

	vec.erase(vec.begin() + 3);
	print_vector(vec);
}