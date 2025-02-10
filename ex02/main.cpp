/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:55:47 by angerard          #+#    #+#             */
/*   Updated: 2025/02/10 16:01:59 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address in strPtr: " << strPtr << std::endl;
    std::cout << "Memory address in strREF: " << &strRef << std::endl;

    std::cout << "value of str: " << str << std::endl;
    std::cout << "value pointed by strPtr: " << *strPtr << std::endl;
    std::cout << "value pointed by strRef: " << strRef << std::endl;

    return 0;
}
