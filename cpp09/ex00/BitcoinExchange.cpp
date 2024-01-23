#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &o)
{
    *this = o;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &o)
{
    if (this != &o)
    {
        map = o.map;
    }
    return *this;
}
void BitcoinExchange :: check_value(std::string val,std::string date)
{
    double value=std::atof(val.c_str());
    int i=0;
    int point=0;
    int space=0;
    if(val[0]!=' '||!isdigit(val[1]))
       throw(InvalidNumber());
    while(val[i]|| isdigit(val[i])||val[i]=='.')
    {
        if(val[i]=='.')
            point++;
        else if(val[i]==' ')
            space++;
        i++;
    }
    if(val[i]=='\0'&&val[i-1]=='.')
        throw(InvalidNumber());     
    else  if((val[0]!=' ' && !isdigit(val[i])))
        throw(InvalidNumber());
    else if(value>1000 || value<0)  
        throw(InvalidNumber());
    else if(space>1||point>1)
        throw(InvalidNumber());
    std::map<std::string, float>::iterator it;
        it = map.lower_bound(date);
       // std::cout << "---------\t" << it->second << std::endl;
        if(it->first==date)
            std::cout<<date<<" => "<<value<<" = "<<value * it->second<<std::endl;
        if(map.begin()!=it)
            it--;
        std::cout<<date<<" => "<<value<<" = "<<value * it->second<<std::endl;
    }
    
int ft_size(std::string date)
{
    int i=0;
    while(date[i])
        i++;
    return i;
}

void BitcoinExchange::check_date(std::string date)
{
    struct tm tms;
    int i=0;
    std::string dayy;
    // try{
    if(ft_size(date)!=11)
    throw(InvalidDate());
    while(date[i])
    {
        if(isalpha(date[i]))
            throw(InvalidDate());
        i++;
    }
    while(date[i])
        i++;
    i--;
    int j=0;
    while(date[i]!='-')
        i--;
    i++;
    while(date[i])
        dayy[j++]=date[i++];
    dayy[j]='\0';
    if(!strptime(date.c_str(),"%Y-%m-%d",&tms))
         throw(InvalidDate());
    int day = atoi(dayy.c_str());
    int year = tms.tm_year+1900;
    int month = tms.tm_mon+1;
    if (day > 31)
       throw(InvalidDate());
    if(month>=8&&month<=12)
    {
        if((month==8||month==10||month==12)&&day>31)
        {
        std::cout<<"the day----> ::"<<day<<std::endl;
            throw(InvalidDate()); 
        }
        else if((month==9||month==11)&&day>30)
        {
        throw(InvalidDate()); 
        }
    }
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month == 2 && day > 29)
            throw(InvalidDate());
        if (month % 2 == 0 && day > 30)
             throw(InvalidDate());
    }
  
    else if ((month == 2 && day > 28) || (month % 2 == 0 && day > 30))
         throw(InvalidDate());
    }






void BitcoinExchange:: fill_data_map()
{
    std::ifstream file("data.csv");

    if (!file.is_open())
    {
        std::cout << "Error: file does not exist" << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(file,line);
    while(std::getline(file,line))
    {
        std::string date;
        std::string value;
        size_t pip = line.find(",");
        date = line.substr(0,pip);
        value = line.substr(pip+1);
        map[date] = std::atof(value.c_str());
    }
    file.close();
}
const char *	BitcoinExchange::InvalidFormat::what() const throw()
{
    return "Error: Invalid Format";
}

const char *	BitcoinExchange::InvalidDate::what() const throw()
{
    return "Error: Invalid Date";
}

const char *	BitcoinExchange::InvalidNumber::what() const throw()
{
    return "Error: Invalid Number";
}