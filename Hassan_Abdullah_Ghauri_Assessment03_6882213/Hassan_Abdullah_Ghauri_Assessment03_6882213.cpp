// Hassan_Abdullah_Ghauri_Assessment03_6882213.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <time.h>
#include <string>
#include <iomanip>
#include <vector>
#include <dos.h>
#include <chrono>
#include <thread>

void Menu();
void displaySeatingPlan();
void Stops();
void Stop_A();
void Stop_B();
void Stop_C();
void Stop_D();
void Stop_E();
void Stop_F();
void displaySeatingPlan();
void seatingA(std::vector<std::vector<std::string>> *v, std::string Lady, int Lady_Num, std::string Male, int Male_Num);
void seatingB(std::vector<std::vector<std::string>>* v, std::string ladyMother_B, int ladyMother_Num, std::string children, int children_Num, int leavingNum, std::string Leaving);
void seatingC(std::vector<std::vector<std::string>>* v, int ladyCNum, std::string ladyC, int maleCNum, std::string maleC, int leavingLadyMotherNum, std::string leavingLadyMother, int childrenLeavingNum, std::string childrenLeaving, int ladyLeavingNum, std::string ladyLeaving);
void seatingD(std::vector<std::vector<std::string>>* v, int Male_D_Num, std::string Male_D);
void seatingE(std::vector<std::vector<std::string>>* v, int Male_Teen_Num, std::string Male_Teen, int ladyMother_E_Num, std::string ladyMother_E, int children_Leaving_E_Num, std::string  children_Leaving_E);
void seatingF(std::vector<std::vector<std::string>>* v);

int main()
{
    Menu();
    
}

void seatingA(std::vector<std::vector<std::string>> *v, std::string Lady, int Lady_Num, std::string Male, int Male_Num) {

    std::ofstream out_file{"../Stop_A_Seating_Plan.txt"};

    if (Lady == "L") {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < Lady_Num; j++) {
                (*v)[i][j] = "L";
            }
            std::cout << std::endl;
        }
   }

    if (Male == "M") {
        for (int i = 4; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                (*v)[i][j] = "M";
                if (i == Male_Num && j == 0) {
                    break;
                }
            }
            std::cout << std::endl;
        }
    }
    

    for (auto str : *v) {
        for (auto str1 : str) {
            std::cout << std::setw(8) << str1 << " ";
        }
        std::cout << std::endl;
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            out_file << str1 << " ";
        }
        out_file << std::setw(15) << std::endl;
    } 
}

void seatingB(std::vector<std::vector<std::string>>* v, std::string ladyMother_B, int ladyMother_Num, std::string children, int children_Num, int leavingNum, std::string Leaving) {
    std::ofstream out_file{ "../Stop_B_Seating_Plan.txt" };

    if (ladyMother_B == "LM") {
        for (int i = 1; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                (*v)[i][j] = "LM";
                if (i == 2) {
                    break;
                }
            }
            std::cout << std::endl;
        }
    }
    if (Leaving == "L") {
        (*v)[0][3] = "D1";
    }

    if (children == "C") {
        for (int i = 2; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                (*v)[i][j] = "C";
            }
            std::cout << std::endl;
        }
    }


    for (auto str : *v) {
        for (auto str1 : str) {
            std::cout << std::setw(8) << str1 << " ";
        }
        std::cout << std::endl;
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            out_file << std::setw(15) << str1 << " ";
        }
        out_file << std::endl;
    }
}

void seatingC(std::vector<std::vector<std::string>>* v, int ladyCNum, std::string ladyC, int maleCNum, std::string maleC, int leavingLadyMotherNum, std::string leavingLadyMother, int childrenLeavingNum, std::string childrenLeaving, int ladyLeavingNum, std::string ladyLeaving) {
    std::ofstream out_file{ "../Stop_C_Seating_Plan.txt" };

    if (leavingLadyMother == "LM") {
        (*v)[1][2] = "C2";
    }

    if (childrenLeaving == "C") {
        (*v)[2][2] = "C4";\
        (*v)[3][2] = "C5";
    }

    if (ladyLeaving == "L") {
        (*v)[0][2] = "C1";
    }

    if (ladyC == "L") {
        for (int i = 0; i < 3; i++) {
            for (int j = 2; j < 4; j++) {
                if (i == 2 && j == 3) {
                    break;
                }
                (*v)[i][j] = "L";
                
            }
            std::cout << std::endl;
        }
    }

    if (maleC == "M") {
        for (int i = 5; i < 6; i++) {
            for (int j = 1; j < 4; j++) {
                (*v)[i][j] = "M";
            }
            std::cout << std::endl;
        }
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            std::cout << std::setw(15) << str1 << " ";
        }
        std::cout << std::endl;
    }


   

    for (auto str : *v) {
        for (auto str1 : str) {
            out_file << std::setw(15) << str1 << " ";
        }
        out_file << std::endl;
    }
};

