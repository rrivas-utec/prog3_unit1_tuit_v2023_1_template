//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "tuit.h"
using namespace std;

static void question_2() {
    Tuit tuit;
    tuit.load_from("in_file_1.txt")
        .save_to("out_file_2.txt");
    ifstream result("out_file_2.txt");
    string line;
    while(getline(result, line))
        cout << line << endl;
}

TEST_CASE("Question #2") {
    execute_test("test_2.in", question_2);
}