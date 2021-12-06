#include <iostream>
#include <string>

typedef std::string string;
template <typename T>	//탬플릿 정의 및 특정 자료형의 이름(typename)을 탬플릿 인자 T로 받음을 명시.

class My_stack {
	T* data;	//탬플릿인자를 자료형으로하는 변수 data;
	int capacity;
	int length;

	public :
	My_stack() : capacity(1), data(new T[1]), length(0) {}
	// 0
	void push(T t) {
		if (length + 1 > capacity) {
			T* temp = data;
			data = new T[2*capacity];
			for (int i = 0; i < capacity; i++) {
				data[i] = temp[i];
			}
			delete(temp);
			capacity *= 2;
		}
		data[length] = t;
		length++;
		std::cout << "push!" << std::endl;
	}

	// if i > length, return NULL
	T get_elemet(int i) {
		if (i > length) {
			return NULL;
		}
		return data[i];
	}
};

int main () {
	My_stack<string> stack;
	stack.push("3");
	stack.push("가");
	std::cout << stack.get_elemet(0) << std::endl;
}