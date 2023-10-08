#include "PhoneBook.hpp"

std::string Contact::Getfname()
{
  return FirstName;
}
std::string Contact::Getlname()
{
  return LastName;
}
std::string Contact::Getnname()
{
  return NickName;
}
std::string Contact::GetPnumber()
{
  return PhoneNumber;
}
void Contact::setValuefn(std::string fname)
{
  FirstName = fname;
}
void Contact::setValueln(std::string fname)

{
  LastName = fname;
}
void Contact::setValuenn(std::string fname)
{
  NickName = fname;
}
void Contact::setValuepn(std::string fname)
{
  PhoneNumber = fname;
}

int PhoneBook::space(std::string str)
{
  int i;
  i = 0;
  while (str[i] == ' ')
    i++;
  if (str[i] && (str[i] > 32 && str[i] <= 126))
    return 1;

  else
    return 0;
}

void PhoneBook::store_info(std::string firstName, std::string lastName, std::string nickName, std::string pnumber, int i)
{
  Mycontact[i].setValuefn(firstName);
  Mycontact[i].setValueln(lastName);
  Mycontact[i].setValuenn(nickName);
  Mycontact[i].setValuepn(pnumber);
}

void PhoneBook::store_info_2(std::string firstName, std::string lastName, std::string nickName, std::string pnumber)
{
  int j = 0;
  while (j < 7)
  {
    Mycontact[j].setValuefn(Mycontact[j + 1].Getfname());
    Mycontact[j].setValueln(Mycontact[j + 1].Getlname());
    Mycontact[j].setValuenn(Mycontact[j + 1].Getnname());
    Mycontact[j].setValuepn(Mycontact[j + 1].GetPnumber());
    j++;
  }
  Mycontact[j].setValuefn(firstName);
  Mycontact[j].setValueln(lastName);
  Mycontact[j].setValuenn(nickName);
  Mycontact[j].setValuepn(pnumber);
}

void PhoneBook::print_with_length(std::string str)
{
  std::string s;
  s = "          ";
  if (str.length() < 10)
    std::cout << s.substr(0, 10 - str.length()) << str << "|";
  else
    std::cout << str.substr(0, 9) << ".|";
}

void PhoneBook::print_info(int i)
{
  
  std::cout <<"         "<<i<< "|";
  print_with_length(Mycontact[i].Getfname());
  print_with_length(Mycontact[i].Getlname());
  print_with_length(Mycontact[i].Getnname());
  std::cout << "\n--------------------------------------------" << std::endl;
}

void PhoneBook::print_info_2(std::string i)
{
  int x;
  x = atoi(i.c_str());
  std::cout << "id  :";
  print_with_length(i);
  std::cout << "\n"
            << "First Name  :";
  print_with_length(Mycontact[x].Getfname());
  std::cout << "\n"
            << "Last Name  :";
  print_with_length(Mycontact[x].Getlname());
  std::cout << "\n"
            << "Nick Name  :";
  print_with_length(Mycontact[x].Getnname());
  std::cout << "\n"
            << "Phone Number  :";
  print_with_length(Mycontact[x].GetPnumber());
}
