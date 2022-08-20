/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 5
 * Materia: INtroduccion a la HPC
 * *******************************************************/
#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>
#include <math.h>
//Como la matricez que se vana trabajar son 2x2 se inicializan asi

int main()
{
    Eigen::MatrixXf mA(2,3);
    Eigen::MatrixXf mB(3,2);
    Eigen::MatrixXf mC(2,2);
    Eigen::MatrixXf mX(2,2);
    std::cout << "\n------------PUNTO CINCO-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B y la matariz C
    std::cout << "\n Matriz A"<< std::endl;
    mA << 3, 0, -1, 0, 2, 1;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << 1, 2, 1, 0, 0, 6;
    std::cout<<mB<<std::endl;
    std::cout << "\n Matriz C"<< std::endl;
    mC << -2, 0, -2, -5;
    std::cout<<mC<<std::endl;


    //Ahora ya teniendo la matriz A , B y C se operan X=2(AB+C)
    std::cout << "\n Matriz X"<< std::endl;
    mX=2*((mA*mB)+mC);

    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
