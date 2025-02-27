/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:55:35 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 12:05:43 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;
    
    std::cout << "memory addres of the string is " << &str << std::endl;
    std::cout << "memory addres of the pointer is " << ptr << std::endl;
    std::cout << "memory addres of the reference is " << &ref << std::endl;

    std::cout << "string is " << str << std::endl;
    std::cout << "pointer is " << *ptr << std::endl;
    std::cout << "reference is " << ref << std::endl;
}