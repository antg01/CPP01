/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcessor.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:36:45 by angerard          #+#    #+#             */
/*   Updated: 2025/04/15 12:56:44 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcessor.hpp"

FileProcessor::FileProcessor(std::string filename, std::string s1, std::string s2): _filename(filename), _s1(s1), _s2(s2) {}

bool FileProcessor::processFile()
{
    std::ifstream inputFile(_filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file " << _filename << std::endl;
        return false;
    }

    std::ofstream outputFile((_filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Could not create output file " << _filename << ".replace" << std::endl;
        return false;
    }

    if (_s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return false;
    }
    
    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + _s2 + line.substr(pos + _s1.length());
            pos += _s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
    return true;
}
