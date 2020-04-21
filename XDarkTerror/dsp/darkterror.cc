// generated from file '../dkbuild/darkterror//darkterror.dsp' by dsp2cc:
// Code generated with Faust 2.15.11 (https://faust.grame.fr)

#include "math.h"
#include "orangedarkterrorp1_neg_table.h"
#include "orangedarkterrorp1_table.h"
#include "orangedarkterrorp2_neg_table.h"
#include "orangedarkterrorp2_table.h"
#include "orangedarkterrorp3_neg_table.h"
#include "orangedarkterrorp3_table.h"

namespace darkterror {

class Dsp {
private:
	gx_resample::FixedRateResampler smp;
	uint32_t samplingFreq;
	uint32_t fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec1[2];
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec4[2];
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fRec5[5];
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fRec3[4];
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec6[2];
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	double fConst121;
	double fConst122;
	double fConst123;
	double fConst124;
	double fConst125;
	double fConst126;
	double fConst127;
	double fConst128;
	double fConst129;
	double fConst130;
	double fConst131;
	double fConst132;
	double fConst133;
	double fConst134;
	double fRec2[4];
	double fConst135;
	double fConst136;
	double fConst137;
	double fConst138;
	double fConst139;
	double fConst140;
	double fConst141;
	double fConst142;
	double fConst143;
	double fConst144;
	double fConst145;
	double fConst146;
	double fConst147;
	double fConst148;
	double fConst149;
	double fConst150;
	double fConst151;
	double fConst152;
	double fConst153;
	double fConst154;
	double fConst155;
	double fConst156;
	double fConst157;
	double fConst158;
	double fConst159;
	double fConst160;
	double fConst161;
	double fConst162;
	double fConst163;
	double fConst164;
	double fConst165;
	double fConst166;
	double fConst167;
	double fConst168;
	double fConst169;
	double fRec0[5];
	double fConst170;
	double fConst171;
	double fConst172;
	double fConst173;
	double fConst174;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
public:
	static void clear_state_f_static(Dsp*);
	static void init_static(uint32_t samplingFreq, Dsp*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, Dsp*);
	static void del_instance(Dsp *p);
	static void connect_static(uint32_t port,void* data, Dsp *p);
	Dsp() {};
	~Dsp() {};
};


inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec1[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec4[l1] = 0.0;
	for (int l2 = 0; (l2 < 5); l2 = (l2 + 1)) fRec5[l2] = 0.0;
	for (int l3 = 0; (l3 < 4); l3 = (l3 + 1)) fRec3[l3] = 0.0;
	for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) fRec6[l4] = 0.0;
	for (int l5 = 0; (l5 < 4); l5 = (l5 + 1)) fRec2[l5] = 0.0;
	for (int l6 = 0; (l6 < 5); l6 = (l6 + 1)) fRec0[l6] = 0.0;
}

void Dsp::clear_state_f_static(Dsp *p)
{
	p->clear_state_f();
}

