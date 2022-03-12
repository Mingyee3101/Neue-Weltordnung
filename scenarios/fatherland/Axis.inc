##############################
# Country definition for AXI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AXI
  control            = GER
  name               = "Axis Unified Command"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes NEIN = yes RES = yes } }
  capital            = 157 # Potsdam
  manpower           = 100
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 200
  supplies       = 200
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = GER value = 150 }
    relation = { tag = GER value = 200 access = yes }
    relation = { tag = ITA value = 150 access = yes }
    relation = { tag = ROM value = 150 access = yes }
    relation = { tag = HUN value = 150 access = yes }
    relation = { tag = BUL value = 150 access = yes }
    relation = { tag = CRO value = 150 access = yes }
    relation = { tag = FRA value = 150 access = yes }
    relation = { tag = GRE value = 150 access = yes }
    relation = { tag = FIN value = 150 access = yes }
    relation = { tag = U45 value = 150 access = yes }
    relation = { tag = U46 value = 150 access = yes }
    relation = { tag = U47 value = 150 access = yes }
    relation = { tag = U40 value = 150 access = yes }
    relation = { tag = U41 value = 150 access = yes }
    relation = { tag = U42 value = 150 access = yes }
  }
  SpyInfo                = { country = "AXI" NumberOfSpies = 1 }

  nationalprovinces      = { 157 }
  ownedprovinces         = { 157 }
  controlledprovinces    = { 157 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5130 5040 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 7140 7150 5700 5710 5010 5020 5030 5190 5200 5210 5220 5230 5240 53020 53040 5470 5480 5490 5500 5560 5600 5610 5620 5630 5640 5650 5410 5416 5417 5420 5426 5430 5440 5920 5960 5970 5930 5940 5950 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1670 1680 1690 1700 1396 1400 1410 1420 1430 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1470 1480 1490 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140 199150 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2100 2110 2120 2126 2860 2870 2880 2020 2150 2160 2890 2170 2180 2850 2190 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2400 2410 2420 2430 2800 2450 21180 21190 21200 2460 2470 2480 2490 2810 2820 2510 2520 2530 2220 2230 2240 2250 2970 2370 2380 22910 22920 22930 2980 2260 2270 14000 14010 14020 14030 14040 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 6210 6220 6230 6240 6250 6260 6270 6280 6290 6900 14100 3110 3120 3130 3140 3150 3160 12010 3410 3420 3430 3440 3450 3456 3460 3470 3480 3310 3320 3330 3340 3350 3210 3220 3230 3240 3250 3260 12020 3010 3020 3030 3040 3050 3060 3070 12000 3080 3610 3620 3630 3640 3650 3660 3670 3680 3710 12100 12110 12120 12130 3510 3520 3530 3720 3730 3736 3740 3750 3760 3900 3910 3770 3810 3820 3830 4300 4310 4320 4330 4340 4040 4070 4100 4350 4400 4170 4280 4450 4180 4800 4810 4820 4220 4230 4240 4700 4710 4190 4200 4210 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4600 4610 4620 4630 4120 4130 4140 4150 4160 15100 4740 4750 4760 4770 4780 4790 4850 4860 4050 4080 4110 4116 4900 4910 4920 4930 4940 4290 4250 4260 4270 15180 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9350 9360 9290 9300 9310 9370 9390 9400 9380 9320 9330 9340 9410 9420 27000 8010 8020 8030 8040 8050 8060 8070 8080 81380 82300 82310 82500 82510 82520 8500 8510 8520 8550 8560 8600 8570 8610 8620 8630 8640 8650 8660 81300 81310 81320 81330 81340 81350 81360 81370 8100 8110 8120 8150 8160 8170 8200 8210 15500 7550 7560 7570 7580 7590 7100 7110 7120 7010 7020 7620 7630 }
  inventions             = { 3000027 3000028 3000031 3000017 3000018 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 1
    free_market       = 2
    professional_army = 7
    defense_lobby     = 9
    interventionism   = 9
  }

  landunit = {
    id       = { type = 17345 id = 40 }
    name     = "OKW der Achsenkräfte"
    location = 157
    division = {
      id             = { type = 17345 id = 41 }
      name           = "OKW der Achsenstreitkräfte"
      type           = hq
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 42 }
      name           = "Deutsch-Italienische Sonderbrigade"
      type           = paratrooper
      model          = 3
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 43 }
      name           = "Ungarische Expeditionsstreitkräfte"
      type           = motorized
      model          = 3
      strength       = 30
      max_strength   = 50
    }
    division = {
      id             = { type = 17345 id = 44 }
      name           = "Rumänische Expeditionsstreitkräfte"
      type           = motorized
      model          = 3
      strength       = 30
      max_strength   = 50
    }
    division = {
      id             = { type = 17345 id = 45 }
      name           = "Franzosische Expeditionsstreitkräfte"
      type           = motorized
      model          = 3
      strength       = 30
      max_strength   = 50
    }
  }

  landdivision = { dormant = yes id = { type = 17345 id = 30 } name = "Panzer-Divison Turkestan"  type = armor model = 3 strength = 75 } 
  landdivision = { dormant = yes id = { type = 17345 id = 31 } name = "Panzergredanier-Division Tashkent"  type = mechanized model = 1 strength = 75 } 
  landdivision = { dormant = yes id = { type = 17345 id = 32 } name = "Panzergredanier-Division Basmachi"  type = mechanized model = 1 strength = 75 } 
  landdivision = { dormant = yes id = { type = 17345 id = 33 } name = "Generalstaff Turkestan"  type = hq model = 4 strength = 50 } 
  landdivision = { dormant = yes id = { type = 17345 id = 34 } name = "Black Shirt Legion"  type = bergsjaeger model = 12 strength = 80 experience = 40 } 
  landdivision = { dormant = yes id = { type = 17345 id = 66 } name = "1. Uberwachungsdivision"  type = garrison model = 6 experience = 10 extra = artillery } 
  landdivision = { dormant = yes id = { type = 17345 id = 67 } name = "2. Uberwachungsdivision"  type = garrison model = 6 experience = 10 } 
  landdivision = { dormant = yes id = { type = 17345 id = 68 } name = "SS-Panzerdivision 'Bismarck'"  type = armor model = 4 experience = 40 } 
  landdivision = { dormant = yes id = { type = 17345 id = 60 } name = "1. Bergsjaeger-Division in China"  type = bergsjaeger model = 12 experience = 40 extra = artillery } 
  landdivision = { dormant = yes id = { type = 17345 id = 61 } name = "2. Bergsjaeger-Division in China"  type = bergsjaeger model = 12 experience = 40 extra = artillery } 
  landdivision = { dormant = yes id = { type = 17345 id = 62 } name = "Divizia de Vanatori 'Manciuria'"  type = bergsjaeger model = 12 experience = 25 } 
  landdivision = { dormant = yes id = { type = 17345 id = 63 } name = "Brigata Alpina 'Vittoria dell'Asse'"  type = bergsjaeger model = 12 experience = 30 } 
  landdivision = { dormant = yes id = { type = 17345 id = 64 } name = "Panzerdivision 'Sieg der KMT'"  type = armor model = 4 experience = 30 } 
  landdivision = { dormant = yes id = { type = 17345 id = 65 } name = "Panzergrenadierdivision 'Sun Yat Sen'"  type = mechanized model = 2 experience = 30 } 
}
