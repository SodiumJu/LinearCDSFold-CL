#ifndef VIE_INF
#define VIE_INF 10000000 // to be the same as in vienna
#endif
#ifndef NBPAIRS
#define NBPAIRS 7 // NP CG GC GU UG AU UA NN
#endif

// nucleotides: CONTRAfold: 0:A 1:C 2:G 3:U 4:N ; Vienna: 0:N 1:A 2:C 3:G 4:U

#define SPECIAL_HP
//int special_hp = 1;

double lxc37=107.856;
int ML_intern37=-90;
int ML_closing37=930;
int ML_BASE37=0;
int MAX_NINIO=300;
int ninio37=60;
int TerminalAU37=50;  //            : outermost pair is AU or GU; also used in tetra_loop triloop

char Triloops[241] =
    "CAACG "
    "GUUAC "
    ;
int Triloop37[2] = {   680,   690};

char Tetraloops[281] =
    "CAACGG "
    "CCAAGG "
    "CCACGG "
    "CCCAGG "
    "CCGAGG "
    "CCGCGG "
    "CCUAGG "
    "CCUCGG "
    "CUAAGG "
    "CUACGG "
    "CUCAGG "
    "CUCCGG "
    "CUGCGG "
    "CUUAGG "
    "CUUCGG "
    "CUUUGG "
    ;

int Tetraloop37[16] = {   550,   330,   370,   340,   350,   360,   370,   250,   360,   280,   370,   270,   280,   350,   370,   370};

char Hexaloops[361] =
    "ACAGUACU "
    "ACAGUGAU "
    "ACAGUGCU "
    "ACAGUGUU "
    ;
int Hexaloop37[4] = {   280,   360,   290,   180};

int stack37[NBPAIRS+1][NBPAIRS+1] =
    //            NP        CG    GC      GU    UG     AU     UA     NN     
  /*NP*/    {{  VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
     /*CG*/,{   VIE_INF,  -240,  -330,  -210,  -140,  -210,  -210,  -140}
     /*GC*/,{   VIE_INF,  -330,  -340,  -250,  -150,  -220,  -240,  -150}
     /*GU*/,{   VIE_INF,  -210,  -250,   130,   -50,  -140,  -130,   130}
     /*UG*/,{   VIE_INF,  -140,  -150,   -50,    30,   -60,  -100,    30}
     /*AU*/,{   VIE_INF,  -210,  -220,  -140,   -60,  -110,   -90,   -60}
     /*UA*/,{   VIE_INF,  -210,  -240,  -130,  -100,   -90,  -130,   -90}
     /*NN*/,{   VIE_INF,  -140,  -150,   130,    30,   -60,   -90,   130}};

//                             0          1           2        3      4      5      6      7      8      9     10     
int hairpin37[31] = {   VIE_INF,   VIE_INF,   VIE_INF,   540,   560,   570,   540,   600,   550,   640,   650,   660,   670,   680,   690,   690,   700,   710,   710,   720,   720,   730,   730,   740,   740,   750,   750,   750,   760,   760,   770};
int bulge37[31] = {   VIE_INF,   380,   280,   320,   360,   400,   440,   460,   470,   480,   490,   500,   510,   520,   530,   540,   540,   550,   550,   560,   570,   570,   580,   580,   580,   590,   590,   600,   600,   600,   610};
int internal_loop37[31] = {   VIE_INF,   VIE_INF,   100,   100,   110,   200,   200,   210,   230,   240,   250,   260,   270,   280,   290,   290,   300,   310,   310,   320,   330,   330,   340,   340,   350,   350,   350,   360,   360,   370,   370};

//            : terminal mismatch for internal loop
int mismatchI37[NBPAIRS+1][5][5] =
{{{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 }
 //            : CG..
,{{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,   -80,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,  -100,     0,  -100,     0}
 ,{     0,     0,     0,     0,   -60}
 }
 //            : GC..
,{{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,   -80,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,  -100,     0,  -100,     0}
 ,{     0,     0,     0,     0,   -60}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,   -10,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -30,    70,   -30,    70}
 ,{    70,    70,    70,    70,    10}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,   -10,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -30,    70,   -30,    70}
 ,{    70,    70,    70,    70,    10}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,   -10,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -30,    70,   -30,    70}
 ,{    70,    70,    70,    70,    10}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,   -10,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -30,    70,   -30,    70}
 ,{    70,    70,    70,    70,    10}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,   -10,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -30,    70,   -30,    70}
 ,{    70,    70,    70,    70,    10}
 }};

