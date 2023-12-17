//Ana Fonksiyon
#include <iostream>
#include <fstream>
#include <windows.h>
#include "Stack.h"
#include "Position.h"
#include <vector>
#define SATIR 21
#define SUTUN 51
#ifndef STACK_H
#define POSITION_H
// LABIRENTIN SATIR VE SUTUN SAYISINI BELİRLEYEBİLİRSİNİZ
using namespace std;

int main()
{
    const char GIRIS = 'I';
    const char CIKIS = 'O';
    const char DUVAR = '#';
    const char YOL = ' ';
    const char KESIF = 'e';



    // labirentin içeriğini giriniz...

    char labirent[SATIR][SUTUN] = {
        "######I###########################################",
        "#                          #######################",
        "######## #########################################",
        "######## #########################################",
        "#                                                #",
        "######################################### ###### #",
        "######     #####  ####  ######      #####  ####  #",
        "######  ########  ####  ######  ##  #####  ####  #",
        "######     #####  ####  ######    #######  ####  #",
        "#########  #####  ####  ######  ##  #####  ####  #",
        "######     #####        ######      #####        #",
        "############################################### ##",
        "########## #### ######## ########## ########### ##",
        "#      ### #### ##    ## ##########     ###     ##",
        "###### ### #### ## ## ## ########## ###  ## ######",
        "###### ### #### ##### ## ########## ####    ######",
        "###### ###  ###       ## ###        ##############",
        "###### #### ################ #####################",
        "######                       #####################",
        "#########O########################################",

    };
    //lÜTFEN HARİTAYI GİRERKEN SATIN VE SÜTUN SAYILARINI 1 EKSİK GİRİNİZ.
    //ÇÜNKÜ İNDEX DEĞERLERİ 0'DAN BAŞLAR.
    // ORNEĞİN BENİM HARİTAMDA SATIR SAYIM 9 FAKAT BEN DİZİME 8 ADET SATIR(#) GİRDİM.

    
    
  


    Position labirentGiris;
    labirentGiris.x = 0; // labirentin başlangıç kordinatlarını girin
    labirentGiris.y = 6;

    // Make two copies of the original map
    // Used to display the path
    char labirentKopya[SATIR][SUTUN];   // Used to calculate the path
    char labirentGoruntule[SATIR][SUTUN];
    
    for (int i = 0; i < SATIR; i++)
    {
        for (int j = 0; j < SUTUN; j++)
        {
            labirentGoruntule[i][j] = labirent[i][j];
            labirentKopya[i][j] = labirent[i][j];
        }

    }
    
    
    

    Stack path(SATIR*SUTUN);

    Position suankiPozisyon;

    suankiPozisyon = labirentGiris;

    while (true)
    {   
        if (labirentKopya[suankiPozisyon.x][suankiPozisyon.y] == CIKIS) break;

        // Get the labirent element at each direction of the current position
        char pozisyonYukari = labirentKopya[suankiPozisyon.x - 1][suankiPozisyon.y];
        char pozisyonSaga = labirentKopya[suankiPozisyon.x][suankiPozisyon.y + 1];
        char pozisyonAsagi = labirentKopya[suankiPozisyon.x + 1][suankiPozisyon.y];
        char pozisyonSola = labirentKopya[suankiPozisyon.x][suankiPozisyon.y - 1];

        // Mark this position as KESIF, then go up one position
        if (( pozisyonYukari == YOL || pozisyonYukari == CIKIS ) && suankiPozisyon.x - 1 >= 0)
        {
            path.Push(suankiPozisyon);
            labirentKopya[suankiPozisyon.x][suankiPozisyon.y] = KESIF;
            suankiPozisyon.x--;
        }

        // Mark this position as KESIF, then go right one position
        else if (( pozisyonSaga == YOL || pozisyonSaga == CIKIS) && suankiPozisyon.y + 1 < SUTUN)
        {
            path.Push(suankiPozisyon);
            labirentKopya[suankiPozisyon.x][suankiPozisyon.y] = KESIF;
            suankiPozisyon.y++;
        }

        // Mark this position as KESIF, then go down one position
        else if ((pozisyonAsagi == YOL || pozisyonAsagi == CIKIS) && suankiPozisyon.x + 1 < SATIR)
        {
            path.Push(suankiPozisyon);
            labirentKopya[suankiPozisyon.x][suankiPozisyon.y] = KESIF;
            suankiPozisyon.x++;
        }

        // Mark this position as KESIF, then go left one position
        else if ((pozisyonSola == YOL || pozisyonSola == CIKIS) && suankiPozisyon.y >= 0)
        {
            path.Push(suankiPozisyon);
            labirentKopya[suankiPozisyon.x][suankiPozisyon.y] = KESIF;
            suankiPozisyon.y--;
        }

        // Mark this position as a DUVAR, then go back one position
        else
        {
            labirentKopya[suankiPozisyon.x][suankiPozisyon.y] = DUVAR;
            suankiPozisyon = path.Pop();
        }
    }
    
    int sonBoyut = path.GetLength();

    Position *sagPath = new Position[SATIR*SUTUN];

    for (int i = sonBoyut - 1; i >= 0; i--)
    {
        sagPath[i] = path.Pop();
    }



    // Output the Animation of Walking the path

    for (int i = 0; i < sonBoyut; i++)
    {
        cout << "Labirent" << endl;
        cout << endl;
        Position geciciPozisyon = sagPath[i];
        labirentGoruntule[geciciPozisyon.x][geciciPozisyon.y] = '*';

        for (int a = 0; a < SATIR; a++)
        {
            for (int b = 0; b < SUTUN; b++)
            {
                cout << labirentGoruntule[a][b];
            }
            cout << endl;
        }

        Sleep(200);
        system("cls");
        labirentGoruntule[geciciPozisyon.x][geciciPozisyon.y] = ' ';
    }



    cout << "Orijinal Harita: " << endl;
    for (int a = 0; a < SATIR; a++)
    {
        for (int b = 0; b < SUTUN; b++)
        {
            cout << labirent[a][b];
        }
        cout << endl;
    }

    cout << "CIKISA GELINDI!!" << endl; 



    system("pause");
    return 0;
}
#endif