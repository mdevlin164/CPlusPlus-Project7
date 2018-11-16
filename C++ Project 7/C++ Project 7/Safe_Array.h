#include <iostream>
using namespace std;

#ifndef SAFE_ARRAY_H
#define SAFE_ARRAY_H

template<typename T>
class s_array{
public:
	s_array(int size);
	~s_array();

	T &operator[](int i);
private:
	int size;
	T* data;
};

template<typename T>
s_array<T>::s_array(int size)
	: size(size){
	if (size > 0)
		data = new T[size];
	else {
		cout << "Invalid array size " << size << endl;
		exit(1);
	}
}

template<typename T>
s_array<T>::~s_array(){
	delete[] data;
}

template<typename T>
T &s_array<T>::operator[](int i) {
	if (i < 0 || i >= size) {
		cout << "Index " << i << " is out of bounds" << endl;
		exit(1);
	}
	return data[i];
}

#endif 
