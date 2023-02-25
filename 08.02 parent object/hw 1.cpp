#include <iostream>
#include <fstream>
#include <string>
 

 void check(std::string from_file,std::string out_file ) 
{ 
    std::ofstream fout; 

    fout.open(from_file); 
    fout.open(out_file);  

     if (fout.is_open()) {
        while (fout.good()) {
            std::getline(std::cin, line);
            if ( line != "end") {
                fout << line << "\n";
            }
        }
    } else {
        std::cout << "File not open!!!!\n";
    }
fout.operator==

}


