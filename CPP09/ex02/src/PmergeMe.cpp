/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:14:55 by rostik            #+#    #+#             */
/*   Updated: 2025/04/24 13:17:07 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe &other) { 
    *this = other; 
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    if (this != &other) {
        _Vector = other._Vector;
        _Deque = other._Deque;
    }
    return *this;
}
PmergeMe::~PmergeMe() {}

void PmergeMe::fillContainers(char **argv) {
    for (int i = 1; argv[i]; ++i) {
        std::string s(argv[i]);
        for (size_t j = 0; j < s.length(); ++j) {
            if (!isdigit(s[j]))
                throw std::runtime_error("Error");
        }
        long val = std::atol(argv[i]);
        if (val < 0 || val > INT_MAX)
            throw std::runtime_error("Error");
        _Vector.push_back(static_cast<int>(val));
        _Deque.push_back(static_cast<int>(val));
    }
}

void PmergeMe::printBefore() const {
    std::cout << "Before: ";
    for (size_t i = 0; i < _Vector.size(); ++i)
        std::cout << _Vector[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::printAfter(const std::vector<int> &vec) {
    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
}

// Merge-Insert sort for vector
void PmergeMe::mergeInsertSortVector(std::vector<int> &vec) {
    if (vec.size() <= 1)
        return;
    std::vector<int> left(vec.begin(), vec.begin() + vec.size() / 2);
    std::vector<int> right(vec.begin() + vec.size() / 2, vec.end());
    mergeInsertSortVector(left);
    mergeInsertSortVector(right);
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j])
            vec[k++] = left[i++];
        else
            vec[k++] = right[j++];
    }
    while (i < left.size())
        vec[k++] = left[i++];
    while (j < right.size())
        vec[k++] = right[j++];
}

// Merge-Insert sort for deque
void PmergeMe::mergeInsertSortDeque(std::deque<int> &deq) {
    if (deq.size() <= 1)
        return;
    std::deque<int> left(deq.begin(), deq.begin() + deq.size() / 2);
    std::deque<int> right(deq.begin() + deq.size() / 2, deq.end());
    mergeInsertSortDeque(left);
    mergeInsertSortDeque(right);
    size_t i = 0, j = 0, k = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j])
            deq[k++] = left[i++];
        else
            deq[k++] = right[j++];
    }
    while (i < left.size())
        deq[k++] = left[i++];
    while (j < right.size())
        deq[k++] = right[j++];
}

void PmergeMe::run(char **argv) {
    fillContainers(argv);
    printBefore();

    clock_t startVec = clock();
    mergeInsertSortVector(_Vector);
    clock_t endVec = clock();
    printAfter(_Vector);

    clock_t startDeq = clock();
    mergeInsertSortDeque(_Deque);
    clock_t endDeq = clock();

    double vecTime = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000;
    double deqTime = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;

    std::cout << "Time to process a range of " << _Vector.size() << " elements with std::vector : " << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << _Deque.size() << " elements with std::deque : " << deqTime << " us" << std::endl;
}