//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "tuit.h"
using namespace std;

static void question_3() {
    Tuit tuit;
    ifstream in("in_file_1.txt");
    in >> tuit;
    ofstream out("out_file_3.txt");
    out << tuit;
    ifstream result("out_file_3.txt");
    string line;
    while(getline(result, line))
        cout << line << endl;
}

TEST_CASE("Question #3") {
    execute_test("test_3.in", question_3);
}