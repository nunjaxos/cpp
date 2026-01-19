#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap" << name << "has been created." <<	std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hitPoints <=0 || energyPoints <=0)
	{
		std::cout << "Claptrap " << name << "cannot attack." << std::endl;
		return ;
	}
	energyPoints--;
	std::cout << "Claptrap" << name << " attack " << target << ", causing " << attackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0)
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount
        << " points of damage! Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair." << std::endl;
        return;
    
    }
	energyPoints--;
	hitPoints +=amount;
	std::cout << "CLapTrap " << name << " repaires" << amount
		 << " ,Current hit points: " << hitPoints << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name) , hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	
    if (this->energyPoints != other.energyPoints)
        this->energyPoints = other.energyPoints;
    if(this->hitPoints != other.hitPoints)
       this->hitPoints = other.hitPoints;
    if(this->attackDamage != other.attackDamage) 
        this->attackDamage = other.attackDamage;
    return(*this);
}