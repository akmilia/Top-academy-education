#include <iostream> 
#include <fstream> 
#include <string>  

//rightly stolen code  

void write_in_file(std::string name_file) {
    std::ofstream fout;

    fout.open(name_file); // перезпись в файл

    if (fout.is_open()) {
        std::string line = "";
        std::cin.ignore(); //ignoring the console cause otherwise we wil have an extra  "\n"
        while (fout.good() && line != "end") {
            std::getline(std::cin, line);
            if ( line != "end") {
                fout << line << "\n";
            }
        }
    } else {
        std::cout << "File not open!!!!\n";
    }

}

void in_file_out_file(std::string in_file, std::string out_file) 
{
   std::ofstream fout; 
   std::ifstream fin;
    fin.open(in_file);
    fout.open(out_file); // перезпись в файл 

    if (fout.is_open()) {
        std::string line = "";
        std::cin.ignore();
        while (fin.good()) {
            std::getline(fin, line);
            fout << line << "\n";

        }
    } else 
        std::cout << "File not open!!!!\n";

    fout.close(); 
    fin.close(); 
    
}

int main()
{
    std::string file_name; 
    std::string file_name_2;  
    
    std::cout << "Input file name: ";
    std::cin >> file_name;  
     std::cout << "Input file name 2 : ";
    std::cin >> file_name_2;  
    
    write_in_file(file_name); 

    
    in_file_out_file(file_name, file_name_2);

}