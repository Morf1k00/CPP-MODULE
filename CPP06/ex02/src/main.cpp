/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:41:56 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 16:48:43 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"

int main() {
    srand(time(NULL)); 

    // Base* obj = generate(); 
    // identify(obj);          
    // identify(*obj); 
    
    for (int i = 0; i < 10; i++) {
        Base* obj = generate();
        identify(obj);
        identify(*obj);
        delete obj;
        std::cout << "-----" << std::endl;
    }

    // delete obj;    
           
    return 0;
}