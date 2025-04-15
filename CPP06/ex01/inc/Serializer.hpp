/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:13:37 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 14:59:00 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALEZER_HPP

#include "Data.hpp"
#include <stdint.h>
#include <iostream>

class Serializer{
    private:
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif
