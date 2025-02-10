/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:07:15 by angerard          #+#    #+#             */
/*   Updated: 2025/02/10 17:12:35 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club("crude spiked club");
        HumanA gentleman1("MrSmith", club);
        gentleman1.attack();
        club.setType("some other type of club");
        gentleman1.attack();
    }
    {
        Weapon club("crude spiked club");
        HumanB gentleman2("MrNeo");
        gentleman2.attack();
        gentleman2.setWeapon(club);
        gentleman2.attack();
        club.setType("some other type of aka47");
        gentleman2.attack();
    }

    return 0;
}
