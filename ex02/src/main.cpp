/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:27:12 by brian             #+#    #+#             */
/*   Updated: 2025/07/07 19:55:07 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  std::cout << "\033[34mConstructing\033[0m" << std::endl;
  FragTrap e;
  FragTrap f("pepe");

  std::cout << "\033[34mTesting\033[0m" << std::endl;
  e.highFiveGuys();
  e.attack("some random dude");
  e.takeDamage(101);
  e.takeDamage(1);
  e.attack("some random dude");
  f.highFiveGuys();
  std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
  return (0);
}