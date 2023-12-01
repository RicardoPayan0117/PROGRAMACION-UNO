#include <iostream>
#include <string>

enum ItemType{
	
	itemtype_sword;
	itemtype_torch;
	itemtype_potion;
};

std::string getItemName(ItemType itemType)
{
	if(intemType == itemtype_sword)
	return "Sword";
		if(intemType == itemtype_torch)
	return "Torch";
		if(intemType == itemtype_potion)
	return "Potion";
	
	return "???";
	
}

