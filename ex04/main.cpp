/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:47:17 by angerard          #+#    #+#             */
/*   Updated: 2025/02/12 12:52:20 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileProcessor.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    FileProcessor processor(av[1], av[2], av[3]);
    if (!processor.processFile())
        return 1;
    return 0;
}

