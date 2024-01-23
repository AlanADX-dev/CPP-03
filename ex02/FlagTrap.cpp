#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{

}

FlagTrap::FlagTrap(std::string name)
{
	this->m_name = name;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
	this->m_hitPoints = 100;
	std::cout << "FlagTrap constructor called for create : " << m_name << "." << std::endl;

}

FlagTrap::FlagTrap(const FlagTrap & copy)
{
	std::cout << "FlagTrap copy constructor called." << std::endl;
	*this = copy;
	return;
}

FlagTrap& FlagTrap::operator=(const FlagTrap& copy)
{
	this->m_name = copy.m_name;
	this->m_hitPoints = copy.m_hitPoints;
	this->m_energyPoints = copy.m_energyPoints;
	this->m_attackDamage = copy.m_attackDamage;
	return *this;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap destructor called." << std::endl;
	return;
}

void	FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << m_name << " said : HIGHFIVES GUYS !!!!!!!!!!" << std::endl;
}
