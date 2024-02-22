#include <stdio.h>

int validateInput(char answer) {
    return (answer == 'y' || answer == 'n' || answer == 'Y' || answer == 'N');
}

int main() {
    char answer;

    printf("\n Welcome to the recommendation generator! (created by @pruthvi07u)\n");
    printf("\n The generator will recommend you suggestions for anime, movies, and books based on your answers.\n");
    printf("\n The generator will ask you a few questions, and you can answer with (y = yes, n = no).\n");
    printf("\n Are you ready to answer the questions? (y/n): ");
    scanf(" %c", &answer);

    if (!validateInput(answer)) {
        printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
        return 1;
    }

    if (answer == 'y' || answer == 'Y') {
        printf("\n Do you like action anime? (y/n): ");
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y') {
            printf("\n Here are the following action anime recommendations:\n");
            printf("\n * Attack on Titan\n");
            printf("\n * Jujustu Kaisen\n");
			printf("\n * One Punch Man\n");
            printf("\n--------------------------------------------\n");
        } 
        else if (answer == 'n' || answer == 'N') {
            
            printf("\n Do you like comedy anime? (y/n): ");
            scanf(" %c", &answer);

            if (answer == 'y' || answer == 'Y') {
                printf("\n Here are the following comedy anime recommendations:\n");
                printf("\n * Konosuba: God's Blessing on This Wonderful World!\n");
                printf("\n * Gintama\n");
                
                printf("\n--------------------------------------------\n");
            } 
            else if (answer == 'n' || answer == 'N') {	
                printf("\n Do you like mecha anime? (y/n): ");
                scanf(" %c", &answer);

                if (answer == 'y' || answer == 'Y') {
                    printf("\n Here are the following mecha anime recommendations:\n");
                    printf("\n * Mobile Suit Gundam\n");
                    printf("\n * Code Geass\n");
                    printf("\n--------------------------------------------\n");
                } 
                else if (answer == 'n' || answer == 'N') {
                    printf("\n Do you like horror anime or manga? (y/n): ");
                    scanf(" %c", &answer);

                    if (answer == 'y' || answer == 'Y') {
                        printf("\n Here are the following horror anime and manga recommendations:\n");
                        printf("\n * Another\n");
                        printf("\n * Tokyo Ghoul\n");
                        printf("\n--------------------------------------------\n");
                    } 
                    else if (answer == 'n' || answer == 'N') {
                        // Provide generic anime recommendations
                        printf("\n Sorry, we couldn't determine your preference.\n");
                        // Add more generic anime recommendations here
                        printf("\n--------------------------------------------\n");
                    } 
                    else {
                        printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
                        return 1; // Exit the program with error
                    }
                } 
                else {
                    printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
                    return 1; // Exit the program with error
                }
            } 
            else {
                printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
                return 1; // Exit the program with error
            }
        } 
        else {
            printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
            return 1; // Exit the program with error
        }

        // Movie Recommendations

        // Action Movies
        printf("\n Do you like action movies? (y/n): ");
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y') {
            printf("\n Here are the following action movie recommendations:\n");
            printf("\n * The Dark Knight\n");
            printf("\n * Mad Max: Fury Road\n");
            // Add more action movie recommendations here
            printf("\n--------------------------------------------\n");
        } 
        else if (answer == 'n' || answer == 'N') {
            // Comedy Movies
            printf("\n Do you like comedy movies? (y/n): ");
            scanf(" %c", &answer);

            if (answer == 'y' || answer == 'Y') {
                printf("\n Here are the following comedy/romantic movie recommendations:\n");
                printf("\n * Superbad\n");
                printf("\n * The Hangover\n");
                printf("\n * The proposal\n");
                printf("\n * La La Land\n");
                // Add more comedy movie recommendations here
                printf("\n--------------------------------------------\n");
            } 
            else if (answer == 'n' || answer == 'N') {
                // Sci-Fi/Fantasy Movies
                printf("\n Do you like Sci-Fi or Fantasy movies? (y/n): ");
                scanf(" %c", &answer);

                if (answer == 'y' || answer == 'Y') {
                    printf("\n Here are the following Sci-Fi/Fantasy movie recommendations:\n");
                    printf("\n * Star Wars series\n");
                    printf("\n * The Lord of the Rings\n");
                    printf("\n * Harry Potter series\n");
					// Add more Sci-Fi/Fantasy movie recommendations here
                    printf("\n--------------------------------------------\n");
                } 
                else if (answer == 'n' || answer == 'N') {
                    // Provide generic movie recommendations
                    printf("\n Sorry, we couldn't determine your preference.\n");
                    // Add more generic movie recommendations here
                    printf("\n--------------------------------------------\n");
                } 
                else {
                    printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
                    return 1; // Exit the program with error
                }
            } 
            else {
                printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
                return 1; // Exit the program with error
            }
        } 
        else {
            printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
            return 1; // Exit the program with error
        }

        // Book Recommendations

        // Mystery/Thriller Books
        printf("\n Do you like mystery/thriller books? (y/n): ");
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y') {
            printf("\n Here are the following mystery/thriller book recommendations:\n");
            printf("\n * The Girl with the Dragon Tattoo by Stieg Larsson\n");
			printf("\n * Gone Girl by Gillian Flynn\n");
// Add more mystery/thriller book recommendations here
		printf("\n--------------------------------------------\n");
	}
	else if (answer == 'n' || answer == 'N') {
// Fantasy Books
printf("\n Do you prefer fantasy books? (y/n): ");
scanf(" %c", &answer);


               if (answer == 'y' || answer == 'Y') {
            printf("\n Here are the following fantasy book recommendations:\n");
            printf("\n * Harry Potter series by J.K. Rowling\n");
            printf("\n * The Name of the Wind by Patrick Rothfuss\n");
            // Add more fantasy book recommendations here
            printf("\n--------------------------------------------\n");
        } 
        else if (answer == 'n' || answer == 'N') {
            // Provide generic book recommendations
            printf("\n Sorry, we couldn't determine your preference.\n");
            // Add more generic book recommendations here
            printf("\n--------------------------------------------\n");
        } 
        else {
            printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
            return 1; // Exit the program with error
        }
    } 
    else {
        printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
        return 1; // Exit the program with error
    }

} 
else if (answer == 'n' || answer == 'N') {
    printf("\n Okay, feel free to return whenever you're ready. Have a great day!\n");
} 
else {
    printf("\n Invalid input. Please enter either 'y' or 'n'.\n");
    return 1; // Exit the program with error
}

printf("\n");     

return 0; 
}
