/**********************************************************
 * FEcha: 23 Agosto de 2022
 * Autor: Carlos Andres ROJas Rocha
 * TEma: PUNTO 11
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
    MiMatriz2x2f mC;
    MiMatriz2x2f mX;

    std::cout << "\n------------PUNTO ONCE-------------------" << std::endl;
    //Se requiere llenar la matriz con los numeros que se indican que valen a la
    // matriz A y a la matriz B y la matariz C
     std::cout << "\n Matriz A"<< std::endl;
    mA << 2, 4, 3, 2;
    std::cout<< mA <<std::endl;
    std::cout << "\n Matriz B"<< std::endl;
    mB << 1, 0, 2, 1;
    std::cout<<mB<<std::endl;
    std::cout << "\n Matriz C"<< std::endl;
    mC << 7, 5, 6, 1;
    std::cout<<mC<<std::endl;

    //Se calcula la transpuesta y se reemplaza en la matriz A
     mA.transposeInPlace();
    //Para multiplicar el despeje de esas matricez, se requiere la inversa de A, y de la trasnpuesta de B

    //Ahora ya teniendo la matriz A , B y C se operan X=(AT^-1)*C*(B^-1)
    std::cout << "\n Matriz X"<< std::endl;
    mX=mA.inverse()*mC*mB.inverse();
    std::cout<<mX<<std::endl;
    //Se imprime el resultado de la operacion de matricez
    return 0;
}