//            : terminal mismatch for hairpin
int mismatchH37[NBPAIRS+1][5][5] =
{{{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 }
 //            : CG..
,{{   -80,  -100,  -110,  -100,   -80}
 ,{  -140,  -150,  -150,  -140,  -150}
 ,{   -80,  -100,  -110,  -100,   -80}
 ,{  -150,  -230,  -150,  -240,  -150}
 ,{  -100,  -100,  -140,  -100,  -210}
 }
 //            : GC..
,{{   -50,  -110,   -70,  -110,   -50}
 ,{  -110,  -110,  -150,  -130,  -150}
 ,{   -50,  -110,   -70,  -110,   -50}
 ,{  -150,  -250,  -150,  -220,  -150}
 ,{  -100,  -110,  -100,  -110,  -160}
 }
 //            : GU..
,{{    20,    20,   -20,   -10,   -20}
 ,{    20,    20,   -50,   -30,   -50}
 ,{   -10,   -10,   -20,   -10,   -20}
 ,{   -50,  -100,   -50,  -110,   -50}
 ,{   -10,   -10,   -30,   -10,  -100}
 }
 //            : UG..
,{{     0,   -20,   -10,   -20,     0}
 ,{   -30,   -50,   -30,   -60,   -30}
 ,{     0,   -20,   -10,   -20,     0}
 ,{   -30,   -90,   -30,  -110,   -30}
 ,{   -10,   -20,   -10,   -20,   -90}
 }
 //            : AU..
,{{   -10,   -10,   -20,   -10,   -20}
 ,{   -30,   -30,   -50,   -30,   -50}
 ,{   -10,   -10,   -20,   -10,   -20}
 ,{   -50,  -120,   -50,  -110,   -50}
 ,{   -10,   -10,   -30,   -10,  -120}
 }
 //            : UA..
,{{     0,   -20,   -10,   -20,     0}
 ,{   -30,   -50,   -30,   -50,   -30}
 ,{     0,   -20,   -10,   -20,     0}
 ,{   -30,  -150,   -30,  -150,   -30}
 ,{   -10,   -20,   -10,   -20,   -90}
 }
 //            : NN..
,{{    20,    20,   -10,   -10,     0}
 ,{    20,    20,   -30,   -30,   -30}
 ,{     0,   -10,   -10,   -10,     0}
 ,{   -30,   -90,   -30,  -110,   -30}
 ,{   -10,   -10,   -10,   -10,   -90}
 }};

int mismatchM37[NBPAIRS+1][5][5] =
{{ /* NP.. */
  {   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 },
 { /* CG.. */
  {   -50,  -110,   -50,  -140,   -70}
 ,{  -110,  -110,  -110,  -160,  -110}
 ,{   -70,  -150,   -70,  -150,  -100}
 ,{  -110,  -130,  -110,  -140,  -110}
 ,{   -50,  -150,   -50,  -150,   -70}
 },
 { /* GC.. */
  {   -80,  -140,   -80,  -140,  -100}
 ,{  -100,  -150,  -100,  -140,  -100}
 ,{  -110,  -150,  -110,  -150,  -140}
 ,{  -100,  -140,  -100,  -160,  -100}
 ,{   -80,  -150,   -80,  -150,  -120}
 },
 { /* GU.. */
  {   -50,   -80,   -50,   -50,   -50}
 ,{   -50,  -100,   -70,   -50,   -70}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -110,   -70,   -80,   -70}
 ,{   -50,   -80,   -50,   -80,   -50}
 },
 { /* UG.. */
  {   -30,   -30,   -60,   -60,   -60}
 ,{   -30,   -30,   -60,   -60,   -60}
 ,{   -70,  -100,   -70,  -100,   -80}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -60,  -100,   -70,  -100,   -60}
 },
 { /* AU.. */
  {   -50,   -80,   -50,   -80,   -50}
 ,{   -70,  -100,   -70,  -110,   -70}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -110,   -70,  -120,   -70}
 ,{   -50,   -80,   -50,   -80,   -50}
 },
 { /* UA.. */
  {   -60,   -80,   -60,   -80,   -60}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -100,   -70,  -100,   -80}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -100,   -70,  -100,   -80}
 },
 { /* NN.. */
  {   -30,   -30,   -50,   -50,   -50}
 ,{   -30,   -30,   -60,   -50,   -60}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -50,   -80,   -50,   -80,   -50}
 }};