void seatingD(std::vector<std::vector<std::string>>* v, int Male_D_Num, std::string Male_D) {
    std::ofstream out_file{ "../Stop_D_Seating_Plan.txt" };

    
    if (Male_D == "M") {
        for (int i = 6; i < 8; i++) {
            for (int j = 0; j < 4; j++) {
                (*v)[i][j] = "M";
                if (i == 7 && j == 1) {
                    break;
                }
            }
            std::cout << std::endl;
        }
    }


    for (auto str : *v) {
        for (auto str1 : str) {
            std::cout << std::setw(8) << str1 << " ";
        }
        std::cout << std::endl;
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            out_file << std::setw(15) << str1 << " ";
        }
        out_file << std::endl;
    }
}

void seatingE(std::vector<std::vector<std::string>>* v, int Male_Teen_Num, std::string Male_Teen, int ladyMother_E_Num, std::string ladyMother_E, int children_Leaving_E_Num, std::string  children_Leaving_E) {
    std::ofstream out_file{ "../Stop_E_Seating_Plan.txt" };


    if (Male_Teen == "MT") {
        for (int i = 7; i < 8; i++) {
            for (int j = 2; j < 4; j++) {
                (*v)[i][j] = "MT";             
            }
            std::cout << std::endl;
        }
    }
    int count{ 0 };
        
    (*v)[1][1] = "A2";
        
        (*v)[2][0] = "A3";  
        (*v)[2][1] = "B3";
        
   


    for (auto str : *v) {
        for (auto str1 : str) {
            std::cout << std::setw(8) << str1 << " ";
        }
        std::cout << std::endl;
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            out_file << std::setw(15) << str1 << " ";
        }
        out_file << std::endl;
    }


};

void seatingF(std::vector<std::vector<std::string>>* v) {

    std::ofstream out_file{ "../Stop_F_Seating_Plan.txt" };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            (*v)[i][j] = "EMPTY";
        }
        std::cout << std::endl;
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            std::cout << std::setw(8) << str1 << " ";
        }
        std::cout << std::endl;
    }

    for (auto str : *v) {
        for (auto str1 : str) {
            out_file << std::setw(15) << str1 << " ";
        }
        out_file << std::endl;
    }

}\

