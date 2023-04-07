#include <iostream>
#include <string>
#include <iomanip>

// Create the finalExamNameSpace namespace and declare the
// candidatesLastName and votes arrays within it
namespace finalExamNameSpace {
    std::string candidatesLastName[3];
    int votes[3];
}

// Use the finalExamNameSpace namespace
using namespace finalExamNameSpace;

int main()
{
    // Ask the user to enter the last name of the candidate and the number of votes
    // they received for each of the three candidates
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the last name of candidate " << i+1 << ": ";
        std::cin >> candidatesLastName[i];

        std::cout << "Enter the number of votes received by candidate " << i+1 << ": ";
        std::cin >> votes[i];
    }

    // Calculate the total number of votes received
    int totalVotes = 0;
    for (int i = 0; i < 3; i++) {
        totalVotes += votes[i];
    }

    // Print the results for each candidate
    std::cout << "\nElection Results:" << std::endl;
    for (int i = 0; i < 3; i++) {
        // Calculate the percentage of votes received by each candidate
        double percentVotes = (double)votes[i] / totalVotes * 100;

        // Output the candidate's last name, number of votes received, and percentage of total votes
        std::cout << candidatesLastName[i] << ": " << votes[i] << " votes ("
                  << std::setprecision(2) << std::fixed << percentVotes << "% of total votes)" << std::endl;
    }

    return 0;
}
