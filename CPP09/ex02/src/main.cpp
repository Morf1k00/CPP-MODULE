/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:20:03 by rostik            #+#    #+#             */
/*   Updated: 2025/04/24 13:20:37 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    try {
        std::vector<int> input;
        for (int i = 1; i < argc; ++i) {
            std::string arg = argv[i];
            for (size_t j = 0; j < arg.size(); ++j) {
                if (!isdigit(arg[j])) throw std::runtime_error("Error");
            }
            long num = std::strtol(argv[i], NULL, 10);
            if (num > INT_MAX || num <= 0)
                throw std::runtime_error("Error");
            input.push_back(static_cast<int>(num));
        }

        std::cout << "Before: ";
        for (size_t i = 0; i < input.size(); ++i)
            std::cout << input[i] << " ";
        std::cout << std::endl;

        PmergeMe sorter;
        sorter.run(input);

    } catch (const std::exception &e) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    return 0;
}