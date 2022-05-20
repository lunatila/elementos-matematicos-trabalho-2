//
//  Horse.hpp
//  trabalhofinalcaralho
//
//  Created by Átila Luna Ambrósio da Silva on 12/05/22.
//  Copyright © 2022 Átila Luna Ambrósio da Silva. All rights reserved.
//
#pragma once
#include <GLUT/GLUT.h>
#include "Circle.hpp"

class Horse
{

public:
    //Circle initialCircle;

    bool willMove = false;
    bool isOntheTable = false;

    Circle initialPosition;
    int atualSpot = 1, finalSpot;

    int Weight = 1;
    // Se o cavalo estiver na casa especial exterior esse valor é 2
};
