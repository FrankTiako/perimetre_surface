#include<iostream>

float triangle(char o){
    float r,a,b,c,x,y;
    
    if(o == 'p'){
        std::cout << "Entrez la longueur du cote AB: " << std::endl; 
        std::cin >> a;
        std::cout << "Entrez la longueur du cote AC: " << std::endl; 
        std::cin >> b;
        std::cout << "Entrez la longueur du cote BC: " << std::endl; 
        std::cin >> c;
        r = a+b+c;
        std::cout << "Le  perimetre de ce triangle est: "<< r<<std::endl;
        return r;
    }else{
        std::cout << "Entrez la longueur de la base" << std::endl;
        std::cin >> x;
        std::cout << "Entrez la longueur de sa hauteur" << std::endl; 
        std::cin >> y;
        r = (x*y)/2;
        std::cout << "La  surface de ce triangle est: "<< r<<std::endl;
        return r;
    }
}

float rectangle(char o){
    float r,x,y;
    std::cout << "Entrez la longueur: " << std::endl;
    std::cin >> x;
    std::cout << "Entrez la la largeur: "  << std::endl; 
    std::cin >> y;
    if(o == 'p'){
        r = (x+y)*2;
        std::cout << "Le  perimetre de ce rectangle est: "<< r<<std::endl;
        return r;
    }else{
        r = x*y;
        std::cout << "La  surface de ce rectangle est: "<< r <<std::endl;
        return r;
    }
}

float cercle(char o){
    float r,x;
    std::cout << "Entrez le rayon: " << std::endl;
    std::cin >> x;
    if(o == 'p'){
        r = (x*2)*3.14;
        std::cout << "Le  perimetre de ce cercle est: "<< r<<std::endl;
        return r;
    }else{
        r = x*x*3.14;
        std::cout << "La surface de ce cercle est: " << r <<std::endl;
        return r;

    }
}

int main(int argc, char** argv){
    float r;
    char f,o;
    std::cout << "Quelle operation realiser :" << std::endl;
    std::cout << "Perimetre(p) / Surface (s) "<< std::endl;
    std::cin >> o;
    std::cout << "Quelle figue utiliser:  " << std::endl;
    std::cout << "Triangle(t) / rectangle (r) / cercle (c)  " << std::endl;
    std::cin >> f;
    if(f=='t'){
        r = triangle(o);
    }
    if(f=='r'){
        r = rectangle(o);
    }
    if(f=='c'){
        r = cercle(o);

    }

    return 0;  
}