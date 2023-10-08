

#include "PhoneBook.hpp"

int PhoneBook::add_function(int e, int i)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	while (FirstName.empty() || !this->space(FirstName))
	{
		if(std::cin.eof())
		exit(0);
		std::cout << "First Name  :";
		std::getline(std::cin, FirstName);
	}
	while (LastName.empty() || !this->space(LastName))
	{
		if(std::cin.eof())
		exit(0);
		std::cout << "Last Name  :";
		std::getline(std::cin, LastName);
	}
	while (NickName.empty() || !this->space(NickName))
	{
		if(std::cin.eof())
		exit(0);
		std::cout << "Nick Name  :";
		std::getline(std::cin, NickName);
	}
	while (PhoneNumber.empty() || !this->space(PhoneNumber))
	{
		if(std::cin.eof())
		exit(0);
		std::cout << "Phone Number  :";
		std::getline(std::cin, PhoneNumber);
	}
	while (PhoneNumber.empty() || !this->space(DarkestSecret))
	{
		if(std::cin.eof())
		exit(0);
		std::cout << "Darkest Secret  :";
		std::getline(std::cin, DarkestSecret);
	}
	if (i == 4)
		this->store_info_2(FirstName, LastName, NickName, PhoneNumber);
	else if (e == 0 && FirstName != "" && LastName != "" && NickName != "" && PhoneNumber != "")
	{
		this->store_info(FirstName, LastName, NickName, PhoneNumber, i);
		i++;
	}
	return (i);
}

void PhoneBook::search_function(int i, int j)
{
	std::string id;
	id = "";
	std::cout << "--------------------------------------------"
			  << "\n";
	std::cout << "     index|";
	std::cout << "first name|";
	std::cout << " last name|";
	std::cout << "  nickname|"
			  << "\n";
	std::cout << "--------------------------------------------"
			  << "\n";
	while (j < i)
	{
		this->print_info(j);
		j++;
	}
	std::cout << "Enter id  :"
			  << "\n";
	if(std::cin.eof())
		exit(0);
	std::getline(std::cin, id);
	if (id != "" && id >= "0" && id <= "7" && atoi(id.c_str()) <= i)
	{
		this->print_info_2(id);
		std::cout << "\n";
	}
}

int main(void)
{
	PhoneBook MyPhonbook;
	int i;
	i = 0;
	while (1)
	{
		int e = 0;
		int j = 0;
		std::string String;
		std::cout << "Enter a string  like (ADD)(SEARCH)(EXIT):";
		std::getline(std::cin, String);
		if (String == "EXIT" || std::cin.eof())
			break;
		else if (String == "ADD" )
			i = MyPhonbook.add_function(e, i);
		else if (String == "SEARCH")
			MyPhonbook.search_function(i, j) ;
		else
		{
			e++;
			std::cout << "wrong input put somthing like (( ADD , SEARCH ,EXIT ))  :"
					  << std::endl;
		}
	}
}