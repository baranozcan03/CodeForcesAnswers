#include <iostream>
#include <vector>


//lesson, 10^9 still counts as long long

int main(){
    long long n,m,a;
    std::cin>> n >>m>>a;
    if(n%a != 0) n+=a; //if the flagstone perfectly fits, dont bother with it
    if(m%a != 0) m+=a; //if it doesnt fit what you do is add onse size so intiger divison will get the ceiling. 
    std::cout << (n/a)*(m/a); //integer divison that gives the result.
    return 0;
}