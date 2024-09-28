#include <iostream>

#include "./../include/core/archive.h"
#include "./../include/entities/crystal.h"

using namespace std;

int main()
{
    Archive<Crystal> crystalsArchive("data/crystals.dat");

    Crystal crystal;
    crystal.setName("Jade Rojo");

    crystalsArchive.write(crystal);

    Crystal aux;
    aux = crystalsArchive.read(0);

    cout << aux.getName();
}