/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:40:20 by rostik            #+#    #+#             */
/*   Updated: 2025/04/08 12:46:15 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main(){
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        bob.increment();  // bob grade bocomes 1
        std::cout << "After increment: " << bob << std::endl;

        bob.increment();  // error: more than 1
    }
    catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "--------------------------" << std::endl;

    try {
        Bureaucrat joe("Joe", 151);  // error: more than 150
    }
    catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "--------------------------" << std::endl;

    try {
        Bureaucrat alice("Alice", 150);
        std::cout << alice << std::endl;

        alice.decrement();  // error: more the 150
    }
    catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}