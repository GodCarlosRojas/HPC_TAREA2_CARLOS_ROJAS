/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 1
 * Materia: INtroduccion a la HPC
 * *******************************************************/

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

//Como la matricez que se vana trabajar son 2x2 se inicializan asi
typedef Eigen::Matrix<float,2,2> MiMatriz2x2f;

int main()
{

    MiMatriz2x2f mA;
    MiMatriz2x2f mB;
    MiMatriz2x2f mX;

    std::cout << "\n------------PUNTO UNO-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B
     std::cout << "\n Matriz A"<< std::endl;
    mA << 4, -2, 1, -7;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << -1, 2, 6, -5;
    std::cout<<mB<<std::endl;
    //Ahora ya teniendo la matriz A y B se operan X=3A-4B
    std::cout << "\n Matriz X"<< std::endl;
    mX=(3*mA) - (4*mB);
    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
