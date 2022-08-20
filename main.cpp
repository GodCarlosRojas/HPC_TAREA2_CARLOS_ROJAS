/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 8
 * Materia: INtroduccion a la HPC
 * *******************************************************/
#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>
#include <math.h>
//Como la matricez que se vana trabajar son 3X3 se inicializan asi

typedef Eigen::Matrix<float,3,3> MiMatriz3x3f;

int main()
{

    MiMatriz3x3f mA;
    MiMatriz3x3f mB;
    MiMatriz3x3f mX;

    std::cout << "\n------------PUNTO OCHO-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B
     std::cout << "\n Matriz A"<< std::endl;
    mA << 1, 1, 1, 6, 5, 4, 13, 10, 8;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << 0, 1, 2, 1, 0, 2, 1, 2, 0;
    std::cout<<mB<<std::endl;
    //Ahora ya teniendo la matriz A y B se operan X=B/A
    std::cout << "\n Matriz X"<< std::endl;
    mX=mA.inverse()*mB;
    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
