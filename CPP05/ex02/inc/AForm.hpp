/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:32:07 by rostik            #+#    #+#             */
/*   Updated: 2025/04/14 12:37:46 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iomanip>
#include <iostream> 
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
    private:
        const std::string _name;
        const int _gradeToExecute;
        const int _gradeToSign;
        bool isSigned;

    public:
        AForm();
        AForm(const std::string &name,int gradeToExecute, int gradeToSign);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();

        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        
        void beSigned(const Bureaucrat& bureaucrat);
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        class FormIsNotSigned: public std::exception{
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const AForm& form);
#endif