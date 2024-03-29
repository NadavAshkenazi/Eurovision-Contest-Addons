
#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;


void TEST1(){
	ofstream to("../test1myresult.txt");
	MainControl eurovision;
    Participant p1("austria","song_austria",201,"singer_austria");
    to<<p1<<endl;
    Participant p2("luxembourg","song_luxembourg",167,"singer_luxembourg");
    to<<p2<<endl;
    Participant p3("malta","song_malta",224,"singer_malta");
    to<<p3<<endl;
    Participant p4("georgia","song_georgia",188,"singer_georgia");
    to<<p4<<endl;
    Participant p5("greece","song_greece",152,"singer_greece");
    to<<p5<<endl;
    Participant p6("germany","song_germany",131,"singer_germany");
    to<<p6<<endl;
    Participant p7("slovakia","song_slovakia",105,"singer_slovakia");
    to<<p7<<endl;
    Participant p8("turkey","song_turkey",148,"singer_turkey");
    to<<p8<<endl;
    Participant p9("belgium","song_belgium",183,"singer_belgium");
    to<<p9<<endl;
    Participant p10("cyrpus","song_cyrpus",125,"singer_cyrpus");
    to<<p10<<endl;
    Participant p11("bulgaria","song_bulgaria",104,"singer_bulgaria");
    to<<p11<<endl;
    Participant p12("norway","song_norway",198,"singer_norway");
    to<<p12<<endl;
    Participant p13("luxembourg","song_luxembourg",203,"singer_luxembourg");
    to<<p13<<endl;
    Participant p14("turkey","song_turkey",163,"singer_turkey");
    to<<p14<<endl;
    Participant p15("bosnia","song_bosnia",213,"singer_bosnia");
    to<<p15<<endl;
    Participant p16("ukraine","song_ukraine",109,"singer_ukraine");
    to<<p16<<endl;
    Participant p17("croatia","song_croatia",194,"singer_croatia");
    to<<p17<<endl;
    Participant p18("moldova","song_moldova",213,"singer_moldova");
    to<<p18<<endl;
    Participant p19("switzerland","song_switzerland",193,"singer_switzerland");
    to<<p19<<endl;
    Participant p20("spain","song_spain",161,"singer_spain");
    to<<p20<<endl;
    Participant p21("netherlands","song_netherlands",150,"singer_netherlands");
    to<<p21<<endl;
    Participant p22("armenia","song_armenia",183,"singer_armenia");
    to<<p22<<endl;
    Participant p23("croatia","song_croatia",143,"singer_croatia");
    to<<p23<<endl;
    Participant p24("sweden","song_sweden",191,"singer_sweden");
    to<<p24<<endl;
    Participant p25("hungary","song_hungary",111,"singer_hungary");
    to<<p25<<endl;
    Participant p26("slovenia","song_slovenia",150,"singer_slovenia");
    to<<p26<<endl;
    Participant p27("andora","song_andora",136,"singer_andora");
    to<<p27<<endl;
    Participant p28("cyrpus","song_cyrpus",152,"singer_cyrpus");
    to<<p28<<endl;
    Participant p29("belarus","song_belarus",180,"singer_belarus");
    to<<p29<<endl;
    Participant p30("austria","song_austria",212,"singer_austria");
    to<<p30<<endl;
    Participant p31("uk","song_uk",224,"singer_uk");
    to<<p31<<endl;
    Participant p32("slovenia","song_slovenia",131,"singer_slovenia");
    to<<p32<<endl;
    Participant p33("lithiania","song_lithiania",178,"singer_lithiania");
    to<<p33<<endl;
    Participant p34("greece","song_greece",147,"singer_greece");
    to<<p34<<endl;
    Participant p35("sweden","song_sweden",218,"singer_sweden");
    to<<p35<<endl;
    Participant p36("bulgaria","song_bulgaria",209,"singer_bulgaria");
    to<<p36<<endl;
    p36.update("new_song",0,"");
    p35.update("new_song",0,"");
    p19.update("new_song",0,"");
    p32.update("new_song",0,"");
    p31.update("new_song",0,"newsinger");
    p27.update("new_song",0,"newsinger");
    p18.update("new_song",0,"newsinger");
    p28.update("new_song",0,"newsinger");
    p4.update("new_song",129,"newsinger");
    p9.update("new_song",109,"newsinger");
    p13.update("new_song",193,"newsinger");
    p24.update("new_song",175,"newsinger");
    to<<eurovision<<endl;
    eurovision+=p5;
    eurovision+=p28;
    eurovision+=p35;
    eurovision+=p26;
    eurovision+=p14;
    eurovision+=p4;
    eurovision+=p23;
    eurovision+=p17;
    eurovision+=p7;
    eurovision+=p30;
    eurovision+=p5;
    eurovision+=p34;
    eurovision+=p13;
    eurovision+=p29;
    to<<eurovision<<endl;
    eurovision-=p10;
    eurovision-=p25;
    eurovision-=p15;
    eurovision+=p3;
    eurovision+=p12;
    eurovision+=p13;
    eurovision-=p6;
    eurovision+=p9;
    eurovision-=p26;
    eurovision+=p10;
    eurovision+=p16;
    eurovision-=p11;
    eurovision+=p15;
    eurovision-=p18;
    eurovision+=p20;
    eurovision+=p13;
    eurovision-=p31;
    eurovision+=p23;
    eurovision+=p2;
    eurovision-=p29;
    eurovision+=p12;
    eurovision-=p30;
    eurovision-=p31;
    eurovision-=p18;
    to<<eurovision<<endl;
    ((((((((((((((eurovision-=p33)
    +=p15)+=p19)-=p16)-=p36)+=p16)+=p27)-=p27)+=p30)-=p32)+=p30)+=p20)
            -=p12)+=p20);
    MainControl::Iterator i;
    for (i = eurovision.begin(); i<eurovision.end(); ++i)
        to << *i << endl;
    for (i = eurovision.begin(); !(i==eurovision.end()); ++i)
        to << *i << endl;
    eurovision.setPhase(Contest);
    eurovision.setPhase(Voting);
    eurovision.participate("germany");
    eurovision.participate("croatia");
    eurovision.participate("luxembourg");
    eurovision.participate("spain");
    eurovision.participate("latvia");
    eurovision.participate("bosnia");
    eurovision.participate("turkey");
    eurovision.participate("lithiania");
    eurovision.participate("ukraine");
    eurovision.participate("austria");
    eurovision.participate("bosnia");
    eurovision.participate("moldova");
    eurovision.participate("israel");
    eurovision.participate("sweden");
    p20.update("",120,"");
    to<<p20<<endl;
    p9.update("",120,"");
    to<<p9<<endl;
    p19.update("",120,"");
    to<<p19<<endl;
    p17.update("",120,"");
    to<<p17<<endl;
    p5.update("",120,"");
    to<<p5<<endl;
    p1.update("",120,"");
    to<<p1<<endl;
    p27.update("",120,"");
    to<<p27<<endl;
    p34.update("",120,"");
    to<<p34<<endl;
    p28.update("",120,"");
    to<<p28<<endl;
    p13.update("",120,"");
    to<<p13<<endl;
    p28.update("",120,"");
    to<<p28<<endl;
    p20.update("",120,"");
    to<<p20<<endl;
    p14.update("",120,"");
    to<<p14<<endl;
    p15.update("",120,"");
    to<<p15<<endl;
    Voter v1("italy",Judge);
    Voter v2("bulgaria");
    Voter v3("belgium",Judge);
    Voter v4("sweden",Regular);
    Voter v5("belgium",Regular);
    Voter v6("sweden",Regular);
    Voter v7("sweden",Regular);
    Voter v8("germany",Regular);
    Voter v9("uk",Judge);
    Voter v10("switzerland",Judge);
    Voter v11("kazakhastan");
    Voter v12("luxembourg");
    Voter v13("kazakhastan",Regular);
    Voter v14("spain",Regular);
    Voter v15("israel",Judge);
    Voter v16("serbia",Judge);
    Voter v17("estonia",Judge);
    Voter v18("slovakia",Judge);
    Voter v19("spain",Judge);
    Voter v20("malta",Regular);
    Voter v21("lithiania");
    Voter v22("russia");
    Voter v23("slovakia",Judge);
    Voter v24("malta",Regular);
    Voter v25("uk",Judge);
    Voter v26("france",Judge);
    Voter v27("bulgaria");
    Voter v28("luxembourg",Regular);
    Voter v29("france",Judge);
    Voter v30("serbia");
    Voter v31("malta");
    Voter v32("lithiania",Judge);
    Voter v33("slovakia",Regular);
    Voter v34("ukraine",Regular);
    Voter v35("armenia",Regular);
    Voter v36("slovakia",Judge);
    Voter v37("norway",Regular);
    Voter v38("cyrpus",Judge);
    Voter v39("croatia");
    Voter v40("croatia",Regular);
    Voter v41("france",Judge);
    Voter v42("latvia",Regular);
    Voter v43("armenia",Judge);
    Voter v44("belarus",Judge);
    Voter v45("ukraine");
    Voter v46("latvia");
    Voter v47("croatia");
    Voter v48("italy",Regular);
    Voter v49("greece");
    Voter v50("bosnia");
    Voter v51("kazakhastan",Regular);
    Voter v52("slovenia",Judge);
    Voter v53("serbia",Judge);
    Voter v54("cyrpus");
    Voter v55("armenia",Judge);
    Voter v56("israel",Judge);
    Voter v57("malta",Judge);
    Voter v58("bosnia",Regular);
    Voter v59("cyrpus",Judge);
    Voter v60("kazakhastan");
    Voter v61("georgia",Judge);
    Voter v62("slovakia");
    Voter v63("slovakia",Judge);
    Voter v64("bulgaria",Regular);
    Voter v65("malta",Regular);
    Voter v66("croatia",Regular);
    Voter v67("uk",Regular);
    Voter v68("turkey",Regular);
    Voter v69("hungary",Regular);
    Voter v70("moldova",Regular);
    Voter v71("kazakhastan",Judge);
    Voter v72("hungary",Judge);
    Voter v73("italy");
    Voter v74("norway",Regular);
    Voter v75("ireland",Regular);
    Voter v76("bulgaria",Judge);
    Voter v77("belgium",Regular);
    Voter v78("ukraine",Judge);
    Voter v79("turkey");
    Voter v80("spain",Regular);
    Voter v81("bulgaria");
    Voter v82("israel",Judge);
    Voter v83("malta");
    Voter v84("russia",Regular);
    Voter v85("uk");
    Voter v86("bulgaria");
    Voter v87("norway",Regular);
    Voter v88("bulgaria");
    Voter v89("austria",Regular);
    Voter v90("cyrpus");
    Voter v91("croatia",Regular);
    Voter v92("latvia");
    Voter v93("israel",Regular);
    Voter v94("andora");
    Voter v95("armenia");
    Voter v96("latvia");
    Voter v97("georgia",Judge);
    Voter v98("austria");
    Voter v99("slovenia");
    to<<eurovision<<endl;
    eurovision+=Vote(v72,"germany","kazakhastan","moldova","spain","bulgaria");
    eurovision+=Vote(v19,"malta","switzerland","luxembourg","lithiania","moldova","spain","slovenia");
    eurovision+=Vote(v42,"hungary");
    eurovision+=Vote(v94,"croatia");
    eurovision+=Vote(v98,"austria");
    eurovision+=Vote(v3,"austria","russia","ukraine","croatia","luxembourg","norway","germany","kazakhastan","bosnia");
    eurovision+=Vote(v96,"israel");
    eurovision+=Vote(v14,"netherlands");
    eurovision+=Vote(v64,"andora");
    eurovision+=Vote(v20,"switzerland");
    eurovision+=Vote(v81,"slovakia");
    eurovision+=Vote(v34,"hungary");
    eurovision+=Vote(v63,"slovenia","belarus","georgia");
    eurovision+=Vote(v36,"malta");
    eurovision+=Vote(v89,"armenia");
    eurovision+=Vote(v1,"israel","netherlands","austria","slovakia");
    eurovision+=Vote(v6,"hungary");
    eurovision+=Vote(v51,"kazakhastan");
    eurovision+=Vote(v93,"croatia");
    eurovision+=Vote(v66,"latvia");
    eurovision+=Vote(v5,"belarus");
    eurovision+=Vote(v2,"ukraine");
    eurovision+=Vote(v50,"france");
    eurovision+=Vote(v87,"sweden");
    eurovision+=Vote(v34,"slovakia");
    eurovision+=Vote(v56,"ireland","turkey","belgium","bosnia","armenia","austria");
    eurovision+=Vote(v27,"ireland");
    eurovision+=Vote(v31,"turkey");
    eurovision+=Vote(v19,"austria","serbia","slovenia","turkey","estonia");
    eurovision+=Vote(v77,"ireland");
    eurovision+=Vote(v2,"hungary");
    eurovision+=Vote(v73,"spain");
    eurovision+=Vote(v33,"kazakhastan");
    eurovision+=Vote(v83,"france");
    eurovision+=Vote(v34,"ukraine");
    eurovision+=Vote(v96,"kazakhastan");
    eurovision+=Vote(v60,"serbia");
    eurovision+=Vote(v2,"malta");
    eurovision+=Vote(v45,"hungary");
    eurovision+=Vote(v68,"norway");
    eurovision+=Vote(v72,"hungary");
    eurovision+=Vote(v7,"israel");
    eurovision+=Vote(v93,"greece");
    eurovision+=Vote(v14,"estonia");
    eurovision+=Vote(v71,"latvia","malta","italy","switzerland");
    eurovision+=Vote(v88,"russia");
    eurovision+=Vote(v41,"hungary","armenia","norway","bosnia","greece","slovenia","croatia");
    eurovision+=Vote(v16,"sweden","france","belgium","andora","slovenia");
    eurovision+=Vote(v31,"croatia");
    eurovision+=Vote(v86,"kazakhastan");
    eurovision+=Vote(v29,"luxembourg","serbia","switzerland","greece","kazakhastan","bulgaria");
    eurovision+=Vote(v26,"hungary");
    eurovision+=Vote(v95,"russia");
    eurovision+=Vote(v28,"armenia");
    eurovision+=Vote(v67,"sweden");
    eurovision+=Vote(v75,"moldova");
    eurovision+=Vote(v59,"croatia","slovenia","russia","norway","ireland","netherlands","luxembourg");
    eurovision+=Vote(v92,"bulgaria");
    eurovision+=Vote(v46,"france");
    eurovision+=Vote(v66,"hungary");
    eurovision+=Vote(v52,"georgia","andora","spain","serbia","ireland","estonia","hungary");
    eurovision+=Vote(v4,"bulgaria");
    eurovision+=Vote(v10,"luxembourg","russia","israel","norway");
    eurovision+=Vote(v23,"slovakia","ukraine","bulgaria","serbia","switzerland","kazakhastan","slovenia","estonia","moldova","belgium");
    eurovision+=Vote(v89,"ireland");
    eurovision+=Vote(v30,"cyrpus");
    eurovision+=Vote(v91,"croatia");
    eurovision+=Vote(v21,"bosnia");
    eurovision+=Vote(v98,"slovakia");
    eurovision+=Vote(v83,"moldova");
    eurovision+=Vote(v5,"malta");
    eurovision+=Vote(v25,"estonia","ukraine","georgia","slovakia","belarus","lithiania","austria","netherlands");
    eurovision+=Vote(v23,"armenia","turkey","slovakia");
    eurovision+=Vote(v20,"bosnia");
    eurovision+=Vote(v27,"spain");
    eurovision+=Vote(v83,"sweden");
    eurovision+=Vote(v80,"spain");
    eurovision+=Vote(v18,"hungary","croatia");
    eurovision+=Vote(v99,"sweden");
    eurovision+=Vote(v13,"belgium");
    eurovision+=Vote(v99,"greece");
    eurovision+=Vote(v52,"lithiania","estonia","slovakia","germany");
    eurovision+=Vote(v85,"norway");
    eurovision+=Vote(v66,"france");
    eurovision+=Vote(v54,"slovakia");
    eurovision+=Vote(v38,"lithiania","serbia","ireland","israel","spain");
    eurovision+=Vote(v64,"latvia");
    eurovision+=Vote(v15,"bosnia","switzerland","estonia");
    eurovision+=Vote(v13,"georgia");
    eurovision+=Vote(v33,"bosnia");
    eurovision+=Vote(v18,"bulgaria","georgia","israel","spain");
    eurovision+=Vote(v17,"andora","netherlands","israel","armenia","slovenia","russia","turkey");
    eurovision+=Vote(v31,"spain");
    eurovision+=Vote(v18,"kazakhastan");
    eurovision+=Vote(v24,"switzerland");
    eurovision+=Vote(v61,"spain","france","moldova");
    eurovision+=Vote(v26,"georgia","bulgaria","sweden","croatia","kazakhastan","italy");
    eurovision+=Vote(v73,"france");
    eurovision+=Vote(v77,"israel");
    eurovision+=Vote(v41,"greece");
    eurovision+=Vote(v48,"austria");
    eurovision+=Vote(v19,"switzerland");
    eurovision+=Vote(v56,"bosnia");
    eurovision+=Vote(v40,"sweden");
    eurovision+=Vote(v53,"germany","moldova","malta","greece","israel","croatia","sweden");
    eurovision+=Vote(v84,"germany");
    eurovision+=Vote(v79,"turkey");
    eurovision+=Vote(v87,"malta");
    eurovision+=Vote(v81,"norway");
    eurovision+=Vote(v93,"italy");
    eurovision+=Vote(v53,"france","bosnia","cyrpus","norway","ireland","belgium","ukraine","lithiania");
    eurovision+=Vote(v4,"croatia");
    eurovision+=Vote(v17,"greece","turkey","serbia","bulgaria");
    eurovision+=Vote(v36,"russia");
    eurovision+=Vote(v32,"slovenia");
    eurovision+=Vote(v50,"norway");
    eurovision+=Vote(v48,"austria");
    eurovision+=Vote(v22,"hungary");
    eurovision+=Vote(v55,"netherlands","austria","turkey","kazakhastan");
    eurovision+=Vote(v46,"latvia");
    eurovision+=Vote(v40,"sweden");
    eurovision+=Vote(v65,"spain");
    eurovision+=Vote(v51,"estonia");
    eurovision+=Vote(v39,"georgia");
    eurovision+=Vote(v71,"latvia","ireland","kazakhastan","turkey");
    eurovision+=Vote(v31,"turkey");
    eurovision+=Vote(v70,"armenia");
    eurovision+=Vote(v17,"turkey","georgia","spain","belgium","estonia","norway","netherlands");
    eurovision+=Vote(v59,"croatia","hungary","kazakhastan","cyrpus","israel","france","italy","estonia");
    eurovision+=Vote(v18,"turkey","latvia","hungary","bosnia","italy","bulgaria","spain","belgium","russia");
    eurovision+=Vote(v73,"luxembourg");
    eurovision+=Vote(v67,"italy");
    eurovision+=Vote(v67,"netherlands");
    eurovision+=Vote(v57,"estonia","spain","slovenia","belgium","bulgaria");
    eurovision+=Vote(v46,"armenia");
    eurovision+=Vote(v4,"kazakhastan");
    eurovision+=Vote(v7,"slovakia");
    eurovision+=Vote(v19,"netherlands","lithiania","moldova","turkey","germany","armenia","greece","luxembourg","france");
    eurovision+=Vote(v47,"sweden");
    eurovision+=Vote(v35,"switzerland");
    eurovision+=Vote(v1,"belarus");
    eurovision+=Vote(v10,"hungary","russia","slovakia","luxembourg","armenia");
    eurovision+=Vote(v47,"slovenia");
    eurovision+=Vote(v87,"andora");
    eurovision+=Vote(v97,"serbia","spain","ukraine","slovakia","greece");
    eurovision+=Vote(v68,"belarus");
    eurovision+=Vote(v47,"kazakhastan");
    eurovision+=Vote(v66,"kazakhastan");
    eurovision+=Vote(v69,"spain");
    eurovision+=Vote(v52,"latvia","moldova","slovenia","italy");
    eurovision+=Vote(v77,"andora");
    eurovision+=Vote(v35,"norway");
    eurovision+=Vote(v99,"malta");
    eurovision+=Vote(v76,"ireland","israel","slovakia","ukraine","slovenia","netherlands");
    eurovision+=Vote(v18,"cyrpus","italy","kazakhastan","ukraine","france","lithiania");
    eurovision+=Vote(v5,"latvia");
    eurovision+=Vote(v16,"latvia");
    eurovision+=Vote(v75,"austria");
    eurovision+=Vote(v7,"netherlands");
    eurovision+=Vote(v71,"switzerland","turkey","greece","malta","belgium","norway","slovenia");
    eurovision+=Vote(v73,"bosnia");
    eurovision+=Vote(v95,"slovakia");
    eurovision+=Vote(v67,"bosnia");
    eurovision+=Vote(v15,"hungary","greece","andora");
    eurovision+=Vote(v47,"austria");
    eurovision+=Vote(v45,"cyrpus");
    eurovision+=Vote(v40,"austria");
    eurovision+=Vote(v85,"switzerland");
    eurovision+=Vote(v77,"croatia");
    eurovision+=Vote(v6,"slovenia");
    eurovision+=Vote(v53,"cyrpus","israel","kazakhastan","belarus","ireland","ukraine","spain","malta");
    eurovision+=Vote(v51,"serbia");
    eurovision+=Vote(v30,"switzerland");
    eurovision+=Vote(v22,"hungary");
    eurovision+=Vote(v79,"estonia");
    eurovision+=Vote(v57,"serbia");
    eurovision+=Vote(v52,"germany","netherlands","slovakia");
    eurovision+=Vote(v11,"sweden");
    eurovision+=Vote(v89,"georgia");
    eurovision+=Vote(v75,"malta");
    eurovision+=Vote(v11,"russia");
    eurovision+=Vote(v25,"armenia","hungary","georgia","russia","ireland","netherlands","slovenia","ukraine");
    eurovision+=Vote(v52,"turkey");
    eurovision+=Vote(v30,"ireland");
    eurovision+=Vote(v33,"spain");
    eurovision+=Vote(v52,"belgium","georgia","hungary","italy","netherlands","ireland","russia");
    eurovision+=Vote(v55,"kazakhastan","bulgaria","croatia");
    eurovision+=Vote(v46,"estonia");
    eurovision+=Vote(v11,"norway");
    eurovision+=Vote(v62,"switzerland");
    eurovision+=Vote(v42,"sweden");
    eurovision+=Vote(v3,"hungary","belgium","kazakhastan","estonia");
    eurovision+=Vote(v94,"bulgaria");
    eurovision+=Vote(v73,"hungary");
    eurovision+=Vote(v61,"switzerland","belarus","georgia","italy","sweden","kazakhastan");
    eurovision+=Vote(v88,"luxembourg");
    eurovision+=Vote(v80,"ukraine");
    eurovision+=Vote(v50,"austria");
    eurovision+=Vote(v68,"lithiania");
    p10.update("shouldnot",143,"error");
    to<<p10<<endl;
    p11.update("shouldnot",143,"error");
    to<<p11<<endl;
    p32.update("shouldnot",143,"error");
    to<<p32<<endl;
    p18.update("shouldnot",143,"error");
    to<<p18<<endl;
    p3.update("shouldnot",143,"error");
    to<<p3<<endl;
    p24.update("shouldnot",143,"error");
    to<<p24<<endl;
    p35.update("shouldnot",143,"error");
    to<<p35<<endl;
    p10.update("shouldnot",143,"error");
    to<<p10<<endl;
    p30.update("shouldnot",143,"error");
    to<<p30<<endl;
    p30.update("shouldnot",143,"error");
    to<<p30<<endl;
    p17.update("shouldnot",143,"error");
    to<<p17<<endl;
    p30.update("shouldnot",143,"error");
    to<<p30<<endl;
    p13.update("shouldnot",143,"error");
    to<<p13<<endl;
    p9.update("shouldnot",143,"error");
    to<<p9<<endl;
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