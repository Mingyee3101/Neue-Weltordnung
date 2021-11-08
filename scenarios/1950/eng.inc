##############################
# Country definition for ENG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ENG
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 } }
  capital            = 29 # London
  dissent            = 4
  manpower           = 135
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 2500
  oil            = 500
  supplies       = 10000
  money          = 500
  transports     = 1600
  escorts        = 150

  diplomacy = {
    relation = { tag = AFG value = -75 }
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = 200 access = yes }
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = DEN value = 100 }
    relation = { tag = EGY value = 150 access = yes }
    relation = { tag = FRA value = 150 access = yes }
    relation = {
      tag        = GRE
      value      = 50
      guaranteed = { year = 1939 month = april day = 13 }
    }
    relation = {
      tag        = HOL
      value      = 125
      guaranteed = { year = 1939 month = april day = 19 }
    }
    relation = { tag = IRE value = 50 }
    relation = { tag = IRQ value = 100 access = yes }
    relation = { tag = ITA value = 100 }
    relation = { tag = MEX value = 50 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NOR value = 90 }
    relation = { tag = NZL value = 200 access = yes }
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 access = yes }
    relation = { tag = SIA value = 70 }
    relation = { tag = SWE value = 80 }
    relation = { tag = TUR value = 75 }
    relation = { tag = USA value = 150 }
    relation = { tag = VEN value = -10 }
    relation = { tag = YEM value = 150 }
    relation = { tag = ICL value = 150 }
    relation = { tag = BRU value = 200 }
    relation = { tag = PER value = 100 access = yes }
    relation = { tag = U23 value = 100 access = yes }
    relation = { tag = DFR value = 150 access = yes }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 2 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 5 }

  nationalprovinces      = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 348 429 }
  ownedprovinces         = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 348 387 388 429 803 804 805 806 807 808 809 810 811 812 813 814 815 816 817 839 840 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 896 900 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 993 997 998 1039 1041 1051 1053 1371 1588 1589 1590 1591 1592 1593 1611 1678 1679 1680 1682 1687 1728 1729 1730 1746 1749 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 1997 1998 2045 2086 1038 874 877 1432 }
  controlledprovinces    = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 348 387 388 429 803 804 805 806 807 808 809 810 811 812 813 814 815 816 817 839 840 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 896 900 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 993 997 998 1039 1041 1051 1053 1371 1588 1589 1590 1591 1592 1593 1611 1678 1679 1680 1682 1687 1728 1729 1730 1746 1749 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 1997 1998 2045 2086 1038 874 877 1432 }

  techapps               = { 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 27000 27010 27020 27070 27080 27140 27210 27410 27460 27470 9010 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4300 4310 4320 4330 4340 4040 4070 4100 4350 15030 4050 4080 4110 4116 15060 4890 4600 4400 4170 4280 4450 4180 15120 4610 4620 4630 4120 4130 4140 4150 4160 15100 15110 4800 4810 4820 4220 4230 4240 4246 15160 4700 4710 4190 4200 4210 15140 15150 4290 4250 4260 4270 15180 4740 4750 4760 4770 4780 4790 4850 4860 4440 4460 4900 4910 4920 4930 4940 4950 4960 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2170 2180 2850 2190 2200 2100 2110 2120 2126 2130 2860 2870 2880 2020 2150 2160 2890 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2220 2230 2240 2250 11030 2400 2410 2420 2430 2970 2370 2380 2390 2800 2450 21180 21190 21200 2460 2470 2480 2490 2500 2810 2820 2510 2520 2530 2540 22910 22920 22930 22940 2980 2260 2270 2280 21070 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 53040 5560 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 53060 5760 5410 5416 5417 5420 5426 5430 5440 5466 5450 5460 5190 5200 5210 5220 5230 5240 53020 53190 5470 5480 5490 5500 5510 5520 5530 5540 5600 5610 5620 5630 5640 5650 5660 14000 14010 14020 14030 14040 5920 5930 5940 5950 5960 5970 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 13390 13400 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1430 1470 1480 1490 1560 1570 1580 1590 1600 1610 1620 1630 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199120 199130 199140 199150 6500 6510 6530 6580 6610 6680 6620 6630 6640 6710 6650 6660 6670 6540 6910 6900 6010 6020 6040 6050 6060 6070 6080 6100 6090 14050 6790 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8900 8910 8920 8930 8940 8950 8960 8970 8980 81050 81060 81650 81850 81860 81870 81880 81890 81900 81910 81700 81710 81720 81730 81740 81750 81760 82100 82110 82300 82310 82320 82330 7990 82500 82510 82520 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 3170 12190 12200 3210 3220 3230 3240 3250 3260 12020 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3490 12050 3510 3520 3530 3540 3550 12060 3560 12100 12110 12120 12130 12140 12150 12160 3610 3620 3630 3640 3650 3660 3670 3680 3710 3810 3820 3830 3840 3850 3900 3910 3920 3930 3890 3960 3720 3730 3736 3740 3750 3760 3770 3780 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7100 7110 7120 7140 7150 16000 7170 7180 7190 16010 7810 7270 7620 7630 9000 30000 30020 30030 30040 30070 }
  inventions             = { 3000011 3000012 3000015 3000016 3000017 3000018 3000019 3000020 3000024 3000026 3000027 3000028 3000031 3000041 3000045 3000046 3000047 3000049 3000052 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 8
    freedom           = 10
    free_market       = 8
    professional_army = 3
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 10014 } # George VI
  headofgovernment       = { type = 9 id = 10019 } # Clement Attlee
  foreignminister        = { type = 9 id = 10024 } # Ernest Bevin
  armamentminister       = { type = 9 id = 10044 } # Stafford Cripps
  ministerofsecurity     = { type = 9 id = 10065 } # James Chuter Ede
  ministerofintelligence = { type = 9 id = 10080 } # Brendan Bracken
  chiefofstaff           = { type = 9 id = 10097 } # Bernard Montgomery
  chiefofarmy            = { type = 9 id = 10196 } # William Slim
  chiefofnavy            = { type = 9 id = 10201 } # R.B. Bruce-Fraser
  chiefofair             = { type = 9 id = 10205 } # John Slessor
  dormant_leaders        = { 10083 10313 }
  dormant_ministers      = { 10001 10002 10004 10005 10006 10007 10008 10009 10010 10011 10017 10020 10022 10026 10029 10030 10031 10045 10050 10058 10059 10066 10081 10093 10098 10101 10102 10107 10112 10114 10128 10130 10039 10091 10103 10105 10109 10119 10131 10141 10142 }

  landunit = {
    id       = { type = 30251 id = 1 }
    name     = "I Corps"
    location = 25
    division = {
      id             = { type = 30254 id = 1 }
      name           = "3rd Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
    }
    division = {
      id             = { type = 30254 id = 2 }
      name           = "49th (West Riding) Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 3 }
      name           = "53rd (Welsh) Infantry Division"
      type           = motorized
      model          = 4
    }
    division = {
      id             = { type = 30254 id = 4 }
      name           = "52nd (Lowland) Infantry Division"
      type           = motorized
      model          = 4
    }
    division = {
      id             = { type = 30254 id = 5 }
      name           = "Guards Infantry Division"
      type           = motorized
      model          = 4
      extra          = light_armor_brigade
      brigade_model  = 8
    }
  }
  landunit = {
    id       = { type = 30251 id = 2 }
    name     = "VIII Corps"
    location = 29
    division = {
      id             = { type = 30254 id = 7 }
      name           = "7th Armoured Division"
      type           = armor
      model          = 4
      extra          = heavy_armor
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 8 }
      name           = "11th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 9 }
      name           = "55th (West Lancashire) Infantry Division"
      type           = motorized
      model          = 4
    }
    division = {
      id             = { type = 30254 id = 10 }
      name           = "1st Parachute Brigade"
      type           = paratrooper
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30254 id = 11 }
      name           = "15th (Scottish) Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
    }
  }
  landunit = {
    id       = { type = 30251 id = 3 }
    name     = "XXX Corps"
    location = 25
    division = {
      id             = { type = 30254 id = 12 }
      name           = "43rd (Wessex) Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
    }
    division = {
      id             = { type = 30254 id = 13 }
      name           = "5th Infantry Division"
      type           = motorized
      model          = 4
    }
    division = {
      id             = { type = 30254 id = 14 }
      name           = "51st (Highland) Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
    }
    division = {
      id             = { type = 30254 id = 15 }
      name           = "Guards Armoured Division"
      type           = armor
      model          = 4
      extra          = heavy_armor
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 16 }
      name           = "305th Infantry Brigade"
      type           = motorized
      model          = 4
      strength       = 35
      max_strength   = 35
    }
    division = {
      id             = { type = 30254 id = 17 }
      name           = "301st Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      strength       = 35
      max_strength   = 35
    }
  }
  landunit = {
    id       = { type = 30251 id = 4 }
    name     = "West Command HQ"
    location = 29
    division = {
      id             = { type = 30254 id = 18 }
      name           = "West Command HQ"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
    }
  }
  landunit = {
    id       = { type = 30251 id = 5 }
    name     = "East Command HQ"
    location = 29
    division = {
      id             = { type = 30254 id = 19 }
      name           = "East Command HQ"
      type           = hq
      model          = 5
    }
  }
  landunit = {
    id       = { type = 30251 id = 6 }
    name     = "V Corps"
    location = 29
    division = {
      id             = { type = 30254 id = 20 }
      name           = "6th Armoured Division"
      type           = armor
      model          = 4
      extra          = heavy_armor
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 21 }
      name           = "56th (London) Infantry Division"
      type           = motorized
      model          = 4
      extra          = light_armor_brigade
      brigade_model  = 8
    }
    division = {
      id             = { type = 30254 id = 22 }
      name           = "78th Infantry Division"
      type           = motorized
      model          = 4
      extra          = light_armor_brigade
      brigade_model  = 8
    }
  }
  landunit = {
    id       = { type = 30251 id = 8 }
    name     = "X Corps"
    location = 29
    division = {
      id             = { type = 30254 id = 25 }
      name           = "10th Mechanized Division"
      type           = mechanized
      model          = 2
      extra          = sp_artillery
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 26 }
      name           = "4th Mechanized Division"
      type           = mechanized
      model          = 2
      extra          = tank_destroyer
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 27 }
      name           = "1st Mechanized Division"
      type           = mechanized
      model          = 2
    }
  }
  landunit = {
    id       = { type = 30251 id = 9 }
    name     = "14th Army HQ"
    location = 1432
    division = {
      id             = { type = 30254 id = 29 }
      name           = "14th Army HQ"
      type           = hq
      model          = 5
      extra          = engineer
      brigade_model  = 5
    }
  }
  landunit = {
    id       = { type = 30251 id = 10 }
    name     = "XV Corps"
    location = 29
    division = {
      id             = { type = 30254 id = 30 }
      name           = "82nd Infantry Division"
      type           = motorized
      model          = 4
    }
    division = {
      id             = { type = 30254 id = 31 }
      name           = "81st Mechanized Division"
      type           = mechanized
      model          = 2
    }
    division = {
      id             = { type = 30254 id = 32 }
      name           = "26th Mechanized Division"
      type           = mechanized
      model          = 2
    }
    division = {
      id             = { type = 30254 id = 33 }
      name           = "11th Armored Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
    }
    division = {
      id             = { type = 30254 id = 34 }
      name           = "12th Armored Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
    }
  }

  navalunit = {
    id       = { type = 30252 id = 1 }
    name     = "Home Fleet"
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 110 }
      name           = "HMS Illustrious"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 304 }
      name           = "HMS Ocean"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 305 }
      name           = "HMS Pioneer"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 100 }
      name           = "HMS Queen Elizabeth"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 75 }
      name           = "HMS Swiftsure"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 31 }
      name           = "HMS Birmingham"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 37 }
      name           = "HMS Bellona"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 72 }
      name           = "HMS Black Prince"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 73 }
      name           = "HMS Diadem"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 55 }
      name           = "HMS Danae"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 10 }
      name           = "1st Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 11 }
      name           = "2nd Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 12 }
      name           = "3rd Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 13 }
      name           = "4th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 14 }
      name           = "5th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
  }
  navalunit = {
    id       = { type = 30252 id = 2 }
    name     = "Reserve Fleet"
    location = 36
    base     = 36
    division = {
      id             = { type = 30255 id = 6 }
      name           = "HMS Kent"
      type           = heavy_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 30255 id = 56 }
      name           = "HMS Hawkins"
      type           = heavy_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 30255 id = 24 }
      name           = "HMS Cardiff"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 30255 id = 38 }
      name           = "6th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 39 }
      name           = "7th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
  }
  navalunit = {
    id       = { type = 30252 id = 306 }
    name     = "Devonport Yards"
    location = 27
    base     = 27
    division = {
      id             = { type = 30255 id = 2 }
      name           = "HMS Furious"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 1 }
      name           = "HMS Argus"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 112 }
      name           = "HMS Valiant"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 23 }
      name           = "HMS Norfolk"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 69 }
      name           = "HMS Mauritius"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 63 }
      name           = "HMS Ajax"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 61 }
      name           = "HMS Despatch"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 307 }
    name     = "Chatham Naval Yard"
    location = 26
    base     = 26
    division = {
      id             = { type = 30255 id = 57 }
      name           = "HMS Frobisher"
      type           = heavy_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      extra3         = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division = {
      id             = { type = 30255 id = 118 }
      name           = "HMS Kenya"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 58 }
      name           = "HMS Arethusa"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 40 }
      name           = "HMS Dido"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 41 }
      name           = "HMS Phoebe"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 67 }
      name           = "HMS Scylla"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 104 }
      name           = "HMS Delhi"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
  navalunit = {
    id       = { type = 30252 id = 308 }
    name     = "Plymouth Reserve"
    location = 20
    base     = 20
    division = {
      id             = { type = 30255 id = 105 }
      name           = "HMS Caledon"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 30255 id = 25 }
      name           = "HMS Capetown"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 30255 id = 70 }
      name           = "HMS Ceres"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division = {
      id             = { type = 30255 id = 80 }
      name           = "HMS Colombo"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 3 }
    name     = "Mediterranean Squadron"
    location = 388
    base     = 388
    division = {
      id             = { type = 30255 id = 64 }
      name           = "HMS Orion"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = naval_radar_s
      brigade_model1 = 2
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 68 }
      name           = "HMS Sirius"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 43 }
      name           = "8th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 44 }
      name           = "9th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 45 }
      name           = "10th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 46 }
      name           = "11th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 47 }
      name           = "12th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 48 }
      name           = "13th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 49 }
      name           = "14th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
  }
  navalunit = {
    id       = { type = 30252 id = 4 }
    name     = "Force A"
    location = 27
    base     = 27
    division = {
      id             = { type = 30255 id = 50 }
      name           = "HMS Warspite"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 53 }
      name           = "HMS Rodney"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 109 }
      name           = "HMS Suffolk"
      type           = heavy_cruiser
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 5 }
    name     = "Egypt Squadron"
    location = 789
    base     = 789
    division = {
      id             = { type = 30255 id = 29 }
      name           = "HMS Liverpool"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 106 }
      name           = "HMS Aurora"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 83 }
      name           = "15th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 84 }
      name           = "16th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30255 id = 85 }
      name           = "17th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 86 }
      name           = "18th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 81 }
      name           = "19th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 82 }
      name           = "20th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 79 }
      name           = "21st Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30255 id = 87 }
      name           = "22nd Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30255 id = 88 }
      name           = "23rd Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30255 id = 89 }
      name           = "24th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 90 }
      name           = "25th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 91 }
      name           = "26th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_fire_controll_s
      brigade_model1 = 1
    }
    division = {
      id             = { type = 30255 id = 92 }
      name           = "27th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 76 }
      name           = "34th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 30255 id = 77 }
      name           = "35th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = none
      brigade_model1 = 0
    }
    division = {
      id             = { type = 30255 id = 78 }
      name           = "36th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 6 }
    name     = "East Indies Force"
    location = 1511
    base     = 1511
    division = {
      id             = { type = 30255 id = 94 }
      name           = "HMS Ceylon"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 93 }
      name           = "HMS Nigeria"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 95 }
      name           = "28th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
    division = {
      id             = { type = 30255 id = 96 }
      name           = "29th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
    }
    division = {
      id             = { type = 30255 id = 97 }
      name           = "30th Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
    }
  }
  navalunit = {
    id       = { type = 30252 id = 7 }
    name     = "Eastern Fleet"
    location = 1511
    base     = 1511
    division = {
      id             = { type = 30255 id = 16 }
      name           = "HMS Anson"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 17 }
      name           = "HMS Howe"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 102 }
      name           = "HMS Caradoc"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 120 }
      name           = "33rd Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
  }
  navalunit = {
    id       = { type = 30252 id = 8 }
    name     = "China Fleet"
    location = 1371
    base     = 1371
    division = {
      id             = { type = 30255 id = 74 }
      name           = "HMS Implacable"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 99 }
      name           = "HMS Indomitable"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 300 }
      name           = "HMS Colossus"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 303 }
      name           = "HMS Glory"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 301 }
      name           = "HMS Vengeance"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 66 }
      name           = "HMS Belfast"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 30 }
      name           = "HMS Bermuda"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 71 }
      name           = "HMS Argonaut"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 35 }
      name           = "HMS Euryalus"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 107 }
      name           = "31st Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
  }
  navalunit = {
    id       = { type = 30252 id = 9 }
    name     = "Indian Ocean Squadron"
    location = 1509
    base     = 1509
    division = {
      id             = { type = 30255 id = 114 }
      name           = "HMS London"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 34 }
      name           = "HMS Cleopatra"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 10 }
    name     = "Far East Fleet"
    location = 1729
    base     = 1729
    division = {
      id             = { type = 30255 id = 111 }
      name           = "HMS Indefatigable"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 3 }
      name           = "HMS Formidable"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 98 }
      name           = "HMS Victorious"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 15 }
      name           = "HMS Unicorn"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
    }
    division = {
      id             = { type = 30255 id = 4 }
      name           = "HMS Duke of York"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 18 }
      name           = "HMS King George V"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 22 }
      name           = "HMS Erebus, Roberts & Abercrombie"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 1
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 5 }
      name           = "HMS Berwick"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 9 }
      name           = "HMS Devonshire"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 32 }
      name           = "HMS Newfoundland"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 119 }
      name           = "32nd Destroyer Flotilla"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
    }
  }
  navalunit = {
    id       = { type = 30252 id = 309 }
    name     = "Malaya Force"
    location = 1432
    base     = 1432
    division = {
      id             = { type = 30255 id = 302 }
      name           = "HMS Venerable"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 3
    }
    division = {
      id             = { type = 30255 id = 54 }
      name           = "HMS Nelson"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
    }
    division = {
      id             = { type = 30255 id = 117 }
      name           = "HMS Cumberland"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 113 }
      name           = "HMS Sussex"
      type           = heavy_cruiser
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 7 }
      name           = "HMS Jamaica"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 42 }
      name           = "HMS Royalist"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 310 }
    name     = "Rosyth Navy Yard"
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 101 }
      name           = "HMS Renown"
      type           = battlecruiser
      model          = 4
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = naval_anti_air_l
      extra4         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 5
      brigade_model4 = 3
    }
    division = {
      id             = { type = 30255 id = 108 }
      name           = "HMS Newcastle"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 8 }
      name           = "HMS Sheffield"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 59 }
      name           = "HMS Emerald"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 26 }
      name           = "HMS Dauntless"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 28 }
      name           = "HMS Diomede"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 311 }
    name     = "Tynemouth Yards"
    location = 25
    base     = 25
    division = {
      id             = { type = 30255 id = 65 }
      name           = "HMS Glasgow"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
    division = {
      id             = { type = 30255 id = 36 }
      name           = "HMS Leander"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
    }
  }
  navalunit = {
    id       = { type = 30252 id = 11 }
    name     = "1st Submarine Squadron"
    location = 23
    base     = 23
    division = {
      id             = { type = 30255 id = 121 }
      name           = "1st Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 122 }
      name           = "2nd Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 123 }
      name           = "24st Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 124 }
      name           = "25th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 12 }
    name     = "3rd Submarine Squadron"
    location = 36
    base     = 36
    division = {
      id             = { type = 30255 id = 125 }
      name           = "3rd Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 126 }
      name           = "4th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 127 }
      name           = "5th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 128 }
      name           = "6th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 129 }
      name           = "7th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 13 }
    name     = "4th Submarine Squadron"
    location = 1509
    base     = 1509
    division = {
      id             = { type = 30255 id = 130 }
      name           = "8th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 131 }
      name           = "9th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 132 }
      name           = "10th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 14 }
    name     = "5th Submarine Squadron"
    location = 27
    base     = 27
    division = {
      id             = { type = 30255 id = 133 }
      name           = "11th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 134 }
      name           = "12th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 135 }
      name           = "13th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 15 }
    name     = "6th Submarine Squadron"
    location = 23
    base     = 23
    division = {
      id             = { type = 30255 id = 136 }
      name           = "14th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 16 }
    name     = "7th Submarine Squadron"
    location = 36
    base     = 36
    division = {
      id             = { type = 30255 id = 137 }
      name           = "15th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 138 }
      name           = "16th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 139 }
      name           = "17th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 140 }
      name           = "18th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 17 }
    name     = "8th Submarine Squadron"
    location = 1511
    base     = 1511
    division = {
      id             = { type = 30255 id = 141 }
      name           = "19th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 142 }
      name           = "20th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 18 }
    name     = "9th Submarine Squadron"
    location = 7
    base     = 7
    division = {
      id             = { type = 30255 id = 143 }
      name           = "21th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
    division = {
      id             = { type = 30255 id = 144 }
      name           = "22th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 19 }
    name     = "10th Submarine Squadron"
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 145 }
      name           = "23th Submarine Flotilla"
      type           = submarine
      model          = 7
    }
  }
  navalunit = {
    id       = { type = 30252 id = 20 }
    name     = "1st Transport Squadron"
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 146 }
      name           = "Suffolk Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 147 }
      name           = "Trojan Star Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 148 }
      name           = "Queen Mary Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 149 }
      name           = "Nieuw Amsterdam Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 150 }
      name           = "Strathenden Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 151 }
      name           = "Fort Edmonton Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 152 }
      name           = "Lars Bay Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 153 }
      name           = "Fort Langley Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 154 }
      name           = "King Ethelred Flotilla"
      type           = transport
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 30252 id = 21 }
    name     = "2nd Transport Squadron"
    location = 5
    base     = 5
    division = {
      id             = { type = 30255 id = 155 }
      name           = "Dominion Monarch Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 156 }
      name           = "Empire Arquebus Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 157 }
      name           = "Hororata Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 158 }
      name           = "Henry the VIII Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 159 }
      name           = "The Bishops Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 160 }
      name           = "Empire of India Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 161 }
      name           = "Empire of Africa Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 162 }
      name           = "Royal Caledonian Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 163 }
      name           = "Royal Sovereign Flotilla"
      type           = transport
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 30252 id = 22 }
    name     = "3rd Transport Squadron"
    location = 27
    base     = 27
    division = {
      id             = { type = 30255 id = 164 }
      name           = "Queen Elizabeth Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 165 }
      name           = "Empress of Canada Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 166 }
      name           = "Clan Macauley Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 167 }
      name           = "Samfleet Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 168 }
      name           = "Samfreedom Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 169 }
      name           = "Samfoyle Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 170 }
      name           = "Samconstant Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 171 }
      name           = "Samleyte Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 172 }
      name           = "Samfaithful Flotilla"
      type           = transport
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 30252 id = 23 }
    name     = "4th Transport Squadron"
    location = 388
    base     = 388
    division = {
      id             = { type = 30255 id = 173 }
      name           = "Empire Captain Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 174 }
      name           = "Andes Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 175 }
      name           = "Empire Charmain Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 176 }
      name           = "Samoresby Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 177 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 178 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 179 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 180 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 181 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 30252 id = 24 }
    name     = "5th Transport Squadron"
    location = 388
    base     = 388
    division = {
      id             = { type = 30255 id = 182 }
      name           = "Essex Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 183 }
      name           = "Maloja Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 184 }
      name           = "Empire Chieftain Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 185 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 186 }
      name           = "7th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 187 }
      name           = "8th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 188 }
      name           = "9th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 189 }
      name           = "10th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 190 }
      name           = "11th Transport Flotilla"
      type           = transport
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 30252 id = 25 }
    name     = "6th Transport Squadron"
    location = 1432
    base     = 1432
    division = {
      id             = { type = 30255 id = 191 }
      name           = "Stirling Castle Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 192 }
      name           = "Empire Splendour Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 193 }
      name           = "Sam Torch Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 194 }
      name           = "12th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 195 }
      name           = "13th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 196 }
      name           = "14th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 197 }
      name           = "15th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 198 }
      name           = "16th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 199 }
      name           = "17th Transport Flotilla"
      type           = transport
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 30252 id = 26 }
    name     = "7th Transport Squadron"
    location = 1415
    base     = 1415
    division = {
      id             = { type = 30255 id = 200 }
      name           = "Resolution Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 201 }
      name           = "Fort Dunvegan Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 202 }
      name           = "Durham Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 203 }
      name           = "18th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 204 }
      name           = "19th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 205 }
      name           = "20th Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 206 }
      name           = "21st Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 207 }
      name           = "22nd Transport Flotilla"
      type           = transport
      model          = 4
    }
    division = {
      id             = { type = 30255 id = 208 }
      name           = "23rd Transport Flotilla"
      type           = transport
      model          = 4
    }
  }

  airunit = { 
    id       = { type = 30253 id = 1 }
    name     = "10th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 1 }
      name           = "No.126 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 2 }
      name           = "No.165 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 3 }
      name           = "No.406 Squadron RCAF"
      type           = tactical_bomber
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 4 }
      name           = "No.464 Squadron RAAF"
      type           = tactical_bomber
      model          = 10
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 2 }
    name     = "11th Group"
    location = 147
    base     = 147
    division = {
      id             = { type = 30256 id = 5 }
      name           = "No.1 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 6 }
      name           = "No.501 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 7 }
      name           = "No.219 Squadron"
      type           = tactical_bomber
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 8 }
      name           = "No.29 Squadron"
      type           = tactical_bomber
      model          = 10
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 3 }
    name     = "2nd TAF/1"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 9 }
      name           = "No.3 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 10 }
      name           = "No.33 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 11 }
      name           = "No.245 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 12 }
      name           = "No.694 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 4 }
    name     = "2nd TAF/2"
    location = 27
    base     = 27
    division = {
      id             = { type = 30256 id = 13 }
      name           = "No.65 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 14 }
      name           = "No.181 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 15 }
      name           = "No.401 Squadron RCAF"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 16 }
      name           = "No.610 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 5 }
    name     = "12th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 17 }
      name           = "No.168 Squadron"
      type           = multi_role
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 30256 id = 18 }
      name           = "No.25 Squadron"
      type           = tactical_bomber
      model          = 10
      strength       = 75
    }
    division = {
      id             = { type = 30256 id = 19 }
      name           = "No.264 Squadron"
      type           = tactical_bomber
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 20 }
      name           = "No.303 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 6 }
    name     = "13th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 21 }
      name           = "No.504 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 22 }
      name           = "No.412 Squadron RCAF"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 23 }
      name           = "No.308 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 7 }
    name     = "14th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 24 }
      name           = "No.118 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 25 }
      name           = "No.441 Squadron RCAF"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 26 }
      name           = "No.331 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 8 }
    name     = "38th Group"
    location = 5
    base     = 5
    division = {
      id             = { type = 30256 id = 27 }
      name           = "No.190 Squadron"
      type           = naval_bomber
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 28 }
      name           = "No.297 Squadron"
      type           = naval_bomber
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 29 }
      name           = "No.570 Squadron"
      type           = naval_bomber
      model          = 6
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 9 }
    name     = "No.603 Squadron"
    location = 145
    base     = 145
    division = {
      id             = { type = 30256 id = 30 }
      name           = "No.603 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 10 }
    name     = "No.43 Squadron"
    location = 348
    base     = 348
    division = {
      id             = { type = 30256 id = 31 }
      name           = "No.43 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 11 }
    name     = "1/SEAC Air Forces"
    location = 1447
    base     = 1447
    division = {
      id             = { type = 30256 id = 32 }
      name           = "17/.67./81. Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 33 }
      name           = "136./155. Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 34 }
      name           = "607./615. Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 35 }
      name           = "28./30. Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 12 }
    name     = "2/SEAC Air Forces"
    location = 388
    base     = 388
    division = {
      id             = { type = 30256 id = 36 }
      name           = "5./11./20. Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 37 }
      name           = "42./34./42. Squadron"
      type           = cas
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 38 }
      name           = "60./79. Squadron"
      type           = cas
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 39 }
      name           = "No.183 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 13 }
    name     = "3/SEAC Air Forces"
    location = 1459
    base     = 1459
    division = {
      id             = { type = 30256 id = 40 }
      name           = "200./203./215. Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 41 }
      name           = "99./159. Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 42 }
      name           = "292./355./356. Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 43 }
      name           = "No.429 Squadron RCAF"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 14 }
    name     = "4/SEAC Air Forces"
    location = 1459
    base     = 1459
    division = {
      id             = { type = 30256 id = 44 }
      name           = "27./47./88. Squadron"
      type           = naval_bomber
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 45 }
      name           = "176./177./211. Squadron"
      type           = naval_bomber
      model          = 6
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 15 }
    name     = "5/SEAC Air Forces"
    location = 789
    base     = 789
    division = {
      id             = { type = 30256 id = 46 }
      name           = "31./62./117. Squadron"
      type           = transport_plane
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 47 }
      name           = "194./435./436. Squadron"
      type           = transport_plane
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 48 }
      name           = "45. Squadron"
      type           = tactical_bomber
      model          = 10
      strength       = 40
    }
    division = {
      id             = { type = 30256 id = 49 }
      name           = "No.692 Squadron"
      type           = tactical_bomber
      model          = 10
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 16 }
    name     = "1st Group"
    location = 20
    base     = 20
    division = {
      id             = { type = 30256 id = 50 }
      name           = "No.12 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 51 }
      name           = "No.103 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 52 }
      name           = "No.300 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 53 }
      name           = "No.576 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 17 }
    name     = "3rd Group"
    location = 18
    base     = 18
    division = {
      id             = { type = 30256 id = 54 }
      name           = "No.15 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 55 }
      name           = "No.115 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 56 }
      name           = "No.218 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 57 }
      name           = "No.106 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 18 }
    name     = "4th Group"
    location = 25
    base     = 25
    division = {
      id             = { type = 30256 id = 58 }
      name           = "No.10 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 59 }
      name           = "No.76 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 60 }
      name           = "No.78 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 61 }
      name           = "No.640 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 19 }
    name     = "5th Group"
    location = 18
    base     = 18
    division = {
      id             = { type = 30256 id = 62 }
      name           = "No.9 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 63 }
      name           = "No.49 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 64 }
      name           = "No.467 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 65 }
      name           = "No.619 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 20 }
    name     = "6th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 66 }
      name           = "No.408 Squadron RCAF"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 67 }
      name           = "No.424 Squadron RCAF"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 68 }
      name           = "No.427 Squadron RCAF"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 69 }
      name           = "No.432 Squadron RCAF"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 21 }
    name     = "8th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 70 }
      name           = "No.7 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 75
    }
    division = {
      id             = { type = 30256 id = 71 }
      name           = "No.156 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 72 }
      name           = "No.582 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 73 }
      name           = "No.346 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 22 }
    name     = "16th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 74 }
      name           = "No.313 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 75 }
      name           = "No.64 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 76 }
      name           = "No.332 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 77 }
      name           = "No.132 Squadron"
      type           = multi_role
      model          = 9
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 23 }
    name     = "18th Group"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 78 }
      name           = "No.184 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 79 }
      name           = "No.80 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 80 }
      name           = "No.137 Squadron"
      type           = interceptor
      model          = 12
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 81 }
      name           = "No.416 Squadron RCAF"
      type           = interceptor
      model          = 12
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 523 }
    name     = "Meteor Mk III"
    location = 26
    base     = 26
    division = {
      id             = { type = 30256 id = 578 }
      name           = "Meteor Mk I Group"
      type           = interceptor
      model          = 12
    }
  }
  airunit = { 
    id       = { type = 30253 id = 24 }
    name     = "9th Group"
    location = 145
    base     = 145
    division = {
      id             = { type = 30256 id = 82 }
      name           = "82./84./110. Squadron"
      type           = cas
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 83 }
      name           = "258./261./273. Squadron"
      type           = cas
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 84 }
      name           = "135./146./152. Squadron"
      type           = cas
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 85 }
      name           = "113./123./134. Squadron"
      type           = cas
      model          = 5
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 30253 id = 25 }
    name     = "7th Group"
    location = 10
    base     = 10
    division = {
      id             = { type = 30256 id = 86 }
      name           = "No.61 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
    division = {
      id             = { type = 30256 id = 87 }
      name           = "No.625 Squadron"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
    }
  }
}
