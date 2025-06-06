/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:35:59 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 16:47:27 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <exception>
 
class Base{
    public:
        virtual ~Base();
};

class A: public Base{

};

class B: public Base{

};

class C: public Base{

};

Base* generate(void);
void identify(Base& p);
void identify(Base* p);



#endif