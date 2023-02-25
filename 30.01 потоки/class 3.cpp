#include <iostream> 
#include <fstream> 
#include <string>   

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

void set_line_in_file(std::string n_file)
{
    std::ofstream fout; 
    std::ifstream fin;
    
    fout.open(n_file); 

    if (fout.is_open()) {
        std::string line = "";
        std::cin.ignore();
        while (fin.good() && line != "Hello")
         {  
            std::getline(std::cin, line);
            fout << line << "\n";

        }
    } else 
        std::cout << "File not open!!!!\n";

    fout.close(); 
    fin.open(n_file); 
    
    if (fin.is_open()) {
        std::string line = "";
        std::cin.ignore();
        while (fin.good() && line != "you")
         {
            std::getline(fin, line);
            fout << line << "\n";

        }
    } else 
        std::cout << "File not open!!!!\n";

} 

int main() 
{
    std::string file_name; 
    
    std::cout << "Input file name: ";
    std::cin >> file_name;  
   
    write_in_file(file_name); 
}