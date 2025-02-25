//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀            𓐓  ScavTrap.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/08/22 17:31:03 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/02/25 16:43:16 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "ScavTrap.hpp"

//===<[ ScavTrap DeFault Constructor: ]>========================================
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	setHitPts(100);
	setEnergyPts(50);
	setDamagePts(20);
}

//===<[ ScavTrap Constructor: ]>================================================
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
	setHitPts(100);
	setEnergyPts(50);
	setDamagePts(20);
}

//===<[ ScavTrap Copy Constructor: ]>===========================================
ScavTrap::ScavTrap(const ScavTrap& scavTrap)
{
	(*this) = scavTrap;
}

//===<[ Copy Assignment Operator: ]>============================================
ScavTrap&	ScavTrap::operator=(const ScavTrap& scavTrap)
{
	setName(scavTrap.getName());
	setHitPts(scavTrap.getHitPts());
	setEnergyPts(scavTrap.getEnergyPts());
	setDamagePts(scavTrap.getDamagePts());
	return (*this);
}

//===<[ ScavTrap Destructor: ]>=================================================
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

//===<[ Override of attack: ]>==================================================
void	ScavTrap::attack(const std::string& target)
{
	if (getHitPts() > 0 && getEnergyPts() > 0)
	{
		std::cout	<< "ScaveTrap "
					<< getName()		<< " attacks "
					<< target			<< " causing "
					<< getDamagePts()	<< std::endl;
		setEnergyPts(getEnergyPts() - 1);
	}
}

//===<[ guardGate: ]>===========================================================
void	ScavTrap::guardGate(void)
{
	std::cout << getName() << " is now in Gate keeper mode" << std::endl;
}
