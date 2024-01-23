#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap main constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
	std::cout << "ClapTrap constructor called for create : " << m_name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = copy;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
	return;
}

void	ClapTrap::attack(const std::string& target)
{
	if(m_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << m_name << " has no more energy point... He can't attack !" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << m_name << " attacks " << target << " causing " << m_attackDamage << " points of damage !" << std::endl;
	this->m_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(m_hitPoints < amount)
	{
		std::cout << "ClapTrap " << m_name << " is dead." << std::endl;
		return;
	}
	this->m_hitPoints -= amount;
	std::cout << "ClapTrap " << m_name << " has" << m_hitPoints << " HP left." << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(m_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << m_name << " has no more energy point... He can't heal !" << std::endl;
		return;
	}
	std::cout << "Claptrap " << m_name << " restores " << amount << " HP.";
	this->m_hitPoints += amount;
}
