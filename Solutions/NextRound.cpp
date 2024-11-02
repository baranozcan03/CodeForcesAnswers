#include <iostream>
#include <vector>

int main() {
    int n,k,dummyk,theScore,dummyScore,result;
    std::cin >>n>>k; //get the n and the k values
    dummyk = k; //in order to iterrate throug hthe input
    result =0; //we will count the people that are passed
    while(dummyk){
        dummyk--;
        std::cin>>theScore;
        if(theScore == 0) {
            result--;//i will add the k number regardless fo the scores, in case a score is 0 
            //i am subtracting it beforehand 
        }
    }
    result += k;//add the k people so far
    while(std::cin>>dummyScore && dummyScore==theScore && dummyScore != 0) {//check whether any ties in the kth place
        result++;
    }
    std::cout << result;//print the result

    return 0;
}