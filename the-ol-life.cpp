#include <iostream>

int arr[5][5] {
    {0,1,0,1,0},
    {0,1,0,1,0},
    {0,1,0,1,0},
    {0,1,0,1,0},
    {0,1,0,1,0}
};

int arrV2[5][5] {};

int neiboursum(int i, int j){ 
    int a,b;
    int sum = 0;
    for(a = -1; a <= 1; a++){
        for(b = -1; b <= 1; b++){
            //std::cout << a << " : " << b << " :: " << arr[i+a][j+b] << "\n";
            sum += arr[i+a][j+b];
        };
        b = -1;
    };
    return sum;
};

void golupdate(){
    int a,b;
    for(a = 0; a <= 5; a++){
        for(b = 0; b <= 5; b++){
            int sum = neiboursum(a,b);
            if(sum = 3) { arrV2[a][b] = 1; } else if(sum > 4 || sum < 3) { arrV2[a][b] = 0; };
        }
    }
};

int main(){
    golupdate();
    return 0;
};