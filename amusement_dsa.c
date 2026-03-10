#include <stdio.h>

// Structure to represent a ride
struct Ride {
    char name[50];
    int capacity;
    float duration;
};

void displayRide(struct Ride ride) {
    printf("Ride Name: %s\n", ride.name);
    printf("Capacity: %d passengers\n", ride.capacity);
    printf("Duration: %.2f minutes\n", ride.duration);
}

int main() {
    struct Ride rollerCoaster;
    // Initialize ride details
    snprintf(rollerCoaster.name, sizeof(rollerCoaster.name), "Thunder Bolt");
    rollerCoaster.capacity = 24;
    rollerCoaster.duration = 3.5;

    // Display ride information
    displayRide(rollerCoaster);

    return 0;
}