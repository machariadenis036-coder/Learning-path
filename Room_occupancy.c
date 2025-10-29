/*
Name:Denis Macharia
Reg No:CT100/G/26250/25
occupancy
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    // Seed random number generator
    srand(time(0));

    // Generate random occupancy data (1 = occupied, 0 = vacant)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;  // Random 0 or 1
        }
    }

    // Display occupancy details
    printf("Room Occupancy Report (1 = Occupied, 0 = Vacant)\n\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        printf("Floor %d: ", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf(" | Occupied: %d | Vacant: %d\n", occupied, vacant);
    }
