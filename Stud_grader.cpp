# include <iostream>
# include <iomanip>
# include <string>
# include <fstream>

using namespace std;

    int main(){
        // Declaration of variables
        string firstname, lastname;
        double testScore, average_score, max, min, hold, sum = 0;
        char grade;
        int counter = 0;
        int i;
        int counta = 0;
        int countb = 0;
        int countc = 0;
        int countd = 0;
        int countf = 0;

        // Declaration of stream variables
        ifstream inFile;
        ofstream outFile;

        // Opening the file for reading
        inFile.open("stud.txt");

        // Checking if the file opened successfully
        if (!inFile){
            cout << "Failed to open file" << endl;
            cout << "Exiting program" << endl;
            return 1; 
        }

        // Opening the file for writing
        outFile.open("stud_results.txt");

        // Outputting the headers
        outFile << fixed << showpoint << setprecision(2);
        outFile << "STUDENTS RESULT REPORT\n" << endl;
        
        outFile << left << setw(12) << "Firstname" << left << setw(12) << "Lastname" << setw(12) << "Test Score" 
            << setw(6) << "Grade" << endl;

        // Reading the first student data from the file
        inFile >> firstname >> lastname >> testScore;

        // Initializing the maximum and minimum values
        max = 0;
        min = 101;

        // Loop to grade the students
        while (inFile){
            counter += 1;           // Updating the number of students
            sum += testScore;       // Updating the total exams score

            // Checking the result and grading the student.
            switch (static_cast<int> (testScore/10)){
                case 0:
                case 1:
                case 2:
                case 3:
                    grade = 'F';
                    countf += 1;
                    break;
                case 4:
                    grade = 'D';
                    countd += 1;
                    break;
                case 5:
                    grade = 'C';
                    countc += 1;
                    break;
                case 6:
                    grade = 'B';
                    countb += 1;
                    break;
                case 7:
                case 8:
                case 9:
                case 10:
                    grade = 'A';
                    counta += 1;
                    break;
                default:
                    outFile << "Invalid test Score" << endl;

            }

            // Calculating the maximum score attained
            if (testScore > max){
                max = testScore;
            }
            
            // Calculating the minimum score attained
            if (testScore < min){
                min = testScore;
            }

            // Outputting tudent data to a file
            outFile << left << setw(12) << firstname << left << setw(12) << lastname << right << setw(8) << testScore 
                << setw(6) << grade << endl;
         
            // Reading student data from the input file
            inFile >> firstname >> lastname >> testScore;
         }

        // Outputting the summary of the results       
        if (counter != 0){
            average_score = sum/counter;
            outFile << "\nThe total number of students = " << counter << endl;
            outFile << "The average score = " << average_score << endl;
            outFile << "The maximum score = " << max << endl;
            outFile << "The minimum score = " << min << endl;
            outFile << "\n" << counta << " students had grade A" << endl;
            outFile << countb << " students had grade B" << endl;
            outFile << countc << " students had grade C" << endl;
            outFile << countd << " students had grade D" << endl;
            outFile << countf << " students had grade F" << endl;
         }
        else
            outFile << "No Data!" << endl;

        // Closing the stream variables
        inFile.close();
        outFile.close();

        return 0;
    }