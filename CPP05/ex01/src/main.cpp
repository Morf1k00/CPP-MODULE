/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:00:43 by rostik            #+#    #+#             */
/*   Updated: 2025/04/08 13:00:59 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main(){
    try {
        Bureaucrat bob("Bob", 2);
        Form form("Form1", 3, 5);
        std::cout << bob << std::endl;
        std::cout << form << std::endl;

        bob.signForm(form);  // Bob signs the form
        std::cout << form << std::endl;

        bob.increment();  // error: more than 1
    }
    catch (const std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}