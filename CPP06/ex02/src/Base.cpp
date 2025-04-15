/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:43:39 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 16:46:15 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"

Base::~Base(){
    std::cout << "Base destructor called!" << std::endl;
}

Base *generate(void){
    int random = rand() % 3;
    switch (random){
        case 0 : 
            return new A;
        case 1:
            return new B;
        case 2 :
            return new C;
        default:
            return NULL;
    }
    return 0;
}

void identify(Base *p){
    if (dynamic_cast <A*> (p))
        std::cout << "A" <<std::endl;
    else if (dynamic_cast <B*> (p))
        std::cout << "B" <<std::endl;
    else if (dynamic_cast <C*> (p))
        std::cout << "C" <<std::endl;
}

void identify(Base &p){
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return;
    } catch (...) {}
    
    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return;
    } catch (...) {}
    
    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return;
    } catch (...) {}

    std::cerr << "Bad class" << std::endl;
}