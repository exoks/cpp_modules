//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀           𓐓  Character.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/09/03 22:51:56 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/02/25 20:48:53 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "Character.hpp"

//====<[ Character Default Consturctor: ]>======================================
Character::Character(void) : name("undefind")
{
	int	i;

	inventory = new AMateria*[4];
	floor = new AMateria*[4];
	i = -1;
	while (++i < 4)
	{
		inventory[i] = NULL;
		floor[i] = NULL;
	}
}

//====<[ Character Consturctor: ]>==============================================
Character::Character(std::string name) : name(name)
{
	int	i;

	inventory = new AMateria*[4];
	floor = new AMateria*[4];
	i = -1;
	while (++i < 4)
	{
		inventory[i] = NULL;
		floor[i] = NULL;
	}
}

//====<[ Copy Consturctor: ]>===================================================
Character::Character(const Character& character)
{
	inventory = new AMateria*[4];
	floor = new AMateria*[4];
	(*this) = character;
}

//====<[ Character Destructor: ]>===============================================
Character::~Character()
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		delete inventory[i];
		delete floor[i];
	}
	delete inventory;
	delete floor;
}

//====<[ Copy Assignment Operator: ]>===========================================
Character&	Character::operator=(const Character& character)
{
	int	i;

	name = character.name;
	i = -1;
	while (++i < 4)
	{
		if (inventory[i])
			inventory[i] = character.inventory[i]->clone();
		if (!inventory[i])
			inventory[i] = NULL;
		if (floor[i])
			floor[i] = character.floor[i]->clone();
		if (!floor[i])
			floor[i] = NULL;
	}
	return (*this);
}

// Interface functions :
//====<[ getName: ]>============================================================
std::string	const& Character::getName(void) const
{
	return (name);
}

//====<[ use: ]>================================================================
void	Character::use(int index, ICharacter& target)
{
	if (index <= 3 && inventory[index] != NULL)
		inventory[index]->use(target);
}

//====<[ unequip: ]>============================================================
void	Character::equip(AMateria *m)
{
	int	slot;

	slot = -1;
	while (++slot < 4 && inventory[slot] != NULL)
		;
	if (slot < 4)
		inventory[slot] = m;
	else
		delete m;
}

//====<[ unequip: ]>============================================================
void	Character::unequip(int idx)
{
	int	i;
	
	if (idx > 3 || (idx <= 3 && inventory[idx] == NULL))
		return ;
	i = -1;
	while (++i < 4 && floor[i] != NULL)
		;
	if (i < 4)
	{
		floor[i] = inventory[i];
		inventory[i] = NULL;
	}
}
