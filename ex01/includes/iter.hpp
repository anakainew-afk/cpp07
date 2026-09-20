#include <iostream>

template <typename T, typename F>
void iter(T* array, const size_t len, F ft){
    for (size_t v = 0; v < len; v++)
        ft(array[v]);
}

template <typename T>
void	incrementAndEcho(T& c){
	c++;
	std::cout << c << std::endl;
}

template <typename T>
void	echoc(const T& c){
	std::cout << c << std::endl;
}
