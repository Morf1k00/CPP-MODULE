/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:29:51 by rostik            #+#    #+#             */
/*   Updated: 2025/04/23 13:36:47 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy){
    this->_dateD = copy._dateD;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){

}

bool BitcoinExchange::isValidDate(const std::string &date){
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    int y, m, d;
    char sep1, sep2;
    std::istringstream ss(date);

    if (!(ss>>y >> sep1 >> m>> sep2>> d))
        return false;
    if (sep1 != '-' || sep2 != '-')
        return false;
    if (m < 1 || m > 12 || d < 1 || d > 31)
        return false;
    return true;
}

bool BitcoinExchange::parseLine(const std::string& line, std::string& date, double& amount) {
    size_t pipePos = line.find('|');
    if (pipePos == std::string::npos)
        return false;

    date = line.substr(0, pipePos);
    std::string amountStr = line.substr(pipePos + 1);

    date.erase(0, date.find_first_not_of(" \t\r\n"));
    date.erase(date.find_last_not_of(" \t\r\n") + 1);
    amountStr.erase(0, amountStr.find_first_not_of(" \t\r\n"));
    amountStr.erase(amountStr.find_last_not_of(" \t\r\n") + 1);

    std::istringstream ss(amountStr);
    if (!(ss >> amount))
        return false;
    return true;
}

void BitcoinExchange::fillMapDate(){
    std::map<std::string, double> priceData;
    std::ifstream file("data.csv");

    if (!file.is_open())
        throw cantOpen();

    std::string line;
    std::getline(file, line);
    while(std::getline(file, line)){
        std::istringstream ss(line);
        std::string date;
        double price;
        if (std::getline(ss, date, ',') && ss >>price)
            priceData[date] = price;
    }
    _dateD = priceData;
    file.close();
}

void BitcoinExchange::findDate(std::string fileName){
    std::ifstream input(fileName.c_str());
    std::string line;

    if (!input.is_open())
        throw cantOpen();

    std::getline(input, line);
    while(std::getline(input, line)){
        std::istringstream ss(line);
        std::string date;
        double amount;
        if (!parseLine(line, date, amount)){
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (!isValidDate(date)){
            std::cerr << "Error: bad input11 => " << date << std::endl;
            continue;
        }
        if (amount > 1000){
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        if (amount < 0){
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        std::map<std::string, double>::iterator it = _dateD.lower_bound(date);
        if (it == _dateD.end() || it->first != date){
            if(it!= _dateD.begin())
                --it;
            else{
                std::cerr << "Error: " << date << " is too early." << std::endl;
                continue;
            }
        }
            std::cout << date << " => " << amount << " = " << amount * it->second<< std::endl;
    }
}

