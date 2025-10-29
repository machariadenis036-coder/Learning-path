/*
Name:Denis Macharia
Reg:CT100/G/26250/25
calculations
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0;

    // Seed the random number generator
    srand(time(0));

    // Assign random occupancy (0 = vacant, 1 = occupied)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display results
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}
