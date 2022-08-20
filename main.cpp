/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 10
 * Materia: INtroduccion a la HPC
 * *******************************************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>
#include <math.h>

//Como la matricez que se vana trabajar son 2x2 se inicializan asi
typedef Eigen::Matrix<float,2,2> MiMatriz2x2f;

int main()
{

    MiMatriz2x2f mA;
    MiMatriz2x2f mX;

    std::cout << "\n------------PUNTO DIEZ-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A
     std::cout << "\n Matriz A"<< std::endl;
    mA << 4, 2, -1, 0;
    std::cout<< mA <<std::endl;
    //Ahora ya teniendo la matriz A se opera X= A^3
    std::cout << "\n Matriz X"<< std::endl;
    mX=mA*mA*mA;
    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
