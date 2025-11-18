
#include <stdio.h>
#include <string.h>

struct Flight {
    char flight_number[10];
    char departure_city[50];
    char destination_city[50];
    char date[15];
    int available_seats;
};

// Global variables
struct Flight flights[5];
int flight_count = 0;

void bookSeat(struct Flight* flight) {
    if (flight->available_seats > 0) {
        flight->available_seats--;
        printf("Seat booked successfully. Remaining seats: %d\n", flight->available_seats);
    } else {
        printf("No available seats to book.\n");
    }
}

void displayDetails(struct Flight flight) {
    printf("Flight Number: %s\n", flight.flight_number);
    printf("Departure City: %s\n", flight.departure_city);
    printf("Destination City: %s\n", flight.destination_city);
    printf("Date: %s\n", flight.date);
    printf("Available Seats: %d\n", flight.available_seats);
}

void addFlight() {
    printf("Enter flight number: ");
    scanf("%s", flights[flight_count].flight_number);
    getchar();

    printf("Enter departure city: ");
    fgets(flights[flight_count].departure_city, sizeof(flights[flight_count].departure_city), stdin);
    flights[flight_count].departure_city[strcspn(flights[flight_count].departure_city, "\n")] = '\0';

    printf("Enter destination city: ");
    fgets(flights[flight_count].destination_city, sizeof(flights[flight_count].destination_city), stdin);
    flights[flight_count].destination_city[strcspn(flights[flight_count].destination_city, "\n")] = '\0';

    printf("Enter date (DD-MM-YYYY): ");
    fgets(flights[flight_count].date, sizeof(flights[flight_count].date), stdin);
    flights[flight_count].date[strcspn(flights[flight_count].date, "\n")] = '\0';

    printf("Enter available seats: ");
    scanf("%d", &flights[flight_count].available_seats);
    getchar();
    flight_count++;
}

int main(){
    int choice, flight_index;
    while (1) {
        printf("\nFlight Management System Menu:\n");
        printf("1. Add Flight\n");
        printf("2. Book a Seat\n");
        printf("3. Show All Flights\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (flight_count < 5) {
                    addFlight();
                } else {
                    printf("Flight list is full. Cannot add more flights.\n");
                }
                break;
            case 2:
                printf("Enter flight index to book a seat (0 to %d): ", flight_count - 1);
                scanf("%d", &flight_index);
                getchar(); // Clear newline from buffer
                if (flight_index >= 0 && flight_index < flight_count) {
                    bookSeat(&flights[flight_index]);
                } else {
                    printf("Invalid flight index.\n");
                }
                break;
            case 3:
                for (int i = 0; i < flight_count; i++) {
                    printf("\nFlight %d Details:\n", i);
                    displayDetails(flights[i]);
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}