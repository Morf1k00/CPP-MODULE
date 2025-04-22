/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:12:34 by rostik            #+#    #+#             */
/*   Updated: 2025/04/22 10:29:15 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

int main()
{
    std::vector<int> vect;
    vect.push_back(10);
    vect.push_back(11);
    vect.push_back(12);

    try{
        std::vector<int>::iterator it = easyfind(vect, 11);
        std::cout << "Value found: " << *it << std::endl;
    }   
    catch(const std::exception& e){
        std::cerr<< e.what() <<std::endl;
    }

    try{
        easyfind(vect, 100);
    }
    catch(const std::exception& e){
        std::cerr << e.what() <<std::endl;
    }

    std::list<int> lis;
    lis.push_back(42);
    lis.push_back(52);
    lis.push_back(44);
    try {
        std::list<int>::iterator it2 = easyfind(lis, 42);
        std::cout << "Value found: " << *it2 << std::endl;
    }
    catch (const std::exception& e){
        std::cerr<< e.what() << std::endl;
    }

    return 0;

}