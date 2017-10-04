// -----------------------------
// RGB control over the Internet
// -----------------------------

#define RGBCONTROLTIME 2000

void setup() {

    Particle.function("rgb", ledrgb);

}

void loop() {

}

int ledrgb( String value ) {

    String redgreenblue[3];
    String delimiter = "_";
    int rgb[3], j = 0;

    for (int i = 0; i < value.length(); i++) {
        if (value[i] == *delimiter) {
            j++;
        } else {
            redgreenblue[j] += value[i];
        }
    }

    rgb[0] = redgreenblue[0].toInt();
    rgb[1] = redgreenblue[1].toInt();
    rgb[2] = redgreenblue[2].toInt();

    Particle.publish("red", String(rgb[0]));
    Particle.publish("green", String(rgb[1]));
    Particle.publish("blue", String(rgb[2]));

    RGB.control(true);

    RGB.color(rgb[0], rgb[1], rgb[2]);

    delay(RGBCONTROLTIME);

    RGB.control(false);

    return 1;

}
