/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:48:06 by angerard          #+#    #+#             */
/*   Updated: 2025/02/10 12:52:33 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void setName(std::string name);
        void announce() const;
};

Zombie *zombieHorde(int n, std::string name);

#endif
