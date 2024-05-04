#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

using namespace std;

///Declaring a method function
class validation
{
    public:
        bool valid_mark(float exam_mark);
        bool valid_level(string exam_level);

    private:
        float dm_mark;
        string dm_level;
};


/// Creating the activity to be performed by the method fuction
bool validation::valid_mark(float exam_mark)
{
    dm_mark = exam_mark;

    if(dm_mark < 0 || dm_mark > 100)
    {
        cout << "| ";
        cout << dm_mark << " is NOT a valid mark";
        return false;
    }
    else
    {
        cout << "| " << dm_mark;
        return true;
    }
};


/// Creating the activity to be performed by the method fuction
bool validation::valid_level(string exam_level)
{
    dm_level = exam_level;

    if(dm_level == "H" || dm_level == "O")
    {
        cout << "| " << dm_level;
        return true;
    }
    else
    {
        cout << "| ";
        cout << dm_level << " is NOT a valid level";
        return false;
    }
};




/// Declaring a method function
class exam
{
    public:
        void print_report_head1();
        void print_report_head2();

        string get_grade(string level, float mark);
        int get_CAO_points(string grade);

    private:
        string dm_sub_name[6] ={"IRISH", "ENGLISH", "MATHS", "FRENCH", "PHYSICS", "ECONOMICS"};
        string dm_level = "#";
        string dm_grade = "#";
        float dm_mark;
        int dm_cao_points;
};


/// Prints the headings in a column format
void exam::print_report_head1()
{
    cout << "|";
    cout << setw(50) << "Leaving Cert' Marks(%)" << setw(31) << "|" << endl;
    cout << "|";
    cout << setw(40) << "2023" << setw(41) << "|" << endl;
    cout << " ________________________________________________________________________________ " << endl;
    cout << "|" << setw(15) << " |";

    for(int c = 0; c < 6; c++)
    {
         cout << left << setw(7) << dm_sub_name[c] << " |";
    }
    cout << setw(8) << "Average" << " |" << endl;
};


/// Prints the second headings in a column format
void exam::print_report_head2()
{
    cout << "|";
    cout << right << setw(50) << "Leaving Cert' Levels" << setw(31) << "|" << endl;
    cout << "|";
    cout << right << setw(40)<< "2023" << setw(41) << "|" << endl;
    cout << " ________________________________________________________________________________ " << endl;
    cout << "|" << setw(15)<< " |";

    for(int c = 0; c < 6; c++)
      {
           cout << left << setw(7) << dm_sub_name[c] << " |";
      }

    cout << setw(8) << "CAO PTS" << " |"<< endl;
};


/// Checks the marks and assigns the value
string exam::get_grade(string level, float mark)
{
    dm_mark = mark;
    dm_level = level;

    if((dm_mark >=90 && dm_mark<= 100) && (dm_level == "H"))
        {
            dm_grade = "H1";
        }
    if((dm_mark >=90 && dm_mark<= 100) && (dm_level == "O"))
        {
            dm_grade = "01";
        }
    if ((dm_mark >= 80 && dm_mark <90) && (dm_level == "H"))
        {
            dm_grade = "H2";
        }
    if ((dm_mark >= 80 && dm_mark <90) && (dm_level == "O"))
        {
            dm_grade = "02";
        }
    if ((dm_mark >= 70 && dm_mark <80 && (dm_level == "H")))
        {
            dm_grade = "H3";
        }
    if ((dm_mark >= 70 && dm_mark <80 && (dm_level == "O")))
        {
            dm_grade = "03";
        }
    if ((dm_mark >= 60 && dm_mark<70) && (dm_level == "H"))
        {
            dm_grade = "H4";
        }
    if ((dm_mark >= 60 && dm_mark<70) && (dm_level == "O"))
        {
            dm_grade = "04";
        }
    if ((dm_mark >= 50 && dm_mark<60) && (dm_level == "H"))
        {
            dm_grade = "H5";
        }
    if ((dm_mark >= 50 && dm_mark<60) && (dm_level == "O"))
        {
            dm_grade = "05";
        }
    if ((dm_mark >= 40 && dm_mark < 50) && (dm_level == "H"))
        {
            dm_grade = "H6";
        }
    if ((dm_mark >= 40 && dm_mark < 50) && (dm_level == "O"))
        {
            dm_grade = "06";
        }
    if ((dm_mark >= 30 && dm_mark <40) && (dm_level == "H"))
        {
            dm_grade = "H7";
        }
    if ((dm_mark >= 30 && dm_mark <40) && (dm_level == "O"))
        {
            dm_grade = "07";
        }
    if ((dm_mark >= 0 && dm_mark < 30) && (dm_level == "H"))
        {
            dm_grade = "H8";
        }
    if ((dm_mark >= 0 && dm_mark < 30) && (dm_level == "O"))
        {
            dm_grade = "08";
        }
   return dm_grade;
};


