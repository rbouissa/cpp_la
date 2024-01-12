#include"BitcoinExchange.hpp"


std::string BitcoinExchange::read_file(std::string file_name)
{
    td::ifstream inputFile(filename);

    
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return 1; 
    }
    //read_line by line
    std::string line;
    std::string file;
    int i=0;
    while (std::getline(inputFile, line)) {
        file =file+line;
    }
    std::cout<<file<<std::endl;
}
// int valide_date(std::string line)
// {
//     int i=0;
//     float var = 0.0F;
//     while(line[i])
//     {
//         while(line!='-')
//         {
//           int j=0;
//           if
//             j++;
//         }
//     }
// }