/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:27:12 by brian             #+#    #+#             */
/*   Updated: 2025/07/09 16:29:12 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
  std::cout << std::endl << "\033[34mConstructing\033[0m" << std::endl;
  ScavTrap c;
  ScavTrap d("ligma");

  std::cout << std::endl << "\033[34mTesting\033[0m" << std::endl;
  // ClapTrap* ptr = new ScavTrap("ScavTrap-clone");
  // ptr->attack("target");
  c.attack("CloneTrap");
  c.beRepaired(22);
  c.takeDamage(21);
  c.guardGate();
  c.guardGate();
  d.attack("ligma-clone");
  d.takeDamage(101);
  d.takeDamage(15);
  d.attack("ScavTrap-clone");

  std::cout << std::endl << "\033[34mDeconstructing\033[0m" << std::endl;
  return (0);
}