#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <typename T>
class Array{
private:
    T* _data;
    unsigned int _size;
public:
    class WrongSize : public std::exception{
    public:
        virtual const char* what() const throw(){
            return "Size is out of bound";
        }
    };

    Array() : _data(NULL), _size(0){};
    
    Array(unsigned int n) : _size(n){
        _data = new T[n];
    }

    Array(const Array& src) : _data(NULL){
        *this = src;
    }

    Array& operator=(const Array& src){
        if (this != &src){
            delete[] _data;
            this->_size = src._size;
            this->_data = new T[_size];
            for (unsigned int v = 0; v < _size; v++)
                this->_data[v] = src._data[v];
        }
        return *this;
    }

    T& operator[](unsigned int v){
        if (v >= this->_size)
            throw Array::WrongSize();
        return (this->_data[v]);
    }

    ~Array(){
        delete[] _data;
    };

    unsigned int size() const{
        return (this->_size);
    }
};

#endif