#include "./../include/core/archive.h"
#include "./../include/entities/crystal.h"

void generateCrystalsData()
{
    Archive<Crystal> crystalsArchive("data/crystals.dat");

    Crystal crystal;
    crystal.setName("Jade Rojo");

    crystalsArchive.write(crystal);
}

void generateInitialData()
{
    generateCrystalsData();
}