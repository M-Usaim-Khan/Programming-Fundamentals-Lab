#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 10

// Structure Definition
struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int release_year;
    float rating;
};

// Global array and counter
struct Movie movies[MAX_MOVIES];
int count = 0;

// Function Prototypes
void addMovie();
void searchByGenre();
void displayMovies();

int main() {
    int choice;

    do {
        printf("\n===== Movie Database Menu =====\n");
        printf("1. Add Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice) {
            case 1:
                addMovie();
                break;
            case 2:
                searchByGenre();
                break;
            case 3:
                displayMovies();
                break;
            case 4:
                printf("Exiting Program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to Add a Movie
void addMovie() {
    if (count >= MAX_MOVIES) {
        printf("Movie list is full! Cannot add more.\n");
        return;
    }

    printf("\nEnter movie title: ");
    fgets(movies[count].title, sizeof(movies[count].title), stdin);
    movies[count].title[strcspn(movies[count].title, "\n")] = '\0';

    printf("Enter genre: ");
    fgets(movies[count].genre, sizeof(movies[count].genre), stdin);
    movies[count].genre[strcspn(movies[count].genre, "\n")] = '\0';

    printf("Enter director name: ");
    fgets(movies[count].director, sizeof(movies[count].director), stdin);
    movies[count].director[strcspn(movies[count].director, "\n")] = '\0';

    printf("Enter release year: ");
    scanf("%d", &movies[count].release_year);

    printf("Enter rating (out of 10): ");
    scanf("%f", &movies[count].rating);
    getchar(); // Clear input buffer

    count++;
    printf("Movie added successfully!\n");
}

// Function to Search Movies by Genre
void searchByGenre() {
    char searchGenre[30];
    int found = 0;

    printf("\nEnter genre to search: ");
    fgets(searchGenre, sizeof(searchGenre), stdin);
    searchGenre[strcspn(searchGenre, "\n")] = '\0';

    printf("\n=== Movies in Genre: %s ===\n", searchGenre);
    for (int i = 0; i < count; i++) {
        if (strcasecmp(movies[i].genre, searchGenre) == 0) {
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Year: %d\n", movies[i].release_year);
            printf("Rating: %.1f/10\n\n", movies[i].rating);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found in this genre.\n");
    }
}

// Function to Display All Movies
void displayMovies() {
    if (count == 0) {
        printf("\nNo movies to display!\n");
        return;
    }

    printf("\n===== All Movies =====\n");
    for (int i = 0; i < count; i++) {
        printf("\nMovie #%d\n", i + 1);
        printf("Title       : %s\n", movies[i].title);
        printf("Genre       : %s\n", movies[i].genre);
        printf("Director    : %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].release_year);
        printf("Rating      : %.1f/10\n", movies[i].rating);
    }
}
