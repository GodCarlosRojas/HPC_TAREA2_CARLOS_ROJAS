/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 4
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
    MiMatriz2x2f mB;
    MiMatriz2x2f mX;

    std::cout << "\n------------PUNTO CUATRO-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B
     std::cout << "\n Matriz A"<< std::endl;
    mA << 2, 1, -4, -3;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << 2, 2, 6, 4;
    std::cout<<mB<<std::endl;
    //Ahora ya teniendo la matriz A y B se operan X=B/A
    std::cout << "\n Matriz X"<< std::endl;
    //Se requiere calcular la inversa de A para si pmultiplicarlo por B
    //Esto toca ya que la division de matricez no es posible
    mX=mB*mA.inverse();
    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
