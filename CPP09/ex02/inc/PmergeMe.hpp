/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:02:35 by rostik            #+#    #+#             */
/*   Updated: 2025/04/24 13:19:07 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <deque>
#include <climits>
#include <ctime>
#include <cstdlib>



class PmergeMe{
    private:
        std::deque<int> _Deque;
        std::vector<int> _Vector;

        void fillContainers(char **argv);
        void printBefore() const;
        void printAfter(const std::vector<int>& vec);
        void mergeInsertSortVector(std::vector<int>& vec);
        void mergeInsertSortDeque(std::deque<int>& deq);
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        ~PmergeMe();

        void run(char **argv);

};

#endif