int mismatch1nI37[NBPAIRS+1][5][5] =
{{{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 }
,{{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 }
,{{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 }};

int mismatch23I37[NBPAIRS+1][5][5] =
{{{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 }
,{{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,   -50,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,  -110,     0,   -70,     0}
 ,{     0,     0,     0,     0,   -30}
 }
,{{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,     0,     0,     0,     0}
 ,{     0,  -120,     0,   -70,     0}
 ,{     0,     0,     0,     0,   -30}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -40,    70,     0,    70}
 ,{    70,    70,    70,    70,    40}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    20,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -40,    70,     0,    70}
 ,{    70,    70,    70,    70,    40}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -40,    70,     0,    70}
 ,{    70,    70,    70,    70,    40}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    20,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -40,    70,     0,    70}
 ,{    70,    70,    70,    70,    40}
 }
,{{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,    70,    70,    70,    70}
 ,{    70,   -40,    70,     0,    70}
 ,{    70,    70,    70,    70,    40}
 }};

//            : terminal mismatch for external loop
int mismatchExt37[NBPAIRS+1][5][5] =
{{ /* NP.. */
  {   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 ,{   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF}
 },
 { /* CG.. */
  {   -50,  -110,   -50,  -140,   -70}
 ,{  -110,  -110,  -110,  -160,  -110}
 ,{   -70,  -150,   -70,  -150,  -100}
 ,{  -110,  -130,  -110,  -140,  -110}
 ,{   -50,  -150,   -50,  -150,   -70}
 },
 { /* GC.. */
  {   -80,  -140,   -80,  -140,  -100}
 ,{  -100,  -150,  -100,  -140,  -100}
 ,{  -110,  -150,  -110,  -150,  -140}
 ,{  -100,  -140,  -100,  -160,  -100}
 ,{   -80,  -150,   -80,  -150,  -120}
 },
 { /* GU.. */
  {   -50,   -80,   -50,   -50,   -50}
 ,{   -50,  -100,   -70,   -50,   -70}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -110,   -70,   -80,   -70}
 ,{   -50,   -80,   -50,   -80,   -50}
 },
 { /* UG.. */
  {   -30,   -30,   -60,   -60,   -60}
 ,{   -30,   -30,   -60,   -60,   -60}
 ,{   -70,  -100,   -70,  -100,   -80}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -60,  -100,   -70,  -100,   -60}
 },
 { /* AU.. */
  {   -50,   -80,   -50,   -80,   -50}
 ,{   -70,  -100,   -70,  -110,   -70}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -110,   -70,  -120,   -70}
 ,{   -50,   -80,   -50,   -80,   -50}
 },
 { /* UA.. */
  {   -60,   -80,   -60,   -80,   -60}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -100,   -70,  -100,   -80}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -70,  -100,   -70,  -100,   -80}
 },
 { /* NN.. */
  {   -30,   -30,   -50,   -50,   -50}
 ,{   -30,   -30,   -60,   -50,   -60}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -60,   -80,   -60,   -80,   -60}
 ,{   -50,   -80,   -50,   -80,   -50}
 }};

/* dangle5 */
int dangle5_37[NBPAIRS+1][5] =
    { /*           N      A      C      G      U */
        /* NP */ {   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF},
        /* CG */ {   -10,   -50,   -30,   -20,   -10},
        /* GC */ {    -0,   -20,   -30,    -0,    -0},
        /* GU */ {   -20,   -30,   -30,   -40,   -20},
        /* UG */ {   -10,   -30,   -10,   -20,   -20},
        /* AU */ {   -20,   -30,   -30,   -40,   -20},
        /* UA */ {   -10,   -30,   -10,   -20,   -20},
        /* NN */ {    -0,   -20,   -10,    -0,    -0}
    };

/* dangle3 */
int dangle3_37[NBPAIRS+1][5] =
    { /*           N      A      C      G      U */
        /* NP */ {   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF,   VIE_INF},
        /* CG */ {   -40,  -110,   -40,  -130,   -60},
        /* GC */ {   -80,  -170,   -80,  -170,  -120},
        /* GU */ {   -10,   -70,   -10,   -70,   -10},
        /* UG */ {   -50,   -80,   -50,   -80,   -60},
        /* AU */ {   -10,   -70,   -10,   -70,   -10},
        /* UA */ {   -50,   -80,   -50,   -80,   -60},
        /* NN */ {   -10,   -70,   -10,   -70,   -10}
    };
