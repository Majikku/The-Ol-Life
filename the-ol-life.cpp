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

// Global variables
int iteration = 0; 


// The total sum of adjacent cells
// Takes:
// X(Position), Y(Position), Z(Iteration)
// Returns int sum

int neibourSum(int x, int y, int z){
    // Add the sum in layers
    // 
    // Add to sum, then move one to the right
    // ^ Repeat three times
    // Once one layer is done, move one down
    // ^ Repeat three times
    // Once completed, remove middle cell from sum
    // Return sum

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


// Update to next iteration
// Doesn't return anything

void golupdate(int sizex, int sizey){
    // Game of life rules:
    // Growth: A dead cell with 3 alive neighbours becomes alive.
    // Loneliness: A cell with 1 or less alive neighbours dies.
    // Overcrowding: A cell with 4 or more alive neighbours dies.
    // Stability: A cell with 2 or 3 neighboours remains the same. 

    int a,b;
    for(a=0; a <=sizey; a++){
        for(b=0; b <= sizex; b++){
            int sum = neibourSum(a,b,iteration);
            if(sum = 3){ golarr[a][b][iteration] = 1; }
            else if(sum > 3 || sum < 2){ golarr[a][b][iteration]; };
        }
    }

};


int main(){
    golupdate(5, 5);
    return 0;
};