#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A1, B1, C1, D1, A2, B2, C2, D2, A3, B3, C3, D3;
    int D[3][3] = {{A1, B1, C1}, {A2, B2, C2}, {A3, B3, C3}};
    int Dx[3][3] = {{D1, B1, C1}, {D2, B2, C2}, {D3, B3, C3}};
    int Dy[3][3] = {{A1, D1, C1}, {A2, D2, C2}, {A3, D3, C3}};
    int Dz[3][3] = {{A1, B1, D1}, {A2, B2, D2}, {A3, B3, D3}};
    float DetX, DetY, DetZ, Det, x, y, z;

    printf("Vnesi gi vrednostite za A, B, C i D na prvata ravenka (Ax+By+Cz=D): \n");
    scanf("%d %d %d %d", &A1, &B1, &C1, &D1);
    printf("Vnesi gi vrednostite za A, B, C i D na vtorata ravenka (Ax+By+Cz=D): \n");
    scanf("%d %d %d %d", &A2, &B2, &C2, &D2);
    printf("Vnesi gi vrednostite za A, B, C i D na tretata ravenka (Ax+By+Cz=D): \n");
    scanf("%d %d %d %d", &A3, &B3, &C3, &D3);

    //Det = D[0][0] * ((D[1][1]*D[2][2])-(D[2][1]*D[1][2])) - D[0][1] * ((D[1][0]*D[2][2])-(D[2][0]*D[1][2])) + D[0][2] * ((D[1][0]*D[2][1])-(D[2][0]*D[1][1]));
    DetX = Dx[0][0] * ((Dx[1][1]*Dx[2][2]) - (Dx[1][2]*[2][1])) - Dx[1][0] * ((Dx[0][1]*Dx[2][2]) - (Dx[0][2]*Dx[2][1])) + Dx[2][0] * ((Dx[0][1]*Dx[1][2]) - (Dx[[0][2]*Dx[1][1]));
    DetY = Dy[0][0] * (Dy[1][1]*Dy[2][2] - Dy[1][2]*[2][1]) - Dy[1][0] * (Dy[0][1]*Dy[2][2] - Dy[0][2]*Dy[2][1]) + Dy[2][0] * (Dy[0][1]*Dy[1][2] - Dy[[0][2]*Dy[1][1]);
    DetZ = Dz[0][0] * (Dz[1][1]*Dz[2][2] - Dz[1][2]*[2][1]) - Dz[1][0] * (Dz[0][1]*Dz[2][2] - Dz[0][2]*Dz[2][1]) + Dz[2][0] * (Dz[0][1]*Dz[1][2] - Dz[[0][2]*Dz[1][1]);
    Det = D[0][0] * (D[1][1]*D[2][2] - D[1][2]*[2][1]) - D[1][0] * (D[0][1]*D[2][2] - D[0][2]*D[2][1]) + D[2][0] * (D[0][1]*D[1][2] - D[[0][2]*D[1][1]);

    x = DetX/Det;
    y = DetY/Det;
    z = DetZ/Det;

    printf("x = %.2f \ny = %.2f \nz = %.2f", x, y, z);


}
