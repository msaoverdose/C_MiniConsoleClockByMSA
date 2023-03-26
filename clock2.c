#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

///made by https://github.com/dmsa2003
///Discord msa#2855
void printClock(int matrix[7][39]) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 39; j++) {
            if (matrix[i][j] == 1) {
                printf("⬜");
            }
            else{
                printf("⬛");
            }

        }
        printf("\n");
    }
    printf("\n");

}
void birlerfonk(int matrix[7][39],int birler){


    switch (birler) {
        case 1:
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            break;

        case 2:
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][30]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[6][i]=1;
            }

            break;
        case 3:
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 30; i <39; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 4:
            for (int i = 0; i < 4; ++i) {
                matrix[i][31]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 31; i < 39; ++i) {
                matrix[3][i]=1;
            }
            break;
        case 5:
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][30]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 6:
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][30]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[6][i]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][38]=1;
            }
            break;
        case 7:
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            break;
        case 8:
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][30]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 9:
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][30]=1;
            }

            for (int i = 30; i < 39; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 0:
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][30]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][38]=1;
            }
            for (int i = 30; i < 39; ++i) {
                matrix[6][i]=1;
            }
            break;

    }






}

void onlarfonk(int matrix[7][39],int onlar){


    switch (onlar) {
        case 1:
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            break;

        case 2:
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][20]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[6][i]=1;
            }

            break;
        case 3:
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 20; i <29; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 4:
            for (int i = 0; i < 4; ++i) {
                matrix[i][21]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 21; i < 29; ++i) {
                matrix[3][i]=1;
            }
            break;
        case 5:
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][20]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 6:
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][20]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[6][i]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][28]=1;
            }
            break;
        case 7:
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            break;
        case 8:
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][20]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 9:
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][20]=1;
            }

            for (int i = 20; i < 29; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 0:
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][20]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][28]=1;
            }
            for (int i = 20; i < 29; ++i) {
                matrix[6][i]=1;
            }
            break;



    }




}

void yuzlerfonk(int matrix[7][39],int yuzler){




    switch (yuzler) {
        case 1:
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            break;

        case 2:
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][10]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }

            break;
        case 3:
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 4:
            for (int i = 0; i < 4; ++i) {
                matrix[i][10]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            break;
        case 5:
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][10]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 6:
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][10]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][18]=1;
            }
            break;
        case 7:
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            break;
        case 8:
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][10]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 9:
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][10]=1;
            }

            for (int i = 10; i < 19; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 0:
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][10]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][18]=1;
            }
            for (int i = 10; i < 19; ++i) {
                matrix[6][i]=1;
            }
            break;



    }

}

void binlerfonk(int matrix[7][39],int binler){

    switch (binler) {
        case 1:
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            break;

        case 2:
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][0]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }

            break;
        case 3:
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 4:
            for (int i = 0; i < 4; ++i) {
                matrix[i][0]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            break;
        case 5:
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][0]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 6:
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][0]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 3; i < 9; ++i) {
                matrix[i][8]=1;
            }
            break;
        case 7:
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            break;
        case 8:
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][0]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 9:
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 4; ++i) {
                matrix[i][0]=1;
            }

            for (int i = 0; i < 9; ++i) {
                matrix[3][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }
            break;
        case 0:
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[0][i]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][0]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[i][8]=1;
            }
            for (int i = 0; i < 9; ++i) {
                matrix[6][i]=1;
            }
            break;

        default:
            matrix[0][0]=0;
            break;




    }

}
void matrissifirla(int matrix[7][39]){

    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 39; ++j) {
            matrix[i][j] = 0;
        }
    }

}
int main() {
    int matrix[7][39] = {};
    matrissifirla(matrix);

    int binler, yuzler, onlar, birler;

    int binleri, yuzleri, onlari, birleri;


    while (1){
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        int saat = tm.tm_min;
        onlar = (tm.tm_min / 10);
        birler = (saat - onlar * 10);

        int saat2= tm.tm_hour;
        binler = (tm.tm_hour / 10);
        yuzler = (saat2 - binler * 10);

        birlerfonk(matrix,birler);
        onlarfonk(matrix,onlar);
        yuzlerfonk(matrix,yuzler);
        binlerfonk(matrix,binler);


        printf("Clock:\n");
        printClock(matrix);
        sleep(5);
        matrissifirla(matrix);
        system("clear");


    }
}
