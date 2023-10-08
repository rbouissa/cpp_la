#include"sed.hpp"
int main(int argc,char **argv)
{
    if(argc==4)
    {
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
    std::cerr << "Error: Unable to open the file." << std::endl;
    return 1;
   
    }
     std::string line;
     std::string str;
     std::string filename= argv[1];
while (std::getline(inputFile, line)) {
    str = str + line +'\n';
}
 inputFile.close();
 std::string s1=argv[2];
 std::string s2=argv[3];
 size_t foundPos = str.find(s1);
 std::string modifiedString ;
//  modifiedString = str.substr(0, foundPos) + s2 +
//                                  str.substr(foundPos + s1.length());
std::string text_tmp;
while (foundPos != std::string::npos && s2 != "" && s1 != "")
{
    if (foundPos != std::string::npos)
		{
     text_tmp = modifiedString.substr(foundPos + s1.length());
		modifiedString = modifiedString.substr(0, foundPos) + s2 + text_tmp;
			foundPos = modifiedString.find(s1, foundPos + s2.length());
    // foundPos = modifiedString .find(s1,foundPos+s2.length());
    //  modifiedString = modifiedString.substr(0, foundPos) + s2 +
    //      
                                }                        modifiedString.substr(foundPos + s1.length());
}

  
std::string h=filename+".replace";
std::ofstream outputFile;
outputFile.open(h.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }
    outputFile<<modifiedString<<std::endl;
     outputFile.close();
    }
    else
    std::cout<<"invalid parameters"<<std::endl;
}