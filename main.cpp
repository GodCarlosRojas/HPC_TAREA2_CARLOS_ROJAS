/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 14
 * Materia: INtroduccion a la HPC
 * *******************************************************/
#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>
#include <math.h>
//Como la matricez que se vana trabajar son 2x2 se inicializan asi

int main()
{
    Eigen::MatrixXf mA(3,3);
    Eigen::MatrixXf mB(3,3);
    Eigen::MatrixXf mX(3,3);
    std::cout << "\n------------PUNTO CATORCE-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B
    std::cout << "\n Matriz A"<< std::endl;
    mA << 2, 5, 7, 6, 3, 4, 5, -2, -3;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << -1, 1, 0, 0, 1, 1, 1, 0, -1;
    std::cout<<mB<<std::endl;
    //Ahora ya teniendo la matriz A , B  se operan X=B/A
    std::cout << "\n Matriz X"<< std::endl;
    mX=mB*mA.inverse();

    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
