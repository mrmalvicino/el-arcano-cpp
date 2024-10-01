#include "./../include/core/archive.h"
#include "./../include/entities/crystal.h"
#include "./../include/entities/effect.h"
#include "./../include/entities/card.h"
#include "./../include/entities/prophecy.h"

void generateCrystalsData()
{
    Archive<Crystal> crystalsArchive("data/crystals.dat");
    crystalsArchive.createEmptyArchive();
    Crystal crystal;

    crystal.setId(1);
    crystal.setName("Sodalita");
    crystalsArchive.write(crystal);

    crystal.setId(2);
    crystal.setName("Amatista");
    crystalsArchive.write(crystal);

    crystal.setId(3);
    crystal.setName("Piedra de la luna");
    crystalsArchive.write(crystal);

    crystal.setId(4);
    crystal.setName("Citrino");
    crystalsArchive.write(crystal);

    crystal.setId(5);
    crystal.setName("Turmalina");
    crystalsArchive.write(crystal);

    crystal.setId(6);
    crystal.setName("Cuarzo rosa");
    crystalsArchive.write(crystal);

    crystal.setId(7);
    crystal.setName("Jade rojo");
    crystalsArchive.write(crystal);

    crystal.setId(8);
    crystal.setName("Ojo de tigre");
    crystalsArchive.write(crystal);

    crystal.setId(9);
    crystal.setName("Ágata azul");
    crystalsArchive.write(crystal);
}

void generateEffectsData()
{
    Archive<Effect> effectsArchive("data/effects.dat");
    effectsArchive.createEmptyArchive();
    Effect effect;

    effect.setId(1);
    effect.setName("Maldición del diablo");
    effect.setDescription("El jugador pierde todos sus recursos (cristales y cartas acumuladas).");
    effectsArchive.write(effect);

    effect.setId(2);
    effect.setName("Maldición del loco");
    effect.setDescription("Todos los jugadores deben tomar al azar una carta del jugador que tengan a la derecha, alterando su estrategia.");
    effectsArchive.write(effect);

    effect.setId(3);
    effect.setName("Bendición de la estrella");
    effect.setDescription("El jugador está protegido del próximo ataque o desafío que le impongan los demás.");
    effectsArchive.write(effect);

    effect.setId(4);
    effect.setName("Bendición de la emperatriz");
    effect.setDescription("El jugador puede duplicar una de sus piedras energéticas.");
    effectsArchive.write(effect);

    effect.setId(5);
    effect.setName("Bendición del mago");
    effect.setDescription("El jugador puede realizar una jugada especial, intercambiando dos de sus cartas por dos del mazo ó moviendo cualquier jugador a un casillero específico.");
    effectsArchive.write(effect);

    effect.setId(6);
    effect.setName("Bendición del sol");
    effect.setDescription("El jugador puede tomar una carta de tarot adicional de la pila, como un regalo del Sol, para avanzar más rápido en su profecía.");
    effectsArchive.write(effect);
}

void generateCardsData()
{
    Archive<Effect> effectsArchive("data/effects.dat");
    Archive<Card> cardsArchive("data/cards.dat");
    cardsArchive.createEmptyArchive();
    Card card;

    card.setId(1);
    card.setName("El diablo");
    card.setEffect(effectsArchive.read(0));
    cardsArchive.write(card);

    card.setId(2);
    card.setName("El loco");
    card.setEffect(effectsArchive.read(1));
    cardsArchive.write(card);

    card.setId(3);
    card.setName("La estrella");
    card.setEffect(effectsArchive.read(2));
    cardsArchive.write(card);

    card.setId(4);
    card.setName("La emperatriz");
    card.setEffect(effectsArchive.read(3));
    cardsArchive.write(card);

    card.setId(5);
    card.setName("El mago");
    card.setEffect(effectsArchive.read(4));
    cardsArchive.write(card);

    card.setId(6);
    card.setName("El sol");
    card.setEffect(effectsArchive.read(5));
    cardsArchive.write(card);
}

void generatePropheciesData()
{
    Archive<Prophecy> propheciesArchive("data/prophecies.dat");
    propheciesArchive.createEmptyArchive();
    Prophecy prophecy;

    prophecy.setId(1);
    prophecy.setName("Profecía del éxito");
    prophecy.setDescription("Tu profecía para alcanzar el éxito es alinear la carta La rueda de la fortuna con El carro, y reforzar tu camino con dos Ágatas y una Jade. Estas energías cósmicas se sincronizarán, revelando el sendero hacia el triunfo y la prosperidad.");
    propheciesArchive.write(prophecy);
}

void generateInitialData()
{
    generateCrystalsData();
    generateEffectsData();
    generateCardsData();
    generatePropheciesData();
}