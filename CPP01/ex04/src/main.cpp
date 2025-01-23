/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:45:43 by rostik            #+#    #+#             */
/*   Updated: 2025/01/23 13:44:16 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int check_file(int argc, char **argv, std::ifstream &file){
    
    if (argc != 4){
        std::cout << "Wrong number argumnts!"<< std::endl;
        return 0;
    }

    file.open(argv[1]);

    if (!file){
        std::cout << "Cant open file or file doesn`t exist!" << std::endl;
        return 0;
    }
    else if (file.peek() == EOF){
        std::cout<< "File is empty and i can`t change anything"<< std::endl;
        file.close();
        return 0;
    }
    else
        return 1;
}

int main(int arc, char **argv){

    int i = 0;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::ifstream fileName;
    std::ofstream newFile;
    
    if(check_file(arc, argv, fileName) == 0)
        return 0;

    newFile.open((std::string(argv[1]) + ".replace").c_str());
    while(getline(fileName, line))
    {
        i = 0;
        while(line.find(s1) != std::string::npos){
            i = line.find(s1, i); // fix problem(before was problem with index from which i should start changing arguments)
            line.erase(i, s1.length());
            line.insert(i, s2);
            i+= s2.length();
        }
        newFile << line << std::endl;
    }
    
    fileName.close();
    newFile.close();

    return 0;
}