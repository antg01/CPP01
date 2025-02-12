/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcessor.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:33:08 by angerard          #+#    #+#             */
/*   Updated: 2025/02/12 12:36:18 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEPROCESSOR_HPP
#define FILEPROCESSOR_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileProcessor
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;

    public:
        FileProcessor(std::string filename, std::string s1, std::string s2);
        bool processFile();
};

#endif
