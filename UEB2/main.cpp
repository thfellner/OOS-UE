//
// Created by tfellner on 20.03.19.
//


#include <string>
#include <iostream>
#include "asciiimage.h"
/*
int main() {

    myAscii mandelbrot(80, 25);

    double x0 = -3;
    double y0 = -1.5;
    double x1 = 1;
    double y1 = 1.5;
    int maxi = 50;

    //x und y Koordinate im imaginren Bild
    double x;
    double y;

    //Skaliere fr jeden Punkt der Computergrafik den dazu gehrigen Punkt der imaginren Grafik
    for (int s = 0; s<80; s++) {
        x = x0 + (x1 - x0) / ((double)80)*(double)s;
        for (int t = 0; t<25; t++) {
            y = y0 + (y1 - y0) / ((double)25)*(double)t;

            double zr = 0;
            double zi = 0;
            int i;

            //Berechnung der Farbwerte
            for (i = 0; i < maxi; ++i) {
                // calculate next iteration
                // For the interested reader: z=zr+i*zi and c=x+i*y are complex numbers
                // In the next row we calculate z * z + c and check whether |z| > 2
                double nextzr = zr * zr - zi * zi + x;
                double nextzi = 2 * zr * zi + y;
                // are we done?
                if (nextzr * nextzr + nextzi * nextzi > 4) {
                    // TODO: set pixel to i % 70
                    // Insert here code to draw
                    //cout << "Pixel: " << t << "," << s << " ist " << i << "|";
                    break;
                }
                zr = nextzr;
                zi = nextzi;
            }

            int color = i % 70;
            mandelbrot.setPix(s, t, color);
        }
    }

    std::string expected = "                                  ..............................................\n                                ................................................\n                             ............'''''''''''''''''''....................\n                            .......'''''''''''''''''````^^^```''''..............\n                          .....''''''''''''''''``````^^\",<:,,`````''''..........\n                         ...''''''''''''''''```````^^^\":;n{l:\"^^````'''''.......\n                        ..'''''''''''''''```````^^\"\"\",:-mmmm>:,\"^^^```'''''.....\n                       .'''''''''''''''`````^^\",n+l;ivm]{mm}+m![:,,],^`''''''...\n                      .''''''''''''```^^^^^^\"\",:Immmmmmmmmmmmmmmmmm>:^^`''''''..\n                     .''''''''```^,;\"\"\"\"\"\",,,:lnmmmmmmmmmmmmmmmmmmmm:,^``''''''.\n                     '''``````^^^\",I~?!ixil;;l{mmmmmmmmmmmmmmmmmmmmm<:\"``'''''''\n                     '`````^^^^^,:I~[mmmmmmmf-mmmmmmmmmmmmmmmmmmmmmm!,^```''''''\n                     ^^\"\",,\"\",,;immmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm<,\"^```''''''\n                     ^^\"\",,\"\",,;immmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm<,\"^```''''''\n                     '`````^^^^^,:I~[mmmmmmmf-mmmmmmmmmmmmmmmmmmmmmm!,^```''''''\n                     '''``````^^^\",I~?!ixil;;l{mmmmmmmmmmmmmmmmmmmmm<:\"``'''''''\n                     .''''''''```^,;\"\"\"\"\"\",,,:lnmmmmmmmmmmmmmmmmmmmm:,^``''''''.\n                      .''''''''''''```^^^^^^\"\",:Immmmmmmmmmmmmmmmmm>:^^`''''''..\n                       .'''''''''''''''`````^^\",n+l;ivm]{mm}+m![:,,],^`''''''...\n                        ..'''''''''''''''```````^^\"\"\",:-mmmm>:,\"^^^```'''''.....\n                         ...''''''''''''''''```````^^^\":;n{l:\"^^````'''''.......\n                          .....''''''''''''''''``````^^\",<:,,`````''''..........\n                            .......'''''''''''''''''````^^^```''''..............\n                             ............'''''''''''''''''''....................\n                                ................................................\n";
    std::cout << expected;

    std::cout << std::endl;
    mandelbrot.show();
}
*/