void displaySeatingPlan() {

    std::string line{};
    std::ifstream seatingPlan("../Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << line << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}

void Menu() {
    char input{};

    std::cout << "Welcome! Please read the rules carefully before entering the bus." << std::endl;
    std::chrono::seconds dura(3);
    std::this_thread::sleep_for(dura);

    std::cout << "Firstly, Ladies must first be seated in the Family & Lady's section." << std::endl; 
    std::chrono::seconds dura2(3);
    std::this_thread::sleep_for(dura2);

    std::cout << "Secondly, Children must be safely seated AWAY from the 'Door'." << std::endl; 
    std::chrono::seconds dura3(3);
    std::this_thread::sleep_for(dura3);

    std::cout << "Thirdly, Male passengers must NOT be seated in the Family & Lady's section." << std::endl;
    std::chrono::seconds dura4(3);
    std::this_thread::sleep_for(dura4);

    std::cout << "That's all. Now please enjoy the ride! " << std::endl;

    std::chrono::seconds dura5(2);
    std::this_thread::sleep_for(dura5);


        do{    
        std::cout << "Please choose the following options: " << std::endl;
        std::cout << "1) For checking all the stops, PRESS'D' " << std::endl;
        std::cout << "2) For checking the default plan, PRESS 'F'" << std::endl;
        std::cout << "3) For checking previous seating plans, PRESS 'P'" << std::endl;
        std::cout << "Please press '0' for exit" << std::endl;

        std::cin >> input;
        std::cout << std::endl;

        if (input == 'D' || input == 'd') {
            Stops();
        }
        else {
            std::cout << "Invalid Entry" << std::endl;
        }

        if (input == 'F' || input == 'f') {
            displaySeatingPlan();
        }
        else {
            std::cout << "Invalid Entry" << std::endl;
        }
        if (input == 'P' || input == 'p') {
            std::cout << "Which seating plan would you like to see?" << std::endl;
            std::cout << "Seating plan A (Press 'A')" << std::endl;
            std::cout << "Seating plan B (Press 'B')" << std::endl;
            std::cout << "Seating plan C (Press 'C')" << std::endl;
            std::cout << "Seating plan D (Press 'D')" << std::endl;
            std::cout << "Seating plan E (Press 'E')" << std::endl;
            std::cout << "Seating plan F (Press 'F')" << std::endl;
            std::cin >> input;
            std::cout << std::endl;
            if (input == 'A' || input == 'a') {
                Stop_A();
            }
            else if (input == 'B' || input == 'b') {
                Stop_B();
            }
            else if (input == 'C' || input == 'c') {
                Stop_C();
            }
            else if (input == 'D' || input == 'd') {
                Stop_D();
            }
            else if (input == 'E' || input == 'e') {
                Stop_E();
            }
            else if (input == 'F' || input == 'f') {
                Stop_F();
            }
        }
        
    } while (input != '0');
}


void Stops() {
    
    std::vector <std::vector<std::string>> v{
              {"A1", "B1", "C1", "D1"},
              {"A2", "B2", "C2", "D2"},
              {"A3", "B3", "C3", "D3"},
              {"A4", "B4", "C4", "D4"},
              {"A5", "B5", "C5", "D5"},
              {"A6", "B6", "C6", "D6"},
              {"A7", "B7", "C7", "D7"},
              {"A8", "B8", "C8", "D8"}

    };

    std::string Lady_A{};
    std::string Male_A{};
    std::string Leaving{};
    int LadyA_Num{ 0 };
    int MaleA_Num{ 0 };
    int leavingNum{0};
 
    std::ifstream read_file{ "../Stop_A.txt" };


    if (!read_file.is_open()) {
        std::cerr << "Your file may be missing" << std::endl;
    }

  
    
    read_file >> LadyA_Num >> Lady_A >> MaleA_Num >> Male_A;
    std::cout << "Welcome to Stop A. Get ready for a bumpy ride!  " << std::endl;
    std::cout << "Note: 3 ladies and 5 men entered from Stop A";
    seatingA(&v, Lady_A, LadyA_Num, Male_A, MaleA_Num);

   read_file.close();

   std::cout << "----------------------------------------------------" << std::endl;
   
   std::string ladyMother_B{};
   std::string children{};
   int ladyMother_Num{ 0 };
   int children_Num{ 0 };

   std::ifstream readStop_B{ "../Stop_B.txt" };


   if (!readStop_B.is_open()) {
       std::cerr << "Your file may be missing" << std::endl;
   }

  
   readStop_B >>  ladyMother_B >> ladyMother_Num  >> children >> children_Num >> leavingNum >> Leaving;

   std::cout << "Welcome to Stop B. Please fasten your seatbelt!" << std::endl;
   std::cout << "Also, Note: 3 families entered the bus.That's 3 children and 6 mothers and 1 Lady left" << std::endl;

   seatingB(&v, ladyMother_B, ladyMother_Num, children, children_Num, leavingNum, Leaving);

   readStop_B.close();

   std::cout << "----------------------------------------------------" << std::endl;
   
   std::string ladyC{};
   std::string maleC{};
   std::string leavingLadyMother{};
   std::string childrenLeaving{};
   std::string ladyLeaving{};

   int ladyCNum{};
   int  maleCNum{};
   int  leavingLadyMotherNum{};
   int  childrenLeavingNum{};
   int  ladyLeavingNum{};

   std::ifstream readStop_C{ "../Stop_C.txt" };
   

   if (!readStop_C.is_open()) {
       std::cerr << "Your file may be missing" << std::endl;
   }

 
   readStop_C >> ladyCNum >> ladyC >> maleCNum >> maleC >> leavingLadyMotherNum >> leavingLadyMother >> childrenLeavingNum >> childrenLeaving >> ladyLeavingNum >> ladyLeaving;
   std::cout << "Welcome to Stop C. We will C to it that you reach your destination. " << std::endl;
   std::cout << "Note: 5 ladies and 3 males entered the bus. 1 family (1 mother and 2 children) and 1 lady left" << std::endl;

   seatingC(&v, ladyCNum, ladyC, maleCNum, maleC, leavingLadyMotherNum, leavingLadyMother, childrenLeavingNum, childrenLeaving, ladyLeavingNum, ladyLeaving);

   readStop_C.close(); 


   std::cout << "----------------------------------------------------" << std::endl;

   std::string Male_D{};
   int Male_D_Num{};

   std::ifstream readStop_D{ "../Stop_D.txt" };


   if (!readStop_D.is_open()) {
       std::cerr << "Your file may be missing" << std::endl;
   }


   readStop_D >> Male_D_Num >> Male_D;
   std::cout << "Welcome to Stop D. We are DELIGHTED to have you on board! " << std::endl;
   std::cout << "Note: 6 Males have entered the bus and no one left." << std::endl;

   seatingD(&v, Male_D_Num, Male_D);

   readStop_D.close();

   std::cout << "----------------------------------------------------" << std::endl;

   std::string Male_Teen{};
   std::string ladyMother_E{};
   std::string children_Leaving_E{};
   int Male_Teen_Num{0};
   int ladyMother_E_Num{ 0 };
   int children_Leaving_E_Num{ 0 };

   std::ifstream readStop_E{ "../Stop_E.txt" };


   if (!readStop_E.is_open()) {
       std::cerr << "Your file may be missing" << std::endl;
   }


   readStop_E >> Male_Teen_Num >> Male_Teen >> ladyMother_E_Num >> ladyMother_E >> children_Leaving_E_Num >> children_Leaving_E;
   std::cout << "Welcome to Stop E. I hope everyone is having a smooth ride! " << std::endl;
   std::cout << "Note: 2 Male Teenagers entered the bus and 1 family left." << std::endl;

   seatingE(&v, Male_Teen_Num, Male_Teen, ladyMother_E_Num, ladyMother_E, children_Leaving_E_Num, children_Leaving_E);

   readStop_E.close();

   std::ifstream readStop_F{ "../Stop_F.txt" };


   if (!readStop_F.is_open()) {
       std::cerr << "Your file may be missing" << std::endl;
   }


   readStop_E >> Male_Teen_Num >> Male_Teen >> ladyMother_E_Num >> ladyMother_E >> children_Leaving_E_Num >> children_Leaving_E;
   std::cout << "End of the ride. I hope everyone enjoyed their ride! " << std::endl;
   std::cout << "Note: Everyone left" << std::endl;

   seatingF(&v);

   readStop_F.close();

  
}

void Stop_A() {
    std::string line{};
    std::ifstream seatingPlan("../Stop_A_Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << std::setw(23) << line << std::left << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}

void Stop_B() {
    std::string line{};
    std::ifstream seatingPlan("../Stop_B_Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << std::setw(23) << line << std::left << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}

void Stop_C() {
    std::string line{};
    std::ifstream seatingPlan("../Stop_C_Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << std::setw(23) << line << std::left << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}

void Stop_D() {
    std::string line{};
    std::ifstream seatingPlan("../Stop_D_Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << std::setw(23) << line << std::left << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}

void Stop_E() {
    std::string line{};
    std::ifstream seatingPlan("../Stop_E_Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << std::setw(23) << line << std::left << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}

void Stop_F() {
    std::string line{};
    std::ifstream seatingPlan("../Stop_F_Seating_Plan.txt");
    if (!seatingPlan.is_open()) {
        std::cout << "Sorry we had trouble opening the file." << std::endl;
        std::cout << "Please make sure the file is in your system." << std::endl;
    }

    while (std::getline(seatingPlan, line)) {
        std::cout << std::setw(23) << line << std::left << std::endl;
    }

    seatingPlan.close();

    std::cout << std::endl;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
