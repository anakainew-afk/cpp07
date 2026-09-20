#include "../includes/iter.hpp"

int main(){

    int	tab[3] = {1, 3 ,5};
	char	str[] = {"hello"};
	const char str2[] = {"hi"};
    float tab2[] = {5.2, 4.3, 78.9};

    iter(tab2, 3, echoc<float>);
	std::cout << std::endl;
	iter(tab, 3, incrementAndEcho<int>);
	std::cout << std::endl;
	iter(str, 5, incrementAndEcho<char>);
	std::cout << std::endl;
	iter(str2, 2, echoc<char>);

    return 0;
}

