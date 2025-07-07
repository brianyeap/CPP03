/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:31:22 by brian             #+#    #+#             */
/*   Updated: 2025/07/06 20:01:03 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  this->_guarding_gate = false;
  std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
  this->_guarding_gate = copy._guarding_gate;
  std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
  this->_guarding_gate = false;
  std::cout << "ScavTrap Constructor for the name " << this->_name << " called"
            << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Deconstructor for " << this->_name << " called"
            << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
  std::cout << "ScavTrap Assignation operator called" << std::endl;
  this->_name = src._name;
  this->_hitPoints = src._hitPoints;
  this->_energyPoints = src._energyPoints;
  this->_attackDamage = src._attackDamage;
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (this->_energyPoints > 0 && this->_hitPoints > 0) {
    std::cout << "ScavTrap " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!"
              << std::endl;
    this->_energyPoints--;
  } else if (this->_energyPoints == 0)
    std::cout << "\033[31mScavTrap " << this->_name << " is unable to attack "
              << target << ", insufficient energy points left.\033[0m"
              << std::endl;
  else
    std::cout << "\033[31mScavTrap " << this->_name << " is unable to attack "
              << target << ", insufficient hit points left.\033[0m"
              << std::endl;
}

void ScavTrap::guardGate(void) {
  if (this->_guarding_gate == false) {
    this->_guarding_gate = true;
    std::cout << "ScavTrap " << this->_name << " is guarding the gate."
              << std::endl;
  } else
    std::cout << "\033[33mScavTrap " << this->_name
              << " is already guarding the gate.\033[0m" << std::endl;
}