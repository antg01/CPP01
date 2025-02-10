/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:58:40 by angerard          #+#    #+#             */
/*   Updated: 2025/02/10 13:05:14 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    if (n <= 0)
        return NULL;

    Zombie *horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        horde[i].setName(name);
    }
    return horde;
}
