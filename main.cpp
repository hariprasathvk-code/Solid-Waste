#include <iostream>
#include <string>
using namespace std;

// Function to process Organic Waste
void processOrganicWaste() {
    
}

// Function to process Reusable Waste
void processReusableWaste() {
    
}

// Function to process Recyclable Waste
void processRecyclableWaste() {
   
}

int main() {
    int choice;
    cout << "\nSelect waste type to process:" << endl;
    cout << "1. Organic Waste" << endl;
    cout << "2. Reusable Waste" << endl;
    cout << "3. Recyclable Waste" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: processOrganicWaste(); break;
        case 2: processReusableWaste(); break;
        case 3: processRecyclableWaste(); break;
        default: cout << "Invalid choice!" << endl;
    }

    // Termination
    cout << "\nTermination complete. Process ended." << endl;

    return 0;
}