/// Checks the marks for second column and assigns the value
int exam::get_CAO_points(string grade)
{
    dm_grade = grade;

    if (grade == "H1")
    {
        dm_cao_points = 100;
    }
    else if (grade == "01")
    {
        dm_cao_points = 56;
    }
    else if (grade == "H2")
    {
        dm_cao_points = 88;
    }
    else if (grade == "02")
    {
        dm_cao_points = 46;
    }
    else if (grade == "H3")
    {
        dm_cao_points = 77;
    }
    else if (grade == "03")
    {
        dm_cao_points = 37;
    }
    else if (grade == "H4")
    {
        dm_cao_points = 66;
    }
    else if (grade == "04")
    {
        dm_cao_points = 28;
    }
    else if (grade == "H5")
    {
        dm_cao_points = 56;
    }
    else if (grade == "05")
    {
        dm_cao_points = 20;
    }
    else if (grade == "H6")
    {
        dm_cao_points = 46;
    }
    else if (grade == "06")
    {
        dm_cao_points = 12;
    }
    else if (grade == "H7")
    {
        dm_cao_points = 37;
    }
    else if (grade == "07")
    {
        dm_cao_points = 0;
    }
    else if (grade == "H8")
    {
        dm_cao_points = 0;
    }
    else if (grade == "08")
    {
        dm_cao_points = 0;
    }

    return dm_cao_points;
}



///Grading data for students
string level[6][6] = {"H", "H", "H", "H", "H", "H",
                     "H", "O", "H", "H", "H", "H",
                     "H", "H", "O", "H", "H", "O",
                     "H", "H", "O", "H", "O", "H",
                     "H", "O", "H", "H", "H", "H",
                     "H", "H", "O", "H", "H", "O"};

///Student marks data
int data[6][6] = {50, 50, 50, 50, 50, 50,
                 60, 80, 75, 50, 60, 75,
                 80, 55, 65, 59, 70, 70,
                 60, 68, 75, 50, 60, 55,
                 60, 70, 70, 67, 70, 70,
                 90, 90, 90, 90, 90,90};


/// Student names data
string student_name[6] = {"Keira Walsh","Beth Mead","Ruben Dias","Mo Salah","Bill Gates","Rosa Parks"};
string grade[6][6];

///Exam class viriable declaration
string best_student;
float high_average_mark = 0.0;
float average[6];
float student_average = 0.0;
int CAO_points[6][6];
int student_CAO_total;

///Validation class viriable declaration
string exam_level = level[0][0]; ///[0] will start from the first element
float exam_mark = data[0][0]; ///[0] will start from the first element

