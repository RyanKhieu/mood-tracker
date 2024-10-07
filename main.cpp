// Name: Ryan Khieu
// Program Name: Mood Tracker
// Date 10/7/24
// Extra: Error trap for if the user enters a number that is not 1-5

#include <iostream> 
using namespace std;
int mood;

int main() {
    // Print options
    cout << "Select your mood:" << endl;
    cout << "1. Happy" << endl;
    cout << "2. Sad" << endl;
    cout << "3. Angry" << endl;
    cout << "4. Excited" << endl;
    cout << "5. Bored" << endl;
    // Error trap
    while (true) {
        cout << "Enter your choice: ";
        cin >> mood;
        if (mood >= 1 && mood <= 5) {
            break;
        }
        cout << "Invalid choice. Please try again." << endl;
    }
    // Print mood based on selection
    switch (mood) {
        case 1:
            cout << "yay you're happy :)" << endl;
            break;
        case 2:
            cout << "no you're sad :(" << endl;
            break;
        case 3:
            cout << "what made you angry?" << endl;
            break;
        case 4:
            cout << "yay you're excited :))" << endl;
            break;
        case 5:
            cout << "aw you're bored :(" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
}