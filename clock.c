#include <stdio.h>
#include <time.h>
///made by https://github.com/dmsa2003
void printClock(int matrix[7][39]) {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 39; j++) {
            if (matrix[i][j] == 1) {
                printf("⬜"); ///You can change this symbols
            }
            else{
                printf("⬛️");
            }

        }
        printf("\n");
    }
    printf("\n");

}
int main() {
    int matrix[7][39] = {};
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 39; ++j) {
            matrix[i][j] = 0;
        }
    }
    int binler, yuzler, onlar, birler;
    ///scanf("%d",&binler);
    ///scanf("%d",&yuzler);
    ///scanf("%d",&onlar);
    ///scanf("%d",&birler);



    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int min, hour;

    int saat = tm.tm_hour;
    binler = (tm.tm_hour / 10);
    yuzler = (saat - binler * 10);

    int saat2 = tm.tm_min;
    onlar = (tm.tm_min / 10);
    birler = (saat2 - onlar * 10);





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



    printf("Saat:\n");

    printClock(matrix);




    return 0;
}
