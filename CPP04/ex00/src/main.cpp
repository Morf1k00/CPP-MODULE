/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:10:51 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:29:12 by rostik           ###   ########.fr       */
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

    std::cout << meta->getType() << " " <<std::endl;
    std::cout << j->getType() << " " <<std::endl;
    std::cout << i->getType() << " " <<std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "---- WrongAnimal test ----" << std::endl;

    std::cout << wrongmeta->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;

    wrongmeta->makeSound();
    l->makeSound();

    delete wrongmeta;
    delete l;

    return 0;
}
