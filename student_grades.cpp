# include <iostream>
# include <string>
# include <iomanip>
# include <fstream>

using namespace std;

    int main(){
        // Declaring the file I/O stream variables
        ifstream indata;
        ofstream outdata;

        // declaring the other variables
        string firstname;
        string lastname;
        double score1;
        double score2;
        double score3;
        double score4;
        double score5;
        double averageScore;

        // Opening the files
        indata.open("test.txt");
        outdata.open("testavg.txt");

        // Reading the names from the input file
        indata >> firstname >> lastname;

        // Saving the output to a file
        outdata << fixed << showpoint << setprecision(2) << endl;

        cout << "Processing data..." << endl;

        outdata << "Name: " << firstname << " " << lastname << endl;


        // Reading the test scores from the file
        indata >> score1 >> score2 >> score3 >> score4 >> score5;

        // Outputting the test scores to the file
        outdata << "Test Scores: " << setw(6) << score1 << setw(6) << score2 << setw(6) << score3
            << setw(6) << score4 << setw(6) << score5 << endl;

        // Calculating the average score
        averageScore = (score1 + score2 + score3 + score4 + score5)/5;

        // Outputing the average score to the file.
        outdata << "Average Score: " << setw(6) << averageScore;

        // Closing the I/O files
        indata.close();
        outdata.close();

        return 0;
    }