inline void Dsp::init(uint32_t RsamplingFreq)
{
	samplingFreq = 192000;
	smp.setup(RsamplingFreq, samplingFreq);
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = (1.8695728816241201e-19 * fConst0);
	fConst2 = (((((((fConst1 + 6.8201040728630095e-17) * fConst0) + 4.5345401396126398e-15) * fConst0) + 6.5110413991823704e-14) * fConst0) + 4.7364264039631899e-17);
	fConst3 = (fConst0 / fConst2);
	fConst4 = (6.57377333665727e-19 * fConst0);
	fConst5 = (((((-4.0160720107015498e-17 - fConst4) * fConst0) + -4.3786559030431596e-21) * fConst0) + 1.22291757237028e-24);
	fConst6 = (10.0 * fConst0);
	fConst7 = (2.1335382208101301e-15 * fConst0);
	fConst8 = (((((fConst7 + 3.3014694475633098e-10) * fConst0) + 7.0543179654082706e-08) * fConst0) + 3.10774218363943e-06);
	fConst9 = (fConst0 / fConst8);
	fConst10 = (1.9369800790845101e-07 * fConst0);
	fConst11 = (fConst10 + 6.4566002636150602e-06);
	fConst12 = mydsp_faustpower2_f(fConst0);
	fConst13 = (5.0617859917385797e-15 * fConst12);
	fConst14 = (5.2006276915078397e-08 - fConst13);
	fConst15 = (1.6695013446436e-18 * fConst0);
	fConst16 = (((-8.3479686069637802e-15 - fConst15) * fConst12) + 3.9763768960485803e-10);
	fConst17 = (((fConst15 + 9.2360012370933497e-15) * fConst12) + -5.0979190974981704e-10);
	fConst18 = (2.5042520169653999e-18 * fConst12);
	fConst19 = (fConst18 + -6.75456216359765e-12);
	fConst20 = (8.5666933512921692e-12 - fConst18);
	fConst21 = (fConst13 + -5.2006276915078397e-08);
	fConst22 = (((8.3479686069637802e-15 - fConst15) * fConst12) + -3.9763768960485803e-10);
	fConst23 = (((fConst15 + -9.2360012370933497e-15) * fConst12) + 5.0979190974981704e-10);
	fConst24 = (2.5308929958692899e-15 * fConst0);
	fConst25 = (((2.6216150261904599e-11 - fConst24) * fConst0) + -2.6003138457539199e-08);
	fConst26 = (4.1737533616090102e-19 * fConst0);
	fConst27 = (((((fConst26 + -4.1739843034818901e-15) * fConst0) + 3.3772810817988298e-12) * fConst0) + -1.9881884480242901e-10);
	fConst28 = (((((4.6180006185466804e-15 - fConst26) * fConst0) + -4.2833466756460903e-12) * fConst0) + 2.5489595487490898e-10);
	fConst29 = (((fConst24 + 2.6216150261904599e-11) * fConst0) + 2.6003138457539199e-08);
	fConst30 = (((((fConst26 + 4.1739843034818901e-15) * fConst0) + 3.3772810817988298e-12) * fConst0) + 1.9881884480242901e-10);
	fConst31 = (((((-4.6180006185466804e-15 - fConst26) * fConst0) + -4.2833466756460903e-12) * fConst0) + -2.5489595487490898e-10);
	fConst32 = (9.9830212588817305e-14 * fConst0);
	fConst33 = (((-5.0247873669704701e-10 - fConst32) * fConst0) + -1.6638368764802699e-08);
	fConst34 = ((fConst32 + 3.3276737529605398e-12) * fConst0);
	fConst35 = (1.9966042517763499e-13 * fConst12);
	fConst36 = (fConst35 + -3.3276737529605398e-08);
	fConst37 = (3.3276737529605398e-08 - fConst35);
	fConst38 = (((fConst32 + -5.0247873669704701e-10) * fConst0) + 1.6638368764802699e-08);
	fConst39 = ((3.3276737529605398e-12 - fConst32) * fConst0);
	fConst40 = (1.0 / fConst8);
	fConst41 = (6.4006146624303996e-15 * fConst0);
	fConst42 = (((((-3.3014694475633098e-10 - fConst41) * fConst0) + 7.0543179654082706e-08) * fConst0) + 9.3232265509182997e-06);
	fConst43 = (((((fConst41 + -3.3014694475633098e-10) * fConst0) + -7.0543179654082706e-08) * fConst0) + 9.3232265509182997e-06);
	fConst44 = (((((3.3014694475633098e-10 - fConst7) * fConst0) + -7.0543179654082706e-08) * fConst0) + 3.10774218363943e-06);
	fConst45 = (6.4566002636150602e-06 - fConst10);
	fConst46 = (-6.4566002636150602e-06 - fConst10);
	fConst47 = (fConst10 + -6.4566002636150602e-06);
	fConst48 = (4.33008125036175e-14 * fConst0);
	fConst49 = ((2.66783453714787e-08 - fConst48) * fConst0);
	fConst50 = (2.8578536252387502e-15 * fConst0);
	fConst51 = ((((-5.9176317995957303e-10 - fConst50) * fConst0) + 1.8416465217392899e-07) * fConst0);
	fConst52 = (1.6910961546486399e-13 * fConst0);
	fConst53 = ((((5.7450693034099703e-10 - fConst52) * fConst0) + -2.568282354006e-07) * fConst0);
	fConst54 = (3.4365594568140701e-13 * fConst0);
	fConst55 = (((fConst54 + 6.05200116791109e-10) * fConst0) + -1.3632897006639301e-07);
	fConst56 = (1.7169919844187199e-13 * fConst0);
	fConst57 = (((-5.8797373471430596e-10 - fConst56) * fConst0) + 1.82347404291033e-07);
	fConst58 = (6.9840020167124794e-14 * fConst0);
	fConst59 = ((4.3029589308836498e-08 - fConst58) * fConst0);
	fConst60 = (4.6094413310302397e-15 * fConst0);
	fConst61 = ((((-9.544567418702781e-10 - fConst60) * fConst0) + 2.9703976157085298e-07) * fConst0);
	fConst62 = (2.7275744429816799e-13 * fConst0);
	fConst63 = ((((9.2662408119515504e-10 - fConst62) * fConst0) + -4.14239089355806e-07) * fConst0);
	fConst64 = (5.54283783357107e-13 * fConst0);
	fConst65 = (((fConst64 + 9.7612922063081896e-10) * fConst0) + -2.1988543559095599e-07);
	fConst66 = (2.76934191035277e-13 * fConst0);
	fConst67 = (((-9.4834473341016895e-10 - fConst66) * fConst0) + 2.9410871659843998e-07);
	fConst68 = (6.9607443582134799e-14 * fConst0);
	fConst69 = ((fConst68 + -4.2532372550211499e-08) * fConst0);
	fConst70 = (4.5940912764208902e-15 * fConst0);
	fConst71 = ((((fConst70 + 9.434817718759091e-10) * fConst0) + -2.1742557081156001e-07) * fConst0);
	fConst72 = (2.71475349260797e-13 * fConst0);
	fConst73 = ((((fConst72 + -1.8403020142905201e-09) * fConst0) + 5.5537798917328505e-07) * fConst0);
	fConst74 = (5.5169083642590499e-13 * fConst0);
	fConst75 = (((8.6740013242792904e-10 - fConst74) * fConst0) + -2.9544557440115502e-07);
	fConst76 = (2.7563868919605501e-13 * fConst0);
	fConst77 = (((fConst76 + 2.9410871659849798e-11) * fConst0) + -1.9261834632657699e-21);
	fConst78 = ((-2.66783453714787e-08 - fConst48) * fConst0);
	fConst79 = ((((fConst50 + -5.9176317995957303e-10) * fConst0) + -1.8416465217392899e-07) * fConst0);
	fConst80 = ((((fConst52 + 5.7450693034099703e-10) * fConst0) + 2.568282354006e-07) * fConst0);
	fConst81 = (((6.05200116791109e-10 - fConst54) * fConst0) + 1.3632897006639301e-07);
	fConst82 = (((fConst56 + -5.8797373471430596e-10) * fConst0) + -1.82347404291033e-07);
	fConst83 = ((-4.3029589308836498e-08 - fConst58) * fConst0);
	fConst84 = ((((fConst60 + -9.544567418702781e-10) * fConst0) + -2.9703976157085298e-07) * fConst0);
	fConst85 = ((((fConst62 + 9.2662408119515504e-10) * fConst0) + 4.14239089355806e-07) * fConst0);
	fConst86 = (((9.7612922063081896e-10 - fConst64) * fConst0) + 2.1988543559095599e-07);
	fConst87 = (((fConst66 + -9.4834473341016895e-10) * fConst0) + -2.9410871659843998e-07);
	fConst88 = ((fConst68 + 4.2532372550211499e-08) * fConst0);
	fConst89 = ((((9.434817718759091e-10 - fConst70) * fConst0) + 2.1742557081156001e-07) * fConst0);
	fConst90 = ((((-1.8403020142905201e-09 - fConst72) * fConst0) + -5.5537798917328505e-07) * fConst0);
	fConst91 = (((fConst74 + 8.6740013242792904e-10) * fConst0) + 2.9544557440115502e-07);
	fConst92 = (((2.9410871659849798e-11 - fConst76) * fConst0) + 1.9261834632657699e-21);
	fConst93 = ((fConst48 + -2.66783453714787e-08) * fConst0);
	fConst94 = (9.5261787507958391e-16 * fConst0);
	fConst95 = ((((5.9176317995957303e-10 - fConst94) * fConst0) + -1.8416465217392899e-07) * fConst0);
	fConst96 = (5.6369871821621398e-14 * fConst0);
	fConst97 = ((((-5.7450693034099703e-10 - fConst96) * fConst0) + 2.568282354006e-07) * fConst0);
	fConst98 = (1.1455198189380199e-13 * fConst0);
	fConst99 = (((fConst98 + -6.05200116791109e-10) * fConst0) + 1.3632897006639301e-07);
	fConst100 = (5.7233066147290595e-14 * fConst0);
	fConst101 = (((5.8797373471430596e-10 - fConst100) * fConst0) + -1.82347404291033e-07);
	fConst102 = ((fConst58 + -4.3029589308836498e-08) * fConst0);
	fConst103 = (1.5364804436767499e-15 * fConst0);
	fConst104 = ((((9.544567418702781e-10 - fConst103) * fConst0) + -2.9703976157085298e-07) * fConst0);
	fConst105 = (9.09191480993893e-14 * fConst0);
	fConst106 = ((((-9.2662408119515504e-10 - fConst105) * fConst0) + 4.14239089355806e-07) * fConst0);
	fConst107 = (1.8476126111903601e-13 * fConst0);
	fConst108 = (((fConst107 + -9.7612922063081896e-10) * fConst0) + 2.1988543559095599e-07);
	fConst109 = (9.2311397011758995e-14 * fConst0);
	fConst110 = (((9.4834473341016895e-10 - fConst109) * fConst0) + -2.9410871659843998e-07);
	fConst111 = ((4.2532372550211499e-08 - fConst68) * fConst0);
	fConst112 = (1.53136375880697e-15 * fConst0);
	fConst113 = ((((fConst112 + -9.434817718759091e-10) * fConst0) + 2.1742557081156001e-07) * fConst0);
	fConst114 = (9.0491783086932297e-14 * fConst0);
	fConst115 = ((((fConst114 + 1.8403020142905201e-09) * fConst0) + -5.5537798917328505e-07) * fConst0);
	fConst116 = (1.8389694547530199e-13 * fConst0);
	fConst117 = (((-8.6740013242792904e-10 - fConst116) * fConst0) + 2.9544557440115502e-07);
	fConst118 = (9.1879563065351805e-14 * fConst0);
	fConst119 = (((fConst118 + -2.9410871659849798e-11) * fConst0) + 1.9261834632657699e-21);
	fConst120 = ((fConst48 + 2.66783453714787e-08) * fConst0);
	fConst121 = ((((fConst94 + 5.9176317995957303e-10) * fConst0) + 1.8416465217392899e-07) * fConst0);
	fConst122 = ((((fConst96 + -5.7450693034099703e-10) * fConst0) + -2.568282354006e-07) * fConst0);
	fConst123 = (((-6.05200116791109e-10 - fConst98) * fConst0) + -1.3632897006639301e-07);
	fConst124 = (((fConst100 + 5.8797373471430596e-10) * fConst0) + 1.82347404291033e-07);
	fConst125 = ((fConst58 + 4.3029589308836498e-08) * fConst0);
	fConst126 = ((((fConst103 + 9.544567418702781e-10) * fConst0) + 2.9703976157085298e-07) * fConst0);
	fConst127 = ((((fConst105 + -9.2662408119515504e-10) * fConst0) + -4.14239089355806e-07) * fConst0);
	fConst128 = (((-9.7612922063081896e-10 - fConst107) * fConst0) + -2.1988543559095599e-07);
	fConst129 = (((fConst109 + 9.4834473341016895e-10) * fConst0) + 2.9410871659843998e-07);
	fConst130 = ((-4.2532372550211499e-08 - fConst68) * fConst0);
	fConst131 = ((((-9.434817718759091e-10 - fConst112) * fConst0) + -2.1742557081156001e-07) * fConst0);
	fConst132 = ((((1.8403020142905201e-09 - fConst114) * fConst0) + 5.5537798917328505e-07) * fConst0);
	fConst133 = (((fConst116 + -8.6740013242792904e-10) * fConst0) + -2.9544557440115502e-07);
	fConst134 = (((-2.9410871659849798e-11 - fConst118) * fConst0) + -1.9261834632657699e-21);
	fConst135 = (8.0805164510256806e-15 * fConst0);
	fConst136 = (fConst135 + 1.33321748869929e-09);
	fConst137 = (1.7777136192256499e-16 * fConst0);
	fConst138 = (((fConst137 + 3.0511442392827897e-11) * fConst0) + 4.2601588520195399e-08);
	fConst139 = (1.3676790878316099e-14 * fConst0);
	fConst140 = (((fConst139 + -5.6337966385359703e-11) * fConst0) + -8.8248196057222403e-08);
	fConst141 = (2.76356320346731e-14 * fConst0);
	fConst142 = (((2.14074382094089e-11 - fConst141) * fConst0) + 4.4316836160173897e-08);
	fConst143 = (1.37819344598028e-14 * fConst0);
	fConst144 = ((fConst143 + 4.41163074897658e-12) * fConst0);
	fConst145 = (1.33321748869929e-09 - fConst135);
	fConst146 = (5.3331408576769501e-16 * fConst0);
	fConst147 = (((-3.0511442392827897e-11 - fConst146) * fConst0) + 4.2601588520195399e-08);
	fConst148 = (4.1030372634948298e-14 * fConst0);
	fConst149 = (((5.6337966385359703e-11 - fConst148) * fConst0) + -8.8248196057222403e-08);
	fConst150 = (8.2906896104019301e-14 * fConst0);
	fConst151 = (((fConst150 + -2.14074382094089e-11) * fConst0) + 4.4316836160173897e-08);
	fConst152 = (4.1345803379408503e-14 * fConst0);
	fConst153 = ((-4.41163074897658e-12 - fConst152) * fConst0);
	fConst154 = (-1.33321748869929e-09 - fConst135);
	fConst155 = (((fConst146 + -3.0511442392827897e-11) * fConst0) + -4.2601588520195399e-08);
	fConst156 = (((fConst148 + 5.6337966385359703e-11) * fConst0) + 8.8248196057222403e-08);
	fConst157 = (((-2.14074382094089e-11 - fConst150) * fConst0) + -4.4316836160173897e-08);
	fConst158 = ((fConst152 + -4.41163074897658e-12) * fConst0);
	fConst159 = (fConst135 + -1.33321748869929e-09);
	fConst160 = (((3.0511442392827897e-11 - fConst137) * fConst0) + -4.2601588520195399e-08);
	fConst161 = (((-5.6337966385359703e-11 - fConst139) * fConst0) + 8.8248196057222403e-08);
	fConst162 = (((fConst141 + 2.14074382094089e-11) * fConst0) + -4.4316836160173897e-08);
	fConst163 = ((4.41163074897658e-12 - fConst143) * fConst0);
	fConst164 = (1.0 / fConst2);
	fConst165 = (7.4782915264964696e-19 * fConst0);
	fConst166 = (((((-1.3640208145725999e-16 - fConst165) * fConst12) + 1.30220827983647e-13) * fConst0) + 1.8945705615852701e-16);
	fConst167 = ((((1.1217437289744701e-18 * fConst12) + -9.0690802792252796e-15) * fConst12) + 2.84185584237791e-16);
	fConst168 = (((((1.3640208145725999e-16 - fConst165) * fConst12) + -1.30220827983647e-13) * fConst0) + 1.8945705615852701e-16);
	fConst169 = (((((((fConst1 + -6.8201040728630095e-17) * fConst0) + 4.5345401396126398e-15) * fConst0) + -6.5110413991823704e-14) * fConst0) + 4.7364264039631899e-17);
	fConst170 = (2.6295093346629099e-18 * fConst0);
	fConst171 = (((fConst170 + 8.0321440214030897e-17) * fConst12) + 2.44583514474056e-24);
	fConst172 = ((8.7573118060863102e-21 - (3.9442640019943603e-18 * fConst12)) * fConst0);
	fConst173 = (((fConst170 + -8.0321440214030897e-17) * fConst12) + -2.44583514474056e-24);
	fConst174 = (((((4.0160720107015498e-17 - fConst4) * fConst0) + -4.3786559030431596e-21) * fConst0) + -1.22291757237028e-24);
	fVslider0 = FAUSTFLOAT(0.5);
	fVslider1 = FAUSTFLOAT(0.5);
	fVslider2 = FAUSTFLOAT(0.5);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, Dsp *p)
{
	p->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
	FAUSTFLOAT buf[smp.max_out_count(count)];
	int ReCount = smp.up(count, input0, buf);
	double fSlow0 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow1 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider1))) + -1.0));
	double fSlow2 = (4.748558434412966e-05 * (std::exp((5.0 * double(fVslider2))) + -1.0));
	for (int i = 0; (i < ReCount); i = (i + 1)) {
		fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
		fRec4[0] = (fSlow1 + (0.99299999999999999 * fRec4[1]));
		double fTemp0 = ((fConst0 * (fConst29 + (fRec4[0] * (fConst30 + (fConst31 * fRec4[0]))))) + 1.55486532473694e-06);
		fRec5[0] = (double(buf[i]) - (((((fRec5[1] * ((fConst0 * (fConst14 + (fRec4[0] * (fConst16 + (fConst17 * fRec4[0]))))) + 6.2194612989477701e-06)) + (fRec5[2] * ((fConst12 * ((fRec4[0] * (fConst19 + (fConst20 * fRec4[0]))) + -5.2432300523809199e-11)) + 9.3291919484216602e-06))) + (fRec5[3] * ((fConst0 * (fConst21 + (fRec4[0] * (fConst22 + (fConst23 * fRec4[0]))))) + 6.2194612989477701e-06))) + (fRec5[4] * ((fConst0 * (fConst25 + (fRec4[0] * (fConst27 + (fConst28 * fRec4[0]))))) + 1.55486532473694e-06))) / fTemp0));
		double fTemp1 = (fConst0 * ((fRec4[0] * (((((fRec5[0] * (fConst33 + (fConst34 * fRec4[0]))) + (fRec5[1] * (fConst36 + (fConst12 * (0.0 - (1.9966042517763499e-13 * fRec4[0])))))) + (fConst0 * (fRec5[2] * ((0.0 - (6.6553475059210902e-12 * fRec4[0])) + 1.0049574733940901e-09)))) + (fRec5[3] * (fConst37 + (fConst35 * fRec4[0])))) + (fRec5[4] * (fConst38 + (fConst39 * fRec4[0]))))) / fTemp0));
		fRec3[0] = ((int(signbit(double(fTemp1)))?double(orangedarkterrorp1_negclip(double(fTemp1))):double(orangedarkterrorp1clip(double(fTemp1)))) - (fConst40 * (((fConst42 * fRec3[1]) + (fConst43 * fRec3[2])) + (fConst44 * fRec3[3]))));
		double fTemp2 = (fConst9 * ((((fConst11 * fRec3[0]) + (fConst45 * fRec3[1])) + (fConst46 * fRec3[2])) + (fConst47 * fRec3[3])));
		fRec6[0] = (fSlow2 + (0.99299999999999999 * fRec6[1]));
		double fTemp3 = (fConst120 + (((fRec6[0] * (fConst121 + ((fRec6[0] * (fConst122 + ((fRec6[0] * ((fConst0 * (fConst123 + (fConst124 * fRec6[0]))) + 8.2885183768651307e-06)) + -1.25463302670608e-05))) + -3.6212122362550099e-08))) + (fRec1[0] * (fConst125 + (((fRec6[0] * (fConst126 + ((fRec6[0] * (fConst127 + ((fRec6[0] * ((fConst0 * (fConst128 + (fConst129 * fRec6[0]))) + 1.33685780272018e-05)) + -2.0236016559775399e-05))) + -5.8406648971854901e-08))) + (fRec1[0] * (fConst130 + ((fRec6[0] * (fConst131 + ((fRec6[0] * (fConst132 + ((fRec6[0] * ((fConst0 * (fConst133 + (fConst134 * fRec6[0]))) + -8.7553793784807902e-20)) + -6.6842890136006797e-06))) + 1.351028495429e-05))) + -6.8265143073022003e-06)))) + 6.9274009882480499e-06)))) + 4.2949886127137897e-06));
		fRec2[0] = ((2.5 * (int(signbit(double(fTemp2)))?double(orangedarkterrorp2_negclip(double(fTemp2))):double(orangedarkterrorp2clip(double(fTemp2))))) - ((((fRec2[1] * (fConst49 + (((fRec6[0] * (fConst51 + ((fRec6[0] * (fConst53 + ((fRec6[0] * ((fConst0 * (fConst55 + (fConst57 * fRec6[0]))) + 2.4865555130595399e-05)) + -3.7638990801182298e-05))) + -1.0863636708765001e-07))) + (fRec1[0] * (fConst59 + (((fRec6[0] * (fConst61 + ((fRec6[0] * (fConst63 + ((fRec6[0] * ((fConst0 * (fConst65 + (fConst67 * fRec6[0]))) + 4.0105734081605401e-05)) + -6.0708049679326302e-05))) + -1.75219946915565e-07))) + (fRec1[0] * (fConst69 + ((fRec6[0] * (fConst71 + ((fRec6[0] * (fConst73 + ((fRec6[0] * ((fConst0 * (fConst75 + (fConst77 * fRec6[0]))) + -2.6266138135442398e-19)) + -2.0052867040802101e-05))) + 4.0530854862869898e-05))) + -2.0479542921906598e-05)))) + 2.0782202964744101e-05)))) + 1.2884965838141401e-05))) + (fRec2[2] * (fConst78 + (((fRec6[0] * (fConst79 + ((fRec6[0] * (fConst80 + ((fRec6[0] * ((fConst0 * (fConst81 + (fConst82 * fRec6[0]))) + 2.4865555130595399e-05)) + -3.7638990801182298e-05))) + -1.0863636708765001e-07))) + (fRec1[0] * (fConst83 + (((fRec6[0] * (fConst84 + ((fRec6[0] * (fConst85 + ((fRec6[0] * ((fConst0 * (fConst86 + (fConst87 * fRec6[0]))) + 4.0105734081605401e-05)) + -6.0708049679326302e-05))) + -1.75219946915565e-07))) + (fRec1[0] * (fConst88 + ((fRec6[0] * (fConst89 + ((fRec6[0] * (fConst90 + ((fRec6[0] * ((fConst0 * (fConst91 + (fConst92 * fRec6[0]))) + -2.6266138135442398e-19)) + -2.0052867040802101e-05))) + 4.0530854862869898e-05))) + -2.0479542921906598e-05)))) + 2.0782202964744101e-05)))) + 1.2884965838141401e-05)))) + (fRec2[3] * (fConst93 + (((fRec6[0] * (fConst95 + ((fRec6[0] * (fConst97 + ((fRec6[0] * ((fConst0 * (fConst99 + (fConst101 * fRec6[0]))) + 8.2885183768651307e-06)) + -1.25463302670608e-05))) + -3.6212122362550099e-08))) + (fRec1[0] * (fConst102 + (((fRec6[0] * (fConst104 + ((fRec6[0] * (fConst106 + ((fRec6[0] * ((fConst0 * (fConst108 + (fConst110 * fRec6[0]))) + 1.33685780272018e-05)) + -2.0236016559775399e-05))) + -5.8406648971854901e-08))) + (fRec1[0] * (fConst111 + ((fRec6[0] * (fConst113 + ((fRec6[0] * (fConst115 + ((fRec6[0] * ((fConst0 * (fConst117 + (fConst119 * fRec6[0]))) + -8.7553793784807902e-20)) + -6.6842890136006797e-06))) + 1.351028495429e-05))) + -6.8265143073022003e-06)))) + 6.9274009882480499e-06)))) + 4.2949886127137897e-06)))) / fTemp3));
		fRec0[0] = ((fConst6 * ((fRec1[0] * ((((fRec2[0] * (fConst136 + (fRec6[0] * (fConst138 + (fRec6[0] * (fConst140 + (fRec6[0] * (fConst142 + (fConst144 * fRec6[0]))))))))) + (fRec2[1] * (fConst145 + (fRec6[0] * (fConst147 + (fRec6[0] * (fConst149 + (fRec6[0] * (fConst151 + (fConst153 * fRec6[0])))))))))) + (fRec2[2] * (fConst154 + (fRec6[0] * (fConst155 + (fRec6[0] * (fConst156 + (fRec6[0] * (fConst157 + (fConst158 * fRec6[0])))))))))) + (fRec2[3] * (fConst159 + (fRec6[0] * (fConst160 + (fRec6[0] * (fConst161 + (fRec6[0] * (fConst162 + (fConst163 * fRec6[0]))))))))))) / fTemp3)) - (fConst164 * ((((fConst166 * fRec0[1]) + (fConst167 * fRec0[2])) + (fConst168 * fRec0[3])) + (fConst169 * fRec0[4]))));
		double fTemp4 = (fConst3 * (((((fConst5 * fRec0[0]) + (fConst171 * fRec0[1])) + (fConst172 * fRec0[2])) + (fConst173 * fRec0[3])) + (fConst174 * fRec0[4])));
		buf[i] = FAUSTFLOAT((int(signbit(double(fTemp4)))?double(orangedarkterrorp3_negclip(double(fTemp4))):double(orangedarkterrorp3clip(double(fTemp4)))));
		fRec1[1] = fRec1[0];
		fRec4[1] = fRec4[0];
		for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
			fRec5[j0] = fRec5[(j0 - 1)];
		}
		for (int j1 = 3; (j1 > 0); j1 = (j1 - 1)) {
			fRec3[j1] = fRec3[(j1 - 1)];
		}
		fRec6[1] = fRec6[0];
		for (int j2 = 3; (j2 > 0); j2 = (j2 - 1)) {
			fRec2[j2] = fRec2[(j2 - 1)];
		}
		for (int j3 = 4; (j3 > 0); j3 = (j3 - 1)) {
			fRec0[j3] = fRec0[(j3 - 1)];
		}
	}
	smp.down(buf, output0);
#undef fVslider0
#undef fVslider1
#undef fVslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, Dsp *p)
{
	p->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN: 
		fVslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case SHAPE: 
		fVslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, Dsp *p)
{
	p->connect(port, data);
}


Dsp *plugin() {
	return new Dsp();
}

void Dsp::del_instance(Dsp *p)
{
	delete p;
}

/*
typedef enum
{
   GAIN, 
   SHAPE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace darkterror
