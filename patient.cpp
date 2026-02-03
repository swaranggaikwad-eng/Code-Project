#include <iostream>
using namespace std;

class Patient
{
private:
    float billAmount;
    string appointmentDate;

public:
    // Default constructor
    Patient()
    {
        billAmount = 0;
        appointmentDate = "Not fixed";
    }

    // Parameterized constructor
    Patient(float bill, string date)
    {
        billAmount = bill;
        appointmentDate = date;
    }

    void display()
    {
        cout << "Bill Amount = " << billAmount << endl;
        cout << "Appointment Date = " << appointmentDate << endl;
    }
};

int main()
{
    Patient p1;
    Patient p2(1500.50, "03-02-2026");

    p1.display();
    p2.display();

    return 0;
}
