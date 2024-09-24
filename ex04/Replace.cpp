#include "Replace.hpp"

void newFile(std::string filename, std::string s1, std::string s2){

	std::string extension = ".replace";
	std::string newfile = filename + extension;
	
	std::string line;
	

	std::ifstream infile(filename.c_str());
	std::ofstream outfile(newfile.c_str());

	if (s1.empty()){ std::cerr << "Error: You cannot have an empty string." << std::endl;
		return ;}
	if (!outfile.is_open()){ 
		std::cerr << "Error: Unable to open the file for reading" << std::endl;
		return;}
	if (!outfile.is_open()){ 
		std::cerr << "Error: Unable to open the file for reading" << std::endl;
		return;}
	while(std::getline(infile, line))
	{
		size_t index = 0;
		size_t found = 0;
		
		std::string newline;

		while((found = line.find(s1, index)) != std::string::npos)
		{
			newline += line.substr(index, found - index);
			newline += s2;
			index = found + s1.length();;
		}
		newline += line.substr(index);
		outfile << newline << std::endl;
	}
	infile.close();
	outfile.close();
}
