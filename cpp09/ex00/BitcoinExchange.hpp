#ifndef EASY_HPP
#define EASY_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
#include <time.h>
class BitcoinExchange{

std::string map;
        public:
   BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &o);
    BitcoinExchange& operator=(const BitcoinExchange& o);
    ~BitcoinExchange();
   void check_value(std::string val);
   void check_date(std::string date);
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