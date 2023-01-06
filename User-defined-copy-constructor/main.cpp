//
//  main.cpp
//  User-defined-copy-constructor
//
//  Created by Fadhel Alanazi on 30/05/1444 AH.
//

#include <iostream>

class Myclass{
public:

    int x,y;
    Myclass(int xx,int yy){
        this->x = xx;
        this->y = yy;
        std::cout<<x<<"\n"<<y<<"\n";

    } //copy constructor
    Myclass(const Myclass& rfs){
        x = rfs.x;
        y = rfs.y;

        std::cout<<"copy constructor invoked \n";
    }
};

int main(int argc, const char * argv[]) {
   
    Myclass objc1(3,5);
    Myclass objc2 = objc1;
    
    
    
    return 0;
}
