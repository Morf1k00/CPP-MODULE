/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:10:51 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:38:57 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();

    std::cout << GR << meta->getType() << RS << " " <<std::endl;
    std::cout << RD << j->getType() << RS << " " <<std::endl;
    std::cout << YE << i->getType() << RS << " " <<std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << CY "---- WrongAnimal test ----" << std::endl;

    std::cout << BL <<wrongmeta->getType() << RS << " " << std::endl;
    std::cout << MG <<l->getType() << RS << " " << std::endl;

    wrongmeta->makeSound();
    l->makeSound();

    delete wrongmeta;
    delete l;

    return 0;
}
