/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlara-na <jlara-na@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:33:41 by jlara-na          #+#    #+#             */
/*   Updated: 2025/07/16 21:45:39 by jlara-na         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "../inc/Base.hpp"

Base *generate(void){
    struct timeval currentTime;
    gettimeofday(&currentTime, NULL);
	int cases = currentTime.tv_usec % 3;
    switch(cases){
        case 0:
            return(new A());
        case 1:
            return(new B());
        case 2:
            return(new C());
        default:
            std::cout << "Something really weird just happen!" << std::endl;
    }
    return NULL;
}

void identify(Base* p){
    std::cout << "void identify(Base* p): ";
    if (A *a_class =  dynamic_cast<A *>(p))
        std::cout << "\033[32mclass A identified\033[m" << std::endl;
    else if (B *b_class =  dynamic_cast<B *>(p))
        std::cout << "\033[32mclass B identified\033[m" << std::endl;
    else if (C *c_class =  dynamic_cast<C *>(p))
        std::cout << "\033[32mclass C identified\033[m" << std::endl;
    else
        std::cout << "Something really weird just happen!" << std::endl;
}

void identify(Base& p){
    std::cout << "void identify(Base& p): ";
    try {
        A a_class = dynamic_cast<A &>(p);
        std::cout << "\033[32mclass A identified\033[m" << std::endl;
        return ;
    }
    catch(const std::exception &e){
        // std::cerr << e.what() << std::endl;
    }
    try {
        B b_class = dynamic_cast<B &>(p);
        std::cout << "\033[32mclass B identified\033[m" << std::endl;
        return ;
    }
    catch(const std::exception &e){
        // std::cerr << e.what() << std::endl;
    }
    try {
        C c_class = dynamic_cast<C &>(p);
        std::cout << "\033[32mclass C identified\033[m" << std::endl;
        return ;
    }
    catch(const std::exception &e){
        // std::cerr << e.what() << std::endl;
    }
}

/*

    The main point of this exercise is to learn how dynamic_cast behaves, when you try to use references
    it will throw exceptions an when using pointers it will return NULL.

*/

int main(){
    std::cout << "I will generate 10 random cases!" << std::endl;
    for (int i = 0; i < 10; i++){
        std::cout << "\033[33m------------------Case: " << i + 1 << "------------------\033[m" << std::endl;
        Base *basePTR = generate();
        identify(basePTR);
        identify(*basePTR);
        delete basePTR;
    }
}