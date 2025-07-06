/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:40:51 by brian             #+#    #+#             */
/*   Updated: 2025/07/06 19:29:34 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
  return (0);
}