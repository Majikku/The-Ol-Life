#include <iostream>


// Inital array 
// X(Position), Y(Position), Z(Iteration)
// A simple 5x5 array, with up to 1000 iterations

int golarr[5][5][1000]{
    {0,1,0,1,0},
    {0,1,0,1,0},
    {0,1,0,1,0},
    {0,1,0,1,0},
    {0,1,0,1,0}
};

// The total sum of adjacent cells
// Takes:
// X(Position), Y(Position), Z(Iteration)
// Returns int sum

int neibourSum(int x, int y, int z){


    int a,b;
    int sum = 0;

    for(a = -1; a <= 1; a++){
        for(b = -1; b <= 1; b++){
            sum += golarr[x+a][y+b][z];
        };

        b--;
    };

    sum =- golarr[x][y][z];

    return sum;
};

// int neiboursum(int i, int j){ 
//     int a,b;
//     int sum = 0;
//     for(a = -1; a <= 1; a++){
//         for(b = -1; b <= 1; b++){
//             std::cout << a << " : " << b << " :: " << arr[i+a][j+b] << "\n";
//             sum += arr[i+a][j+b];
//         };
//         b = -1;
//     };
//     return sum;
// };

// Update to next iteration
// Doesn't return anything

void golupdate(){

};

// void golupdate(){
//     int a,b;
//     for(a = 0; a <= 5; a++){
//         for(b = 0; b <= 5; b++){
//             int sum = neiboursum(a,b);
//             if(sum = 3) { arrV2[a][b] = 1; } else if(sum > 4 || sum < 3) { arrV2[a][b] = 0; };
//         }
//     }
// };

int main(){

    return 0;
};