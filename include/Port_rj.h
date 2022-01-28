
class Port
{

public:

    //declaration des attributs
    int orangeBlanc, orange, vertBlanc, vert, bleuBlanc, bleu, maronBlanc, maron ;

    //constructeur
    Port(int ob, int o, int vb, int b, int bb, int v, int mb, int m){

        orangeBlanc = ob ;
        orange = o;
        vertBlanc = vb;
        bleu = b;
        bleuBlanc = bb ;
        vert = v ;
        maronBlanc = mb;
        maron = m ;

    }

};



void signalRecevoi(int ob, int o, int vb, int b, int bb, int v, int mb, int m);
void signalEnvoi(int ob, int o, int vb, int b, int bb, int v, int mb, int m);
bool testSignalRecu(int ob, int o, int vb, int b, int bb, int v, int mb, int m);
void statuHigh (int ob, int o, int vb, int b, int bb, int v, int mb, int m);
void afficheResultat();