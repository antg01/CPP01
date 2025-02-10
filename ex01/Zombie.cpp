/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:52:46 by angerard          #+#    #+#             */
/*   Updated: 2025/02/10 12:57:58 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

void Zombie::announce() const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
