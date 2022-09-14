waitUntil {!isServer && {!isNull player} && {player isEqualTo player}};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Kredi"];
player createDiarySubject ["changelog","Server Kurallari"];
player createDiarySubject ["controls","Tus kombinasyonlari"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

    player createDiaryRecord ["Credits",
        [
            "POWSTA",
                "
<br/>Discord: powsta#5730<br/><br/>
                "
        ]
    ];

        player createDiaryRecord ["changelog",
        [
            "MAVI RPG KURALLARI",
                "
Serverin kurallari an itibari ile tam netlesmemistir.<br/><br/>
Server kurulus tarihi 5 Eylul 2022'dir.<br/>
Kurulus tarihinden itibaren oyuncularin yaptigi hicbir gelisme SIFIRLANMAYACAKTIR (Para ve sahip oldugunuz araclar gibi.).<br/><br/>
Not: Server gelisim asamasinda oldugu icin oyun icindeki envanter surekli guncellenmektedir (Silah ve araclar gibi) onerilerinizi discordtan iletebilirsiniz.<br/><br/>
Keyifli oyunlar dilerim.<br/><br/>

                "
        ]
    ];

// Controls Section

    player createDiaryRecord ["controls",
        [
            "Polis ve doktor kombinasyonlari",
                "
F: Aracin sirenini acar.<br/>
L: Hiz olcer (Sadece polis icin ve silah olarak P07 susturuculu kullanmalisiniz).<br/>
Shift + L: Siren isiklarini acar.<br/>
Windows Tusu: Olen oyuncu eger doktor talebinde bulunduysa, ve envanterinizde `Ilk Yardim Kiti` bulunuyorsa, bu tus sayesinde cesedin basina gidip olen oyuncuyu canlandirabilirsiniz.<br/><br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Sivil kombinasyonlari",
                "
Space: Evinize kutu koymak icin kullanilabilir.<br/>
                "
        ]
    ];
    player createDiaryRecord ["controls",
        [
            "Genel kombinasyonlar",
                "
Y: Oyuncu menusunu acar.<br/>
U: Araba ve evin kapisini kilitler ve acar.<br/>
T: Arac bagajini acar.<br/>
TAB: Teslim olur (Elleri arkaya alir).<br/>
Windows Tusu: Ana etkilesim tusu, mesela atmlerin yanindayken atmlere erismek, tarlalardan urun toplamak icin kullanilir.<br/>
Windows Tusu: Olen oyuncu eger doktor talebinde bulunduysa, ve envanterinizde `Ilk Yardim Kiti` bulunuyorsa, bu tus sayesinde cesedin basina gidip olen oyuncuyu canlandirabilirsiniz.<br/><br/>
Shift + H: Silahinizi arkaya alir.<br/>
Shift + Space: Ziplar.<br/>
H: Gurultuyu azaltmak icin sanal bir kulaklik takar veya cikartir.<br/>

                "
        ]
    ];
