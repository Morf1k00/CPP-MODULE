/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:27:22 by rostik            #+#    #+#             */
/*   Updated: 2025/04/14 13:17:27 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    try {
        // Создаем бюрократов разных уровней для тестирования
        Bureaucrat boss("Boss", 1);          // Высший уровень
        Bureaucrat manager("Manager", 30);   // Средний уровень
        Bureaucrat intern("Intern", 130);    // Низший уровень
        
        ShrubberyCreationForm shrubbery("Garden");
        RobotomyRequestForm robotomy("Digital");
        PresidentialPardonForm presidential("President");

        shrubbery.beSigned(boss);
        robotomy.beSigned(manager);
        presidential.beSigned(intern);

        shrubbery.execute(boss);
        robotomy.execute(manager);
        presidential.execute(intern);
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // try {
    //     // Создаем бюрократа с высоким званием (низкий grade)
    //     std::cout << "Creating bureaucrat with grade 10..." << std::endl;
    //     Bureaucrat boss("Boss", 10);
    //     std::cout << boss << std::endl;
        
    //     // Создаем форму ShrubberyCreationForm
    //     std::cout << "\nCreating ShrubberyCreationForm for target 'home'..." << std::endl;
    //     ShrubberyCreationForm shrubForm("home");
    //     std::cout << "Form created: " << shrubForm.getName() 
    //              << ", Grade to sign: " << shrubForm.getGradeToSign()
    //              << ", Grade to execute: " << shrubForm.getGradeToExecute() << std::endl;
        
    //     // Подписываем форму
    //     std::cout << "\nSigning the form..." << std::endl;
    //     boss.signForm(shrubForm);
        
    //     // Выполняем форму
    //     std::cout << "\nExecuting the form..." << std::endl;
    //     shrubForm.execute(boss);
        
    //     std::cout << "\nCheck for the created file: home_shrubbery" << std::endl;
        
    // } catch (std::exception &e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }

    return 0;
}