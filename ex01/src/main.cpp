/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:27:12 by brian             #+#    #+#             */
/*   Updated: 2025/07/06 20:07:09 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
  std::cout << "\033[34mConstructing\033[0m" << std::endl;
  ClapTrap a;
  ClapTrap b("Cody");

  std::cout << "\033[34mTesting\033[0m" << std::endl;
  a.attack("some other robot");
  a.takeDamage(10);
  a.takeDamage(10);
  a.beRepaired(5);
  a.attack("some other other robot");
  b.beRepaired(3);
  for (int i = 0; i < 10; i++)
    b.attack("Cody-clone");
  b.beRepaired(3);

  std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

  std::cout << std::endl << "\033[34mConstructing\033[0m" << std::endl;
  ScavTrap c;
  ScavTrap d("Savage");

  std::cout << "\033[34mTesting\033[0m" << std::endl;
  c.attack("CloneTrap");
  c.beRepaired(22);
  c.takeDamage(21);
  c.beRepaired(22);
  c.guardGate();
  c.guardGate();
  d.attack("Savage-clone");
  d.takeDamage(101);
  d.takeDamage(15);
  d.attack("ScavTrap-clone");
  std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
  return (0);
}