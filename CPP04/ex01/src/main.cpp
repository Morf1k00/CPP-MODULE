/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:42:30 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 17:50:35 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../inc/Brain.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"


int main(){

    int j = 4;
    Animal* arr[j];
    
    for (int i = 0; i < j; i++){
        if (i % 2 == 0)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
    }

    for (int i = 0; i < j; i++){
        delete arr[i];
    }
    return(0);
    
    
    // test from ex00
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const Animal*meta = new Animal();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << meta->getType() << " " << std::endl;

    // meta->makeSound();
    // j->makeSound();
    // i->makeSound();

    // delete meta;
    // delete i;
    // delete j;

    return 0;
}