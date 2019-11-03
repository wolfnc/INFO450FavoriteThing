//
//  FavoriteAlbums.cpp
//  a3 FavoriteThings
//
//  Created by Noah Wolf on 11/2/19.
//  Copyright © 2019 Noah Wolf. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "Albums.hpp"
#include "AlbumsList.hpp"
using namespace std;

void instructions();
void runAgain();

int main()
{
    Albums myAlbum;
    AlbumsList myList;
    instructions();
    char answer;
    
    do
        {
            myList.AddItem();

            runAgain();
            cin >> answer;

            cout << endl;
            cin.clear();
            cin.ignore();

        } while (answer == 'Y' || answer == 'y');

        myList.ShowList();
        return 0;
}
    
void instructions()
{
    cout << endl;
    cout << "This program will allow you to keep a list of your favorite albums!" << endl;
    cout << endl;
}

void runAgain()
{
    cout << endl;
    cout << "Enter Y if you would like to add another album" << endl;
    cout << endl;
}

