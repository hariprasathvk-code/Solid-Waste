#include <iostream>
#include <string>
using namespace std;

// Function to process Organic Waste
void processOrganicWaste() {
    char isOrganic;
    cout << "Is the waste Organic? (y/n): ";
    cin >> isOrganic;

    if (isOrganic == 'y' || isOrganic == 'Y') {
        char highEnergy;
        cout << "Does it have High Energy content? (y/n): ";
        cin >> highEnergy;

        if (highEnergy == 'y' || highEnergy == 'Y') {
            cout << "→ Processed into Biofuel" << endl;
        } else {
            cout << "→ Processed into Organic Fertilizer" << endl;
        }
    } else {
        cout << "→ Not organic, sending to Reusable Waste process..." << endl;
    }
}


// Function to process Reusable Waste
void processReusableWaste() {
    char reusable;
    cout << "Is the waste reusable? (y/n): ";
    cin >> reusable;

    if (reusable == 'y' || reusable == 'Y') {
        cout << "→ Reuse for other applications" << endl;
    } else {
        cout << "→ Not reusable, sending to Recycling process..." << endl;
    }
}


// Function to process Recyclable Waste
void processRecyclableWaste() {
    char recyclable;
    cout << "Is the waste recyclable? (y/n): ";
    cin >> recyclable;

    if (recyclable == 'y' || recyclable == 'Y') {
        cout << "→ Recycled for other applications" << endl;
    } else {
        cout << "→ Sent to Landfill" << endl;
    }
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


    cout << "\n Process ended." << endl;

    return 0;
}
