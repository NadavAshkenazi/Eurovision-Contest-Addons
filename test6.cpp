
#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;


void TEST6() {
    ofstream to("../test6myresult.txt");
    MainControl eurovision;
    Participant p1("ukraine","song_ukraine",226,"singer_ukraine");
    to<<p1<<endl;
    Participant p2("kazakhastan","song_kazakhastan",151,"singer_kazakhastan");
    to<<p2<<endl;
    Participant p3("austria","song_austria",145,"singer_austria");
    to<<p3<<endl;
    Participant p4("israel","song_israel",212,"singer_israel");
    to<<p4<<endl;
    Participant p5("armenia","song_armenia",217,"singer_armenia");
    to<<p5<<endl;
    Participant p6("armenia","song_armenia",210,"singer_armenia");
    to<<p6<<endl;
    Participant p7("greece","song_greece",154,"singer_greece");
    to<<p7<<endl;
    Participant p8("malta","song_malta",202,"singer_malta");
    to<<p8<<endl;
    Participant p9("ukraine","song_ukraine",228,"singer_ukraine");
    to<<p9<<endl;
    Participant p10("croatia","song_croatia",213,"singer_croatia");
    to<<p10<<endl;
    Participant p11("georgia","song_georgia",225,"singer_georgia");
    to<<p11<<endl;
    Participant p12("estonia","song_estonia",110,"singer_estonia");
    to<<p12<<endl;
    Participant p13("turkey","song_turkey",202,"singer_turkey");
    to<<p13<<endl;
    Participant p14("netherlands","song_netherlands",119,"singer_netherlands");
    to<<p14<<endl;
    Participant p15("spain","song_spain",206,"singer_spain");
    to<<p15<<endl;
    Participant p16("russia","song_russia",205,"singer_russia");
    to<<p16<<endl;
    Participant p17("turkey","song_turkey",176,"singer_turkey");
    to<<p17<<endl;
    Participant p18("bosnia","song_bosnia",202,"singer_bosnia");
    to<<p18<<endl;
    Participant p19("switzerland","song_switzerland",131,"singer_switzerland");
    to<<p19<<endl;
    Participant p20("malta","song_malta",158,"singer_malta");
    to<<p20<<endl;
    Participant p21("moldova","song_moldova",181,"singer_moldova");
    to<<p21<<endl;
    Participant p22("netherlands","song_netherlands",157,"singer_netherlands");
    to<<p22<<endl;
    Participant p23("spain","song_spain",148,"singer_spain");
    to<<p23<<endl;
    Participant p24("hungary","song_hungary",158,"singer_hungary");
    to<<p24<<endl;
    Participant p25("slovenia","song_slovenia",173,"singer_slovenia");
    to<<p25<<endl;
    Participant p26("ireland","song_ireland",192,"singer_ireland");
    to<<p26<<endl;
    Participant p27("slovakia","song_slovakia",115,"singer_slovakia");
    to<<p27<<endl;
    Participant p28("hungary","song_hungary",190,"singer_hungary");
    to<<p28<<endl;
    Participant p29("cyrpus","song_cyrpus",111,"singer_cyrpus");
    to<<p29<<endl;
    Participant p30("georgia","song_georgia",166,"singer_georgia");
    to<<p30<<endl;
    Participant p31("andora","song_andora",108,"singer_andora");
    to<<p31<<endl;
    Participant p32("norway","song_norway",195,"singer_norway");
    to<<p32<<endl;
    Participant p33("belarus","song_belarus",166,"singer_belarus");
    to<<p33<<endl;
    Participant p34("ireland","song_ireland",230,"singer_ireland");
    to<<p34<<endl;
    Participant p35("netherlands","song_netherlands",155,"singer_netherlands");
    to<<p35<<endl;
    Participant p36("estonia","song_estonia",131,"singer_estonia");
    to<<p36<<endl;
    p12.update("new_song",0,"");
    p22.update("new_song",0,"");
    p29.update("new_song",0,"");
    p31.update("new_song",0,"");
    p4.update("new_song",0,"newsinger");
    p26.update("new_song",0,"newsinger");
    p25.update("new_song",0,"newsinger");
    p17.update("new_song",0,"newsinger");
    p17.update("new_song",112,"newsinger");
    p17.update("new_song",177,"newsinger");
    p3.update("new_song",156,"newsinger");
    p28.update("new_song",171,"newsinger");
    to<<eurovision<<endl;
    eurovision+=p7;
    eurovision+=p33;
    eurovision+=p2;
    eurovision+=p5;
    eurovision+=p6;
    eurovision+=p28;
    eurovision+=p2;
    eurovision+=p9;
    eurovision+=p31;
    eurovision+=p7;
    eurovision+=p4;
    eurovision+=p11;
    eurovision+=p32;
    eurovision+=p27;
    to<<eurovision<<endl;
    eurovision+=p21;
    eurovision-=p22;
    eurovision+=p34;
    eurovision+=p26;
    eurovision-=p5;
    eurovision+=p24;
    eurovision-=p8;
    eurovision-=p36;
    eurovision+=p34;
    eurovision-=p10;
    eurovision-=p30;
    eurovision-=p36;
    eurovision+=p29;
    eurovision+=p21;
    eurovision+=p16;
    eurovision+=p30;
    eurovision-=p25;
    eurovision+=p6;
    eurovision-=p17;
    eurovision-=p29;
    eurovision+=p8;
    eurovision-=p3;
    eurovision+=p22;
    eurovision-=p1;
    to<<eurovision<<endl;
    (((eurovision+=p1)-=p10)+=p27)+=p19;
    MainControl::Iterator i;
    for (i = eurovision.begin(); i<eurovision.end(); ++i)
        to << *i << endl;
    for (i = eurovision.begin(); !(i==eurovision.end()); ++i)
        to << *i << endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    eurovision.participate("georgia");
    eurovision.participate("greece");
    eurovision.participate("ireland");
    eurovision.participate("israel");
    eurovision.participate("malta");
    eurovision.participate("uk");
    eurovision.participate("france");
    eurovision.participate("spain");
    eurovision.participate("andora");
    eurovision.participate("uk");
    eurovision.participate("bulgaria");
    eurovision.participate("estonia");
    eurovision.participate("france");
    eurovision.participate("kazakhastan");
    p6.update("",120,"");
    to<<p6<<endl;
    p20.update("",120,"");
    to<<p20<<endl;
    p6.update("",120,"");
    to<<p6<<endl;
    p1.update("",120,"");
    to<<p1<<endl;
    p28.update("",120,"");
    to<<p28<<endl;
    p33.update("",120,"");
    to<<p33<<endl;
    p8.update("",120,"");
    to<<p8<<endl;
    p18.update("",120,"");
    to<<p18<<endl;
    p16.update("",120,"");
    to<<p16<<endl;
    p33.update("",120,"");
    to<<p33<<endl;
    p19.update("",120,"");
    to<<p19<<endl;
    p23.update("",120,"");
    to<<p23<<endl;
    p14.update("",120,"");
    to<<p14<<endl;
    p15.update("",120,"");
    to<<p15<<endl;
    Voter v1("croatia",Regular);
    Voter v2("moldova",Regular);
    Voter v3("serbia",Judge);
    Voter v4("ukraine",Judge);
    Voter v5("moldova",Regular);
    Voter v6("lithiania",Regular);
    Voter v7("armenia",Judge);
    Voter v8("bosnia",Judge);
    Voter v9("austria",Regular);
    Voter v10("bosnia",Regular);
    Voter v11("slovenia",Judge);
    Voter v12("latvia");
    Voter v13("turkey",Regular);
    Voter v14("uk",Judge);
    Voter v15("hungary",Judge);
    Voter v16("italy",Judge);
    Voter v17("slovenia");
    Voter v18("france",Regular);
    Voter v19("andora",Judge);
    Voter v20("ireland",Regular);
    Voter v21("georgia",Regular);
    Voter v22("serbia");
    Voter v23("turkey");
    Voter v24("turkey",Judge);
    Voter v25("italy",Regular);
    Voter v26("malta",Regular);
    Voter v27("lithiania",Judge);
    Voter v28("kazakhastan",Regular);
    Voter v29("italy",Judge);
    Voter v30("israel");
    Voter v31("austria");
    Voter v32("ireland");
    Voter v33("russia",Regular);
    Voter v34("armenia",Judge);
    Voter v35("cyrpus",Regular);
    Voter v36("sweden",Judge);
    Voter v37("bosnia",Judge);
    Voter v38("netherlands");
    Voter v39("lithiania",Regular);
    Voter v40("malta");
    Voter v41("luxembourg",Judge);
    Voter v42("greece");
    Voter v43("bulgaria");
    Voter v44("luxembourg",Judge);
    Voter v45("lithiania",Judge);
    Voter v46("cyrpus",Judge);
    Voter v47("spain",Regular);
    Voter v48("kazakhastan",Judge);
    Voter v49("belarus",Regular);
    Voter v50("germany",Judge);
    Voter v51("bulgaria",Judge);
    Voter v52("bosnia",Judge);
    Voter v53("uk",Judge);
    Voter v54("lithiania");
    Voter v55("italy",Regular);
    Voter v56("switzerland");
    Voter v57("france",Regular);
    Voter v58("germany",Judge);
    Voter v59("ukraine",Regular);
    Voter v60("lithiania",Judge);
    Voter v61("slovakia");
    Voter v62("norway",Judge);
    Voter v63("bosnia",Judge);
    Voter v64("georgia");
    Voter v65("italy",Judge);
    Voter v66("russia",Judge);
    Voter v67("armenia");
    Voter v68("switzerland",Judge);
    Voter v69("moldova");
    Voter v70("uk");
    Voter v71("armenia",Judge);
    Voter v72("andora",Judge);
    Voter v73("austria",Regular);
    Voter v74("switzerland");
    Voter v75("bulgaria");
    Voter v76("bulgaria",Judge);
    Voter v77("sweden",Regular);
    Voter v78("cyrpus",Judge);
    Voter v79("greece",Regular);
    Voter v80("cyrpus",Judge);
    Voter v81("serbia",Judge);
    Voter v82("latvia",Judge);
    Voter v83("hungary");
    Voter v84("armenia",Judge);
    Voter v85("belarus",Regular);
    Voter v86("andora");
    Voter v87("russia");
    Voter v88("bulgaria",Regular);
    Voter v89("georgia",Regular);
    Voter v90("moldova");
    Voter v91("estonia");
    Voter v92("andora");
    Voter v93("israel",Judge);
    Voter v94("cyrpus",Regular);
    Voter v95("israel",Judge);
    Voter v96("slovenia");
    Voter v97("bulgaria",Judge);
    Voter v98("serbia",Regular);
    Voter v99("russia",Regular);
    to<<eurovision<<endl;
    eurovision+=Vote(v17,"france");
    eurovision+=Vote(v45,"germany","armenia","italy","slovenia","austria","norway","moldova","lithiania");
    eurovision+=Vote(v61,"spain");
    eurovision+=Vote(v2,"france");
    eurovision+=Vote(v60,"kazakhastan");
    eurovision+=Vote(v98,"italy");
    eurovision+=Vote(v76,"turkey");
    eurovision+=Vote(v21,"bulgaria");
    eurovision+=Vote(v28,"france");
    eurovision+=Vote(v31,"latvia");
    eurovision+=Vote(v13,"belgium");
    eurovision+=Vote(v88,"switzerland");
    eurovision+=Vote(v48,"bulgaria");
    eurovision+=Vote(v40,"bulgaria");
    eurovision+=Vote(v90,"spain");
    eurovision+=Vote(v32,"slovakia");
    eurovision+=Vote(v55,"germany");
    eurovision+=Vote(v31,"armenia");
    eurovision+=Vote(v27,"greece","serbia","belgium","bosnia","israel","malta","lithiania","russia","germany");
    eurovision+=Vote(v93,"moldova","georgia");
    eurovision+=Vote(v36,"croatia","belgium","luxembourg","lithiania","bulgaria");
    eurovision+=Vote(v7,"serbia");
    eurovision+=Vote(v59,"croatia");
    eurovision+=Vote(v20,"bosnia");
    eurovision+=Vote(v30,"lithiania");
    eurovision+=Vote(v48,"bosnia");
    eurovision+=Vote(v7,"sweden","lithiania","luxembourg","germany","greece","moldova");
    eurovision+=Vote(v85,"serbia");
    eurovision+=Vote(v58,"greece","slovenia","kazakhastan");
    eurovision+=Vote(v20,"croatia");
    eurovision+=Vote(v12,"moldova");
    eurovision+=Vote(v62,"bulgaria","norway","russia","latvia");
    eurovision+=Vote(v28,"ukraine");
    eurovision+=Vote(v97,"luxembourg","slovenia","andora","norway","austria");
    eurovision+=Vote(v39,"malta");
    eurovision+=Vote(v55,"turkey");
    eurovision+=Vote(v2,"armenia");
    eurovision+=Vote(v74,"moldova");
    eurovision+=Vote(v6,"armenia");
    eurovision+=Vote(v92,"greece");
    eurovision+=Vote(v70,"israel");
    eurovision+=Vote(v75,"russia");
    eurovision+=Vote(v43,"armenia");
    eurovision+=Vote(v14,"luxembourg","spain","latvia","austria","slovakia","norway","bosnia");
    eurovision+=Vote(v70,"luxembourg");
    eurovision+=Vote(v35,"slovakia");
    eurovision+=Vote(v31,"croatia");
    eurovision+=Vote(v50,"malta","andora","ireland","armenia","serbia");
    eurovision+=Vote(v66,"moldova","italy","serbia","sweden","slovenia","croatia","netherlands");
    eurovision+=Vote(v77,"georgia");
    eurovision+=Vote(v67,"belarus");
    eurovision+=Vote(v37,"croatia","france");
    eurovision+=Vote(v44,"hungary","estonia","luxembourg","bosnia");
    eurovision+=Vote(v69,"croatia");
    eurovision+=Vote(v83,"sweden");
    eurovision+=Vote(v69,"kazakhastan");
    eurovision+=Vote(v59,"greece");
    eurovision+=Vote(v87,"andora");
    eurovision+=Vote(v4,"slovenia","serbia","lithiania","croatia","andora","norway","austria","belgium","kazakhastan");
    eurovision+=Vote(v11,"italy","sweden","bosnia","armenia","israel","ireland","andora");
    eurovision+=Vote(v64,"georgia");
    eurovision+=Vote(v94,"france");
    eurovision+=Vote(v49,"austria");
    eurovision+=Vote(v54,"latvia");
    eurovision+=Vote(v88,"italy");
    eurovision+=Vote(v79,"germany");
    eurovision+=Vote(v74,"croatia");
    eurovision+=Vote(v36,"belgium","ireland");
    eurovision+=Vote(v3,"hungary","ukraine","luxembourg");
    eurovision+=Vote(v78,"hungary","germany","italy","latvia","kazakhastan","bulgaria");
    eurovision+=Vote(v44,"armenia","ireland","belgium","russia","slovenia","cyrpus","spain","switzerland");
    eurovision+=Vote(v75,"malta");
    eurovision+=Vote(v1,"moldova");
    eurovision+=Vote(v37,"netherlands");
    eurovision+=Vote(v76,"hungary","croatia","kazakhastan","austria","netherlands");
    eurovision+=Vote(v36,"bosnia","switzerland","sweden","austria","israel","estonia","lithiania");
    eurovision+=Vote(v7,"armenia");
    eurovision+=Vote(v51,"netherlands","moldova","bosnia","belarus","italy","switzerland");
    eurovision+=Vote(v80,"latvia","serbia","ukraine","belarus","france","lithiania","spain");
    eurovision+=Vote(v11,"bulgaria","estonia","austria","croatia","greece","netherlands","germany","slovenia");
    eurovision+=Vote(v19,"andora","bulgaria","latvia","slovakia");
    eurovision+=Vote(v48,"cyrpus","israel");
    eurovision+=Vote(v98,"france");
    eurovision+=Vote(v22,"kazakhastan");
    eurovision+=Vote(v27,"netherlands","andora","norway","kazakhastan","serbia");
    eurovision+=Vote(v98,"malta");
    eurovision+=Vote(v92,"norway");
    eurovision+=Vote(v46,"austria","serbia","belarus","spain","georgia","hungary");
    eurovision+=Vote(v95,"georgia","russia","norway","turkey","austria","ukraine");
    eurovision+=Vote(v87,"sweden");
    eurovision+=Vote(v48,"estonia","italy","luxembourg","israel","turkey","germany","france","slovenia");
    eurovision+=Vote(v13,"georgia");
    eurovision+=Vote(v30,"croatia");
    eurovision+=Vote(v73,"belgium");
    eurovision+=Vote(v26,"austria");
    eurovision+=Vote(v41,"luxembourg","croatia","russia");
    eurovision+=Vote(v17,"spain");
    eurovision+=Vote(v27,"bosnia","ukraine","armenia","latvia","lithiania","israel");
    eurovision+=Vote(v64,"moldova");
    eurovision+=Vote(v90,"belarus");
    eurovision+=Vote(v7,"slovenia","russia","luxembourg","israel");
    eurovision+=Vote(v51,"moldova","kazakhastan","malta","andora","belarus");
    eurovision+=Vote(v39,"france");
    eurovision+=Vote(v29,"bosnia","russia","latvia");
    eurovision+=Vote(v42,"moldova");
    eurovision+=Vote(v31,"estonia");
    eurovision+=Vote(v98,"serbia");
    eurovision+=Vote(v48,"bulgaria","latvia","armenia");
    eurovision+=Vote(v55,"malta");
    eurovision+=Vote(v37,"croatia");
    eurovision+=Vote(v68,"lithiania","belarus","germany","norway","sweden","belgium","austria");
    eurovision+=Vote(v24,"andora","armenia","serbia","russia","ukraine","austria","greece");
    eurovision+=Vote(v25,"israel");
    eurovision+=Vote(v30,"norway");
    eurovision+=Vote(v11,"greece","bosnia");
    eurovision+=Vote(v24,"netherlands","italy","hungary");
    eurovision+=Vote(v75,"switzerland");
    eurovision+=Vote(v24,"spain","bulgaria");
    eurovision+=Vote(v19,"netherlands","georgia");
    eurovision+=Vote(v62,"ukraine","netherlands");
    eurovision+=Vote(v87,"greece");
    eurovision+=Vote(v48,"estonia","georgia","bulgaria","slovakia","cyrpus");
    eurovision+=Vote(v68,"slovakia","germany","ukraine","kazakhastan","croatia","belarus","serbia","moldova");
    eurovision+=Vote(v30,"ukraine");
    eurovision+=Vote(v34,"hungary","norway","slovenia","armenia","switzerland");
    eurovision+=Vote(v45,"bulgaria","israel","serbia");
    eurovision+=Vote(v63,"kazakhastan","serbia","turkey","ireland");
    eurovision+=Vote(v30,"greece");
    eurovision+=Vote(v2,"israel");
    eurovision+=Vote(v11,"turkey","spain","estonia");
    eurovision+=Vote(v40,"croatia");
    eurovision+=Vote(v41,"kazakhastan","estonia","russia","bulgaria","switzerland","croatia","austria","hungary");
    eurovision+=Vote(v14,"israel","bosnia","ukraine","lithiania","germany","russia","serbia","bulgaria","spain");
    eurovision+=Vote(v12,"moldova");
    eurovision+=Vote(v55,"lithiania");
    eurovision+=Vote(v8,"ukraine");
    eurovision+=Vote(v18,"cyrpus");
    eurovision+=Vote(v58,"france","slovakia","greece","moldova","italy","switzerland","ukraine","malta","bulgaria");
    eurovision+=Vote(v4,"malta","switzerland","slovakia","croatia","germany","sweden");
    eurovision+=Vote(v43,"slovenia");
    eurovision+=Vote(v73,"andora");
    eurovision+=Vote(v79,"serbia");
    eurovision+=Vote(v93,"bulgaria","israel","belarus","belgium","estonia");
    eurovision+=Vote(v65,"lithiania","netherlands","estonia","slovenia","slovakia");
    eurovision+=Vote(v63,"ukraine","netherlands","russia","germany","greece");
    eurovision+=Vote(v90,"cyrpus");
    eurovision+=Vote(v70,"russia");
    eurovision+=Vote(v52,"belgium","hungary","cyrpus","sweden","france","bulgaria","lithiania");
    eurovision+=Vote(v66,"luxembourg","moldova","israel","spain","belarus","switzerland","bosnia","ukraine","latvia");
    eurovision+=Vote(v8,"georgia","netherlands","armenia","estonia","austria","germany","lithiania");
    eurovision+=Vote(v31,"moldova");
    eurovision+=Vote(v31,"andora");
    eurovision+=Vote(v62,"andora","greece","austria","moldova","serbia");
    eurovision+=Vote(v96,"belgium");
    eurovision+=Vote(v58,"bulgaria","malta","spain","austria","belgium","georgia","hungary","ireland");
    eurovision+=Vote(v78,"estonia");
    eurovision+=Vote(v20,"israel");
    eurovision+=Vote(v45,"slovenia");
    eurovision+=Vote(v82,"greece","latvia","sweden","belgium","armenia");
    eurovision+=Vote(v68,"malta","croatia","andora","latvia","moldova","ukraine","france","greece");
    eurovision+=Vote(v2,"germany");
    eurovision+=Vote(v54,"belgium");
    eurovision+=Vote(v57,"bosnia");
    eurovision+=Vote(v21,"kazakhastan");
    eurovision+=Vote(v44,"estonia","cyrpus","andora");
    eurovision+=Vote(v36,"greece","latvia","slovakia","italy","norway","spain");
    eurovision+=Vote(v48,"switzerland");
    eurovision+=Vote(v12,"estonia");
    eurovision+=Vote(v58,"serbia","luxembourg");
    eurovision+=Vote(v62,"israel","lithiania","germany","latvia","austria","malta","slovenia");
    eurovision+=Vote(v4,"austria","andora","turkey","netherlands","russia","belgium");
    eurovision+=Vote(v26,"moldova");
    eurovision+=Vote(v62,"belarus");
    eurovision+=Vote(v99,"bulgaria");
    eurovision+=Vote(v18,"sweden");
    eurovision+=Vote(v49,"bulgaria");
    eurovision+=Vote(v66,"switzerland","serbia","slovenia","cyrpus","andora","kazakhastan");
    eurovision+=Vote(v91,"andora");
    eurovision+=Vote(v94,"bulgaria");
    eurovision+=Vote(v85,"ireland");
    eurovision+=Vote(v95,"georgia","serbia","netherlands","bulgaria");
    eurovision+=Vote(v42,"france");
    eurovision+=Vote(v61,"belarus");
    eurovision+=Vote(v16,"slovakia","bulgaria","belgium","norway","russia","kazakhastan","bosnia");
    eurovision+=Vote(v55,"sweden");
    eurovision+=Vote(v1,"slovakia");
    eurovision+=Vote(v31,"netherlands");
    eurovision+=Vote(v26,"belgium");
    eurovision+=Vote(v72,"sweden","greece","ukraine","moldova","france","belarus","lithiania","croatia");
    eurovision+=Vote(v21,"slovenia");
    eurovision+=Vote(v15,"bulgaria","turkey","hungary","lithiania","armenia");
    eurovision+=Vote(v8,"luxembourg","italy","lithiania");
    eurovision+=Vote(v53,"moldova","croatia");
    eurovision+=Vote(v34,"georgia","malta","bulgaria","ireland");
    eurovision+=Vote(v89,"kazakhastan");
    eurovision+=Vote(v5,"greece");
    eurovision+=Vote(v64,"germany");
    eurovision+=Vote(v63,"moldova","luxembourg","croatia","malta","andora","belarus");
    eurovision+=Vote(v68,"sweden","switzerland","belarus","russia","norway","moldova","serbia","slovenia");
    p3.update("shouldnot",143,"error");
    to<<p3<<endl;
    p28.update("shouldnot",143,"error");
    to<<p28<<endl;
    p29.update("shouldnot",143,"error");
    to<<p29<<endl;
    p24.update("shouldnot",143,"error");
    to<<p24<<endl;
    p13.update("shouldnot",143,"error");
    to<<p13<<endl;
    p33.update("shouldnot",143,"error");
    to<<p33<<endl;
    p12.update("shouldnot",143,"error");
    to<<p12<<endl;
    p13.update("shouldnot",143,"error");
    to<<p13<<endl;
    p13.update("shouldnot",143,"error");
    to<<p13<<endl;
    p26.update("shouldnot",143,"error");
    to<<p26<<endl;
    p24.update("shouldnot",143,"error");
    to<<p24<<endl;
    p20.update("shouldnot",143,"error");
    to<<p20<<endl;
    p19.update("shouldnot",143,"error");
    to<<p19<<endl;
    p34.update("shouldnot",143,"error");
    to<<p34<<endl;
    to<<eurovision<<endl;
    to<<eurovision(1,Regular)<<endl;
    to<<eurovision(2,Regular)<<endl;
    to<<eurovision(3,Regular)<<endl;
    to<<eurovision(4,Regular)<<endl;
    to<<eurovision(5,Regular)<<endl;
    to<<eurovision(6,Regular)<<endl;
    to<<eurovision(7,Regular)<<endl;
    to<<eurovision(8,Regular)<<endl;
    to<<eurovision(9,Regular)<<endl;
    to<<eurovision(10,Regular)<<endl;
    to<<eurovision(1,Judge)<<endl;
    to<<eurovision(2,Judge)<<endl;
    to<<eurovision(3,Judge)<<endl;
    to<<eurovision(4,Judge)<<endl;
    to<<eurovision(5,Judge)<<endl;
    to<<eurovision(6,Judge)<<endl;
    to<<eurovision(7,Judge)<<endl;
    to<<eurovision(8,Judge)<<endl;
    to<<eurovision(9,Judge)<<endl;
    to<<eurovision(10,Judge)<<endl;
    to<<eurovision(1,All)<<endl;
    to<<eurovision(2,All)<<endl;
    to<<eurovision(3,All)<<endl;
    to<<eurovision(4,All)<<endl;
    to<<eurovision(5,All)<<endl;
    to<<eurovision(6,All)<<endl;
    to<<eurovision(7,All)<<endl;
    to<<eurovision(8,All)<<endl;
    to<<eurovision(9,All)<<endl;
    to<<eurovision(10,All)<<endl;
    to<<eurovision<<endl;

}