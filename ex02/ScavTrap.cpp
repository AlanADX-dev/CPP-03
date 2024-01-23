#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name)
{
	this->m_name = name;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
	this->m_hitPoints = 100;
	std::cout << "ScavTrap constructor called for create : " << m_name << "." << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap & copy)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = copy;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
	return;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if(m_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << m_name << " has no more energy point... He can't attack !" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << m_name << " attacks " << target << " causing " << m_attackDamage << " points of damage !" << std::endl;
	this->m_energyPoints -= 1;
}
