/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 21:30:32 by brian             #+#    #+#             */
/*   Updated: 2025/07/06 21:43:05 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
  std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  std::cout << "FragTrap Constructor for the name " << this->_name << " called"
            << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Deconstructor for " << this->_name << " called"
            << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
  std::cout << "FragTrap Assignation operator called" << std::endl;
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_energyPoints = src._energyPoints;
  this->_attackDamage = src._attackDamage;
  return *this;
}

void FragTrap::highFiveGuys(void) {
  std::cout << "FragTrap " << this->_name << ": Heh High Five !!!" << std::endl;
}