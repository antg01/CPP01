/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:07:05 by angerard          #+#    #+#             */
/*   Updated: 2025/02/10 13:25:51 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 5;
    Zombie *horde = zombieHorde(n, "HordeZombie");
    if (horde)
    {
        for (int i = 0; i < n; i++) {
            horde[i].announce();
        }
        delete[] horde;
    }

    return 0;
}
