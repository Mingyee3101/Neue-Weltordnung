##############################
# Country definition for SIB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIB
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1142 # Novosibirsk
  dissent            = 5
  manpower           = 250
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 900
  supplies       = 750
  money          = 50

  diplomacy = {
    relation = { tag = MON value = 0 }
    relation = { tag = CHC value = -50 }
    relation = { tag = CHI value = -50 }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "SIB" NumberOfSpies = 2 }

  nationalprovinces      = { 1069 1070 1161 1163 1164 1165 1166 1155 1177 1180 1182 1178 1179 1181 1183 1184 1157 1158 1148 1152 1154 1156 1153 1128 1151 1127 1132 1137 1136 1135 1150 1138 1139 1141 1149 1142 1143 1145 1147 1144 1140 1146 1162 1167 1169 1168 1170 1176 1171 1189 1186 1187 1188 1175 1174 1190 1185 1195 1194 1196 1193 1192 1191 }
  ownedprovinces         = { 1155 1157 1158 1148 1156 1149 1141 1140 1146 1143 1145 1147 1144 1142 }
  controlledprovinces    = { 1155 1157 1158 1148 1156 1149 1141 1140 1146 1147 1145 1143 1142 1144 }

  techapps               = { 5810 5820 5830 5050 5060 5070 5130 5140 5160 5180 5800 5080 5090 5100 5310 54010 54020 54030 5320 5316 5326 5327 5350 5360 5700 5710 5010 5020 5030 5410 5416 5417 5190 5200 5470 5480 5600 5610 5620 5630 5560 5920 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1560 1570 1580 1670 1396 1400 1410 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130 199140 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2100 2110 2070 2080 2090 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2220 2230 2240 2980 2400 2410 2420 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2530 2170 2180 2190 2970 14000 14010 14020 14030 14040 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6570 6300 6900 6310 6320 6330 6340 6350 6370 6360 3110 3120 3130 3140 3150 3160 3410 3420 3430 3440 3450 3456 3460 3470 3480 3310 3320 3330 3340 3210 3220 3230 3240 3250 3260 12020 3010 3020 3030 3040 3050 3060 3070 12000 3610 3620 3630 3640 3650 3660 3670 12100 12110 12120 12130 3510 3720 3730 3736 3740 3750 3760 3900 3910 3810 3820 3830 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8550 8560 8600 8610 8520 81300 81310 81320 81330 81340 81350 81360 8100 8110 8120 8150 8160 8200 8210 8170 4400 4170 4280 4450 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4600 4610 4620 4630 4120 4130 4140 4300 4310 4320 4330 4340 4040 4070 4100 4050 4080 4800 4810 4820 4220 4230 4700 4710 4190 4290 4250 4740 4750 4760 4770 4780 4790 4850 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 8
    freedom           = 2
    free_market       = 2
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 520037 }
  headofgovernment       = { type = 9 id = 520038 }
  foreignminister        = { type = 9 id = 520039 }
  armamentminister       = { type = 9 id = 520040 }
  ministerofsecurity     = { type = 9 id = 520041 }
  ministerofintelligence = { type = 9 id = 520042 }
  chiefofstaff           = { type = 9 id = 520043 }
  chiefofarmy            = { type = 9 id = 520044 }
  chiefofnavy            = { type = 9 id = 520045 }
  chiefofair             = { type = 9 id = 520046 }

  landunit = {
    id       = { type = 23602 id = 1 }
    name     = "10-i Mekhanizirovannyi Korpus"
    location = 1156
    division = {
      id             = { type = 23602 id = 2 }
      name           = "21-ya Tankovaya Diviziya"
      type           = light_armor
      model          = 0
      strength       = 65
    }
    division = {
      id             = { type = 23602 id = 3 }
      name           = "24-ya Tankovaya Diviziya"
      type           = light_armor
      model          = 0
      strength       = 65
    }
    division = {
      id             = { type = 23602 id = 4 }
      name           = "198-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 23602 id = 5 }
    name     = "Leningradskyi Voennyi Okrug"
    location = 1156
    division = {
      id             = { type = 23602 id = 6 }
      name           = "Leningradskyi Voennyi Okrug"
      type           = hq
      model          = 4
      extra          = anti_air
      brigade_model  = 2
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 7 }
      name           = "177-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 8 }
      name           = "191-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 9 }
      name           = "8-ya Minskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 23602 id = 17 }
    name     = "15-ya Armiya"
    location = 1183
    division = {
      id             = { type = 23602 id = 18 }
      name           = "34-ya Srednevolzhskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 23602 id = 19 }
    name     = "17-ya Armiya"
    location = 1148
    division = {
      id             = { type = 23602 id = 20 }
      name           = "57-ya Tankovaya Diviziya"
      type           = light_armor
      model          = 0
      strength       = 20
    }
    division = {
      id             = { type = 23602 id = 21 }
      name           = "61-ya Tankovaya Diviziya"
      type           = light_armor
      model          = 0
      strength       = 20
    }
    division = {
      id             = { type = 23602 id = 22 }
      name           = "36-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 23602 id = 23 }
      name           = "57-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 23602 id = 24 }
      name           = "82-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23602 id = 25 }
    name     = "7-ya Armiya"
    location = 1148
    division = {
      id             = { type = 23602 id = 26 }
      name           = "14-ya Tankovaya Diviziya"
      type           = armor
      model          = 1
      strength       = 10
    }
    division = {
      id             = { type = 23602 id = 27 }
      name           = "33-ya Tankovaya Diviziya"
      type           = armor
      model          = 1
      strength       = 10
    }
    division = {
      id             = { type = 23602 id = 28 }
      name           = "122-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 23602 id = 29 }
    name     = "13-ya Armiya"
    location = 1148
    division = {
      id             = { type = 23602 id = 30 }
      name           = "45-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 23602 id = 31 }
      name           = "42-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 23602 id = 32 }
      name           = "41-ya Strelkovaya Diviziya"
      type           = motorized
      model          = 1
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 23602 id = 33 }
    name     = "21-ya Armiya"
    location = 1148
    division = {
      id             = { type = 23602 id = 34 }
      name           = "33-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 23602 id = 35 }
      name           = "34-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 23602 id = 36 }
      name           = "65-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 1
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 23602 id = 37 }
    name     = "17-ya Armiya"
    location = 1154
    division = {
      id             = { type = 23602 id = 38 }
      name           = "82-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 23602 id = 39 }
      name           = "83-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 23602 id = 40 }
      name           = "84-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 11
      strength       = 80
      experience     = 20
    }
  }

  airunit = { 
    id       = { type = 23602 id = 10 }
    name     = "Leningradskaya Vozdushnogo Komandovaniya"
    location = 1164
    base     = 1164
    division = {
      id             = { type = 23602 id = 11 }
      name           = "1.LBABR"
      type           = multi_role
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 12 }
      name           = "2.IABR"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 13 }
      name           = "23.IABR"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 14 }
      name           = "40.IABR"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 15 }
      name           = "41.IABR"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 23602 id = 16 }
      name           = "3.TBABR"
      type           = strategic_bomber
      model          = 2
      strength       = 80
    }
  }
}
