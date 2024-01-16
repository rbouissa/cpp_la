#ifndef EASY_HPP
#define EASY_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
#include <time.h>
#include <stack>
#include <map>
class BitcoinExchange{
private:
        std::map<std::string,float> map;
        public:
   BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &o);
    BitcoinExchange& operator=(const BitcoinExchange& o);
    ~BitcoinExchange();
   void check_value(std::string val,std::string date);
   void check_date(std::string date);
   void fill_data_map();
   void check_the_maps(int value,int date);
   class InvalidDate : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class InvalidNumber : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class InvalidFormat : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif