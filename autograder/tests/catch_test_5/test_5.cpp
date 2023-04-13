//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "tuit.h"
using namespace std;

static void question_5() {
    Tuit tuit1("JuanPerez", "Este es un tuit de prueba");
    tuit1
            .add_element(new Emoji(1, ":)", 1))
            .add_element(new Media(2, "imagen1.png"));

    Tuit tuit2 ("MariaDiaz", "Respuesta a primer tuit");
    tuit2
            .add_element(new Emoji(1, "<3", 1));

    Tuit tuit3 ("PedroRamos", "Segunda respuesta del tuit");
    tuit3
            .add_element(new Emoji(1, ":))", 1))
            .add_element(new Poll(2, "Seleccione la opcion",
                                  {"Opcion A",
                                   "Opcion B",
                                   "Opcion C"}, 1, 0, 0));
    tuit1
            .add_reply(tuit2)
            .add_reply(tuit3)
            .show(cout);
}

TEST_CASE("Question #5") {
    execute_test("test_5.in", question_5);
}