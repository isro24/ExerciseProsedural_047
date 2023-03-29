#include <iostream>
using namespace std;

string Status(int matematika, int bahasaInggris) {
    string status;
    float rerata = (matematika + bahasaInggris) / 2.0;

    if (rerata >= 70 || matematika > 80) {
        status ="diterima";
    }
    else {
        status ="ditolak";
    }
    return status;
}

int main() {

    string kandidat[] = { "asroni", "lia", "joko", "bayu", "asep", "supri", "japra", "jilong", "alukar", "ciplok", "preya",
                          "gorto", "memet", "sapri", "gosen", "wawan", "lisa", "haya", "ling", "boboboy" };

    int matematika[] = { 80, 90, 65, 55, 95, 90, 75, 85, 80, 70, 90,
                        90, 70, 75, 80, 75, 85, 90, 95, 90 };

    int bahasaInggris[] = { 80, 90, 65, 70, 65, 70, 80, 75, 80, 90, 80,
                            90, 80, 75, 70, 90, 70, 90, 95, 80 };

    cout << "Nama\tStatus\n";
    int diterima = 0;
    for (int i = 0; i < 20; i++) {
        string status = Status(matematika[i], bahasaInggris[i]);
        cout << kandidat[i] << "\t" << status << endl;
        if (status == "diterima") {
            diterima++;
        }
    }

    cout << "Total kandidat yang diterima: "<<diterima << endl;
    cout << "Total kandidat yang ditolak: "<< 20-diterima << endl;

    return 0;
}


