#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number){
     unsigned sum = 0;
    for(unsigned int i = 1; i <= number; i++){
        sum+= i*i;
    }
    return sum;
}
unsigned int square_of_sum(unsigned int number){
    unsigned sum = 0;
    for(unsigned int i = 1; i <= number; i++){
        sum+= i;
    }
    return sum*sum;
}
unsigned int difference_of_squares(unsigned int number){
    unsigned int sqrofsum = square_of_sum(number);
    unsigned int sumofsqr = sum_of_squares(number);

    return sqrofsum - sumofsqr;

}