int main()
{
    ///Setting the font color to be printed
    system("COLOR 74");

    ///Calling the function
    class validation user1;

    ///Validation for marks
    cout << " ___________________________________________________________" << endl;
    cout << "|               Test Mark Validity                          |" << endl;
    cout << " ___________________________________________________________" << endl;
    cout << "|" << setw(60) << "|" << endl;

    ///the loop checks marks for each student
    for(int i = 0; i < 6; ++i)
    {
        ///the loop checks marks for each subject
        for(int j = 0; j < 6; ++j)
        {
            cout << "| Key in a mark? " << i + 1 << " : ";
                cin >> exam_mark;

                ///it validates each entry
               if(!user1.valid_mark(exam_mark))
                {
                   cout << "Try again! " << --j;
                        cin >> exam_mark;
                }

                ///Message for a valid mark
                cout << "                    Valid Mark                          |" << endl << endl;
        }
    }

    cout << "|" << setw(60) << "|" << endl;
    cout << " ___________________________________________________________" << endl;
    cout << endl << endl;

    /// Validation for levels
    cout << " ___________________________________________________________" << endl;
    cout << "|                    Test Level Validity                    |" << endl;
    cout << " ___________________________________________________________" << endl;
    cout << "|" << setw(60) << "|" << endl;

    ///the loop checks level for each student
    for (int i = 0; i < 6; ++i)
    {
         ///the loop checks level for each subject
        for(int j = 0; j < 6; ++j)
        {
            cout << "| Key in a level O or H ? " << i + 1 << " : ";
                cin >> exam_level;

                ///it validates each entry
                if(!user1.valid_level(exam_level))
                {
                    cout << "Try again! " << --j;
                        cin >> exam_level;
                }

                /// Message for valid level
                cout << "                  Valid Level                          |" << endl << endl;
        }
    }
    cout << "|" << setw(60) << "|" << endl;
    cout << " ___________________________________________________________" << endl;
    cout << endl << endl;
    cout << endl << endl;

    system("PAUSE");




    ///Calling the exam function to displaying the reports table
    cout << " ________________________________________________________________________________ " << endl;
    class exam student[6];
    class exam report;
    class exam get_grade;
    report.print_report_head1();
    cout << " ________________________________________________________________________________ " << endl;
        for(int i = 0; i < 6; i++)
        {
            student_average = 0.0;
            cout << "| ";
            cout << setw(18)<< student_name[i];

            for(int j = 0; j < 6; j++)
                {
                    cout << setw(9) << data[i][j];

                    ///Calculate the accumulated student average
                    student_average += data[i][j];

                    average[j] += data[i][j];
                }

            student_average = student_average / 6;  /// Calculate average for the current student
            cout << setw(6) << fixed << std::setprecision(2) << student_average << " |" << endl; ///ending space on each row
        }

        ///set the last row with subject average
        cout << "| " << setw(16) << "Average";
        for(int i = 0; i < 6; i++)
        {
            cout << fixed << setw(9) << average[i] / 6;

            ///calculating the average mark and best student
            if (student_average > high_average_mark)
            {
                high_average_mark = student_average;
                best_student = student_name[i];
            }

            int sum = 0;

            for (int i = 0; i < 6; ++i)
            {
                sum += average[i];
            }

            ///Calculating the average for each student
            float high_average_mark = static_cast <float>(sum) / 6.0;
        }
        cout << setw(8) << "" << " |" << endl;

        cout << " ________________________________________________________________________________ " << endl;
        cout << "|" << "Best Student : " << setw(15) << best_student;
        cout << "  Highest Average Student Mark : " << setw(17) << student_average << "|" << endl;

        cout << setw(65);
        cout << "|" << "End of Report 1" << " |" << endl;
        cout << " ________________________________________________________________________________ " << endl;
        cout << endl << endl;


        system("PAUSE");


        ///Calling the exam function to displaying the second report table
        cout << " ________________________________________________________________________________ " << endl;
        report.print_report_head2();
        cout << " ________________________________________________________________________________ " << endl;

        for(int i = 0; i < 6; i++)
            {
                student_CAO_total = 0; /// Reset the total for each student
                cout << "| ";
                cout << setw(18) << student_name[i];

                for(int j = 0; j < 6; j++)
                    {

                        cout << setw(7) << level[i][j];

                        /// Calculate CAO points for the current subject and add to student_CAO_total and put in invisible placeholder
                        grade[i][j] = student[i].get_grade(level[i][j], data[i][j]);
                        cout << " ";
                        student_CAO_total += student[i].get_CAO_points(grade[i][j]);
                        cout << " ";
                    }

            /// Print the total CAO points for the current student in the last column
            cout << setw(7) << fixed << student_CAO_total << "|" << endl;

            /// Store the CAO points total for the current student in the CAO_points array
            CAO_points[i][5] = student_CAO_total;
        }

    cout << " ________________________________________________________________________________ " << endl;
    cout << setw(65);
    cout << "|" << "End of Report 2" << " |" << endl;
    cout << " ________________________________________________________________________________ " << endl;
    cout << endl << endl;

 return 0;
}
