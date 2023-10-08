#ifndef MYPHONEBOOK_H
# define MYPHONEBOOK_H
# include <iomanip>
# include <iostream>
# include <string>
#include <cstdlib>

class Contact
{
  private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;

  public:
	std::string Getfname();
	std::string Getlname();
	std::string Getnname();
	std::string GetPnumber();
	void setValuefn(std::string fname);
	void setValueln(std::string fname);
	void setValuenn(std::string fname);
	void setValuepn(std::string fname);
};

class PhoneBook
{
  private:
	Contact Mycontact[8];
	
  public:
	int add_function(int e, int i);
	void search_function(int i, int j);
	int space(std::string str);
	void store_info(std::string firstName, std::string lastName, std::string nickName,
			std::string pnumber, int i);
	void store_info_2(std::string firstName, std::string lastName, std::string nickName,
			std::string pnumber);
	void print_with_length(std::string str);
	void print_info(int i);
	void print_info_2(std::string i);
};
#endif