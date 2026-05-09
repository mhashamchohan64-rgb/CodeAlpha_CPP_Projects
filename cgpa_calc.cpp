#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double totalCredits = 0, totalPoints = 0;

    for (int i = 0; i < numCourses; i++) {
        double grade, credits;
        cout << "\nCourse " << i + 1 << " Grade (e.g., 4.0): ";
        cin >> grade;
        cout << "Course " << i + 1 << " Credit Hours: ";
        cin >> credits;

        totalPoints += (grade * credits);
        totalCredits += credits;
    }

    if (totalCredits > 0) {
        double cgpa = totalPoints / totalCredits;
        cout << "\n--- Final Result ---" << endl;
        cout << "Total Credits: " << totalCredits << endl;
        cout << fixed << setprecision(2) << "Final CGPA: " << cgpa << endl;
    }

    return 0;
}