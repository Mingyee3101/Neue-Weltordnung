##############################
# Country definition for U46 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U46
  puppet             = GER
  control            = GER
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 122 # Amsterdam
  dissent            = 10
  manpower           = 60
  # Resource Reserves
  energy         = 100
  metal          = 500
  rare_materials = 150
  oil            = 200
  supplies       = 1000
  money          = 10
  transports     = 10

  diplomacy = {
    relation = { tag = GER value = 100 }
    relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 200 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = { tag = CRO value = 200 }
    relation = { tag = SLO value = 200 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 125 }
    relation = { tag = U01 value = -200 }
    relation = { tag = HOL value = -200 }
    relation = { tag = HUN value = 200 }
    relation = { tag = IRQ value = -200 }
    relation = { tag = ITA value = 200 }
    relation = { tag = MTN value = 200 }
    relation = { tag = JAP value = 135 }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POR value = 75 }
    relation = { tag = ROM value = 200 }
    relation = { tag = SAF value = -200 }
    relation = { tag = SCH value = 50 }
    relation = { tag = SOV value = -200 }
    relation = { tag = SPA value = 50 }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = 10 }
    relation = { tag = USA value = -125 }
    relation = { tag = FRA value = 75 access = yes }
    relation = { tag = YEM value = -200 }
    relation = { tag = U02 value = -200 }
    relation = { tag = U05 value = -200 }
  }
  SpyInfo                = { country = "GER" NumberOfSpies = 7 }

  nationalprovinces      = { 122 118 119 120 121 123 124 125 }
  ownedprovinces         = { 122 118 119 120 121 123 124 125 }
  controlledprovinces    = { 122 118 119 120 121 123 124 125 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5130 5140 5150 5160 5170 5180 5800 5080 5090 5100 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5700 5710 5010 5020 5030 5190 5200 5210 5220 5230 5470 5480 5490 5500 5560 5600 5610 5620 5630 5640 5410 5416 5417 5420 5426 5430 5440 5920 5960 5970 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1670 1680 1690 1396 1400 1410 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1470 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199130 199140 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2860 2870 2880 2020 2150 2160 2170 2180 2850 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2400 2410 2420 2430 2800 2450 21180 21190 21200 2460 2470 2480 2810 2820 2510 2520 2530 2220 2230 2240 2970 2370 22910 22920 22930 2980 2260 14000 14010 14020 14030 6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910 6210 6220 6230 6240 6250 6260 6270 6280 6290 6900 3110 3120 3130 3140 3150 3160 3410 3420 3430 3440 3450 3456 3460 3470 3480 3310 3320 3330 3340 3350 3210 3220 3230 3240 3250 3260 12020 3010 3020 3030 3040 3050 3060 3070 12000 3610 3620 3630 3640 3650 3660 3670 3680 12100 12110 12120 12130 3510 3520 3530 3720 3730 3736 3740 3750 3760 3900 3910 3810 3820 3830 4300 4310 4320 4330 4340 4040 4070 4100 4400 4170 4280 4450 4800 4810 4820 4220 4230 4700 4710 4190 4200 4210 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 4600 4610 4620 4630 4120 4130 4140 4150 4160 4740 4750 4760 4770 4780 4790 4850 4860 4050 4080 4110 4900 4910 4920 4930 4940 4290 4250 4260 4270 15180 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9350 9360 9290 9300 9310 9370 9390 9400 9380 9320 9330 9340 9410 9420 8010 8020 8030 8040 8050 8060 8070 8080 82300 82310 82500 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 81300 81310 81320 81330 81340 81350 81360 81370 8100 8110 8120 8150 8160 8170 8200 8210 7550 7560 7570 7580 7590 7100 7110 7010 7020 7620 }
  inventions             = { 3000027 3000028 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 1
    freedom           = 2
    free_market       = 5
    professional_army = 6
    defense_lobby     = 10
    interventionism   = 1
  }

  landunit = {
    id       = { type = 30402 id = 1 }
    name     = "Weerbaarheids Afdeling"
    location = 122
    division = {
      id             = { type = 30402 id = 2 }
      name           = "1. Bataljon Weerbaarheids Afdeling"
      type           = militia
      model          = 5
      strength       = 25
      max_strength   = 25
    }
  }
}
