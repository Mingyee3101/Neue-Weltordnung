##############################
# Country definition for JAP #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = JAP
  puppet             = USA
  control            = USA
  name               = "State of Japan"
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 1552 # Tokyo
  manpower           = 50
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 30000
  oil            = 2000
  supplies       = 5000
  money          = 120
  transports     = 1220
  escorts        = 81

  diplomacy = {
    relation = { tag = USA value = 200 access = yes }
  }
  SpyInfo                = { country = "JAP" NumberOfSpies = 9 }

  nationalprovinces      = { 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1562 1555 1547 1548 1546 }
  ownedprovinces         = { 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1562 1555 1547 1548 1546 }
  controlledprovinces    = { 1544 1545 1549 1551 1550 1556 1552 1557 1558 1553 1554 1559 1560 1561 1562 1555 1547 1548 1546 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5130 5140 5800 5080 5090 5100 5310 54010 54020 54030 5320 5360 5316 5326 5327 5350 5700 5710 5010 5020 5030 5410 5416 5417 5420 5426 5430 5190 5200 5470 5480 5600 5610 5620 5560 7550 5940 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1560 1570 1580 1590 1600 1670 1680 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 199100 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2070 2050 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2400 2800 2450 21180 21190 21200 2460 2810 2820 2510 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6390 6400 6420 6410 6430 6440 6900 14000 14010 14020 14030 3110 3120 3130 3140 3150 3160 12010 3410 3420 3430 3440 3450 3456 3460 3470 3490 3310 3320 3330 3340 3350 3210 3220 3230 3240 3250 3260 3010 3020 3030 3040 3050 3060 3070 12000 3610 3620 3630 3640 3650 3660 3670 12100 12110 12120 12130 12140 3510 3520 3530 3540 3550 3720 3730 3736 3740 3750 3760 3900 3910 3770 3810 3820 3830 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8170 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 8980 81650 81700 81710 81720 81730 81740 81850 81860 81870 81880 82300 82310 82320 82500 82510 4400 4170 4280 4450 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 4050 4600 4610 4620 4630 4120 4130 4140 4150 4700 4710 4190 4200 4210 4290 4250 4300 4310 4320 4330 4340 4040 4070 4100 4740 4750 4760 4770 4780 4790 4850 4800 4810 4820 4900 4910 4920 4930 4940 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9350 9230 9240 1260 }
  blueprints             = { 81730 81740 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 4
    freedom           = 8
    free_market       = 9
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 50001 } # Hirohito
  headofgovernment       = { type = 9 id = 50029 } # Yoshida Shigeru
  foreignminister        = { type = 9 id = 50038 } # Yoshida Shigeru
  armamentminister       = { type = 9 id = 50061 } # Ogasawara Sankuro
  ministerofsecurity     = { type = 9 id = 50085 } # Yamazaki Iwao
  ministerofintelligence = { type = 9 id = 50113 } # Horikiri Zenjiro
  chiefofstaff           = { type = 9 id = 50411 } # Masayoshi Ohira
  chiefofarmy            = { type = 9 id = 50412 } # Zenko Suzuki
  chiefofnavy            = { type = 9 id = 50413 } # Masashi Ishibashi
  chiefofair             = { type = 9 id = 50414 } # Noboru Takeshita
  dormant_ministers      = { 50002 50020 50013 50014 50021 50003 50042 50047 50039 50040 50041 50004 50005 50086 50087 50088 50095 50006 50114 50007 50008 50158 50015 50016 50044 50062 50072 50089 50096 50097 50098 50099 50100 50116 50121 50133 50142 50148 50156 }
  dormant_teams          = { 50070 50071 50072 50073 50074 }

  landunit = {
    id       = { type = 9061 id = 1 }
    name     = "Tokio Defence Corps"
    location = 1552
    division = {
      id             = { type = 9061 id = 2 }
      name           = "3rd Division"
      type           = infantry
      model          = 13
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 9061 id = 5 }
    name     = "Osaka Defence Corps"
    location = 1553
    division = {
      id             = { type = 9061 id = 6 }
      name           = "1st Division"
      type           = infantry
      model          = 13
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 9061 id = 9 }
    name     = "Sapporo Defence Corps"
    location = 1545
    division = {
      id             = { type = 9061 id = 10 }
      name           = "2nd Division"
      type           = infantry
      model          = 13
      strength       = 100
    }
  }
}
