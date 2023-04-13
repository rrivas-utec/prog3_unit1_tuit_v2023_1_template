//
// Created by rudri on 9/12/2020.
//
#include <iostream>
#include "catch.hpp"
#include "redirect_io.h"
#include "tuit.h"
using namespace std;

static void question_1() {
    Tuit tuit;
    tuit.load_from("in_file_1.txt")
        .show(cout);
}

TEST_CASE("Question #1") {
    execute_test("test_1.in", question_1);
}