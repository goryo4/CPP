/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:04:24 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 13:46:13 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#include <time.h>
#include <cstdlib>

template <typename T>
class Array
{
    private :
        T *_array;
		unsigned int _size;
    public :
        Array():_size(0){_array = new T;}

		Array(int const &value): _size(value){
			_array = new T[value];
		}
		
		Array(Array const &a): _size(a._size){
			_array = new T[_size];
			for(unsigned int i = 0; i < _size; ++i)
				_array[i] = a._array[i];
		}
		
		Array &operator=(Array const &a){
			if (this != &a)
			{
				_size = a._size;
				delete [] _array;
				_array = new T[_size];
				for(int i = 0; i < _size; ++i)
					_array[i] = a._array[i];
			}
			return *this;
		}
		
		~Array(){delete [] _array;};

		T &operator[](unsigned int i){
			if (i >= _size)
				throw std::out_of_range("Index out of bounds");
			return _array[i];
		}
		
		unsigned int size() {return _size;}
};

#endif