#ifndef EASY_HPP
#define EASY_HPP
# include <iostream>
# include <string>
#include<vector>
#include<algorithm>
#include <fstream>
class BitcoinExchange{


        public:
   BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &o);
    BitcoinExchange& operator=(const BitcoinExchange& o);
    ~BitcoinExchange();
   std::string read_file(std::string filename);
   class InvaliMap: public std::exception {
            public:
                virtual const char* what() const throw(){
                    return "invalid map";
                } 
        };
};

#endif