#include <iostream>

int main() {
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1, answer2, answer3, answer4;

    std::cout << "The Sorting Hat Quiz!\n";

    // Question 1
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
    std::cout << "1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n";
    std::cin >> answer1;

    switch (answer1) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Invalid input";
            return 1; // Exit with an error code
    }

    // Question 2
    std::cout << "Q2) Dawn or Dusk?\n";
    std::cout << "1) Dawn\n2) Dusk\n";
    std::cin >> answer2;

    switch (answer2) {
        case 1:
            ravenclaw++;
            gryffindor++;
            break;
        case 2:
            slytherin++;
            hufflepuff++;
            break;
        default:
            std::cout << "Invalid input";
            return 1; // Exit with an error code
    }

    // Question 3
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
    std::cout << "1) The violin\n2) The flute\n3) The piano\n4) The drum\n";
    std::cin >> answer3;

    switch (answer3) {
        case 1:
            slytherin++;
            break;
        case 2:
            hufflepuff++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            std::cout << "Invalid input";
            return 1; // Exit with an error code
    }

    // Question 4
    std::cout << "Q4) Which road tempts you most?\n";
    std::cout << "1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";
    std::cin >> answer4;

    switch (answer4) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            std::cout << "Invalid input";
            return 1; // Exit with an error code
    }

    // Display the house with the most points
    std::cout << "You belong to House: ";
    if (gryffindor >= hufflepuff && gryffindor >= ravenclaw && gryffindor >= slytherin)
        std::cout << "Gryffindor\n";
    else if (hufflepuff >= gryffindor && hufflepuff >= ravenclaw && hufflepuff >= slytherin)
        std::cout << "Hufflepuff\n";
    else if (ravenclaw >= gryffindor && ravenclaw >= hufflepuff && ravenclaw >= slytherin)
        std::cout << "Ravenclaw\n";
    else
        std::cout << "Slytherin\n";

    return 0; // Exit with success
}
