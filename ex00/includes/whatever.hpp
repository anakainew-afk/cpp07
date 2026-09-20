#include <iostream>

template <typename T>
void swap(T& v1, T& v2){
	T	temp;

	temp = v1;
	v1 = v2;
	v2 = temp;
}

template <typename T>
const T& min(const T& v1, const T& v2){
	if (v1 < v2)
        return v1;
    return v2;
}

template <typename T>
const T& max(const T& v1, const T& v2){
	if (v1 > v2)
        return v1;
    return v2;
}