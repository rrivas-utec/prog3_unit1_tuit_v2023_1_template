//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "tuit.h"
using namespace std;

static void question_4() {
    Tuit tuit1("Juan Perez", "Este es un tuit de prueba");
    tuit1
            .add_element(new Emoji(1, ":)", 1))
            .add_element(new Media(2, "imagen1.png"));

    Tuit tuit2 ("Maria Diaz", "Respuesta a primer tuit");
    tuit2
            .add_element(new Emoji(1, "<3", 1));

    Tuit tuit3 ("Pedro Ramos", "Segunda respuesta del tuit");
    tuit3
            .add_element(new Emoji(1, ":))", 1))
            .add_element(new Poll(2, "Seleccione la opcion",
                                  {"Opcion A",
                                   "Opcion B",
                                   "Opcion C"}, 1, 0, 0));
    tuit1
            .add_reply(tuit2)
            .add_reply(tuit3);

    tuit1
            .save_to("out_file_4.txt");

    ifstream result("out_file_4.txt");
    string line;
    while(getline(result, line))
        cout << line << endl;
}

TEST_CASE("Question #4") {
    execute_test("test_4.in", question_4);
}