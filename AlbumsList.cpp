//
//  AlbumsList.cpp
//  a3 FavoriteThings
//
//  Created by Noah Wolf on 11/2/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include "AlbumsList.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include "Albums.hpp"
using namespace std;

AlbumsList::AlbumsList()
{
    numItems = 0;
}

void AlbumsList::AddItem()
{
    items[numItems].getAlbumsInput();
    numItems++;
}

void AlbumsList::ShowList()
{
    int i;
    for (i = 0; i < numItems; i++)
    {
        cout << items[i];
    }
}


