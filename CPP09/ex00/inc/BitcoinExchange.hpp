/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:58:26 by rostik            #+#    #+#             */
/*   Updated: 2025/04/23 13:24:19 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <fstream>
#include <exception>
#include <sstream>

class BitcoinExchange{
    private:
        std::map<std::string, double> _dateD;
        bool isValidDate(const std::string& date);
        bool parseLine(const std::string& line, std::string& date, double& amount);
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        ~BitcoinExchange();
        void findDate(std::string fileName);
        void fillMapDate();
};

class dateEarly: public std::exception{
    const char *what() const throw()
    {
        return("Date too Early");
    }
};

class cantOpen: public std::exception{
    const char *what() const throw()
    {
        return("File imposible open!");
    }
};





#endif
