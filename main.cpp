/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 13
 * Materia: INtroduccion a la HPC
 * *******************************************************/
#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>
#include <math.h>
//Como la matricez que se vana trabajar son 2x2 se inicializan asi

int main()
{
    Eigen::MatrixXf mA(1,3);
    Eigen::MatrixXf mB(3,2);
    Eigen::MatrixXf mC(2,1);
    Eigen::MatrixXf mX(3,3);
    std::cout << "\n------------PUNTO TRECE-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B y C
    std::cout << "\n Matriz A"<< std::endl;
    mA << 4, 8, 12;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << 3, 2, 0, 1, -1, 0;
    std::cout<<mB<<std::endl;
    std::cout << "\n Matriz C"<< std::endl;
    mC << 3, -1;
    std::cout<<mC<<std::endl;
    //Ahora ya teniendo la matriz A , B y C se operan X=ABC
    std::cout << "\n Matriz X"<< std::endl;
    mX=mA*mB*mC;
    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
