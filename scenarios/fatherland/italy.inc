##############################
# Country definition for ITA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ITA
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  belligerence       = 5
  capital            = 419 # Rome
  manpower           = 750
  # Resource Reserves
  energy         = 3600
  metal          = 1800
  rare_materials = 1000
  oil            = 1800
  supplies       = 1200
  money          = 650
  transports     = 130
  escorts        = 35

  diplomacy = {
    relation = { tag = AFG value = 0 }
    relation = { tag = CHI value = 25 }
    relation = { tag = SAU value = -25 }
    relation = { tag = SYR value = 10 }
    relation = { tag = PAK value = 50 }
    relation = { tag = IND value = 0 }
    relation = { tag = ARG value = 30 }
    relation = { tag = URU value = 30 }
    relation = { tag = BOL value = 25 }
    relation = { tag = BRA value = -25 }
    relation = { tag = PAR value = 0 }
    relation = { tag = MEX value = -25 }
    relation = { tag = CHL value = 30 }
    relation = { tag = ECU value = 25 }
    relation = { tag = TUR value = 50 }
    relation = { tag = IRE value = 0 }
    relation = { tag = TRA value = 50 }
    relation = { tag = POR value = 65 }
    relation = { tag = SPA value = 85 }
    relation = { tag = SCH value = -25 }
    relation = { tag = FRA value = 50 }
    relation = { tag = SWE value = 50 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = CAN value = -200 }
    relation = { tag = EGY value = -100 }
    relation = { tag = ENG value = -200 }
    relation = { tag = ETH value = -200 }
    relation = { tag = U01 value = -200 }
    relation = { tag = HOL value = -200 }
    relation = { tag = IRQ value = -150 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -100 }
    relation = { tag = SAF value = -200 }
    relation = { tag = YEM value = -100 }
    relation = { tag = JAP value = -125 }
    relation = { tag = SOV value = -200 }
    relation = { tag = CHC value = -150 }
    relation = { tag = MON value = -100 }
    relation = { tag = SIB value = -100 }
    relation = { tag = U57 value = -100 }
    relation = { tag = U59 value = 50 }
    relation = { tag = UPE value = 50 }
    relation = { tag = AXI value = 180 access = yes }
    relation = {
      tag        = GER
      value      = 180
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = {
      tag        = CRO
      value      = 120
      access     = yes
      guaranteed = { year = 1948 month = january day = 1 }
    }
    relation = { tag = HUN value = 175 }
    relation = { tag = ROM value = 150 }
    relation = { tag = BUL value = 150 }
    relation = { tag = SLO value = 120 }
    relation = { tag = FIN value = 100 }
    relation = { tag = MTN value = 200 access = yes }
    relation = { tag = UTC value = 50 }
    relation = { tag = U58 value = 100 }
    relation = { tag = SER value = 50 }
    relation = { tag = DEN value = 100 }
    relation = { tag = FRA value = 50 access = yes }
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 9 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 6 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  SpyInfo                = { country = "GER" NumberOfSpies = 7 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 2 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 8 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 4 }

  nationalprovinces      = { 430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 350 343 403 406 402 413 417 435 432 405 404 94 399 429 378 379 87 394 395 418 426 427 428 433 91 }
  ownedprovinces         = { 430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 378 379 403 406 394 395 418 426 427 428 433 402 413 417 435 432 405 404 399 350 343 359 362 361 360 334 329 349 380 371 94 87 91 429 748 749 747 746 745 744 740 741 742 753 751 750 752 757 758 755 756 754 776 777 774 770 772 771 765 769 767 768 764 761 763 759 762 773 775 766 760 900 804 803 813 814 805 811 810 806 808 812 807 809 }
  controlledprovinces    = { 430 431 425 422 424 421 420 416 423 415 414 419 410 412 411 393 408 396 398 407 401 400 434 378 379 403 406 394 395 418 426 427 428 433 402 413 417 435 432 405 404 399 350 343 359 362 361 360 334 329 349 380 371 94 87 91 429 747 748 749 746 745 744 740 741 742 752 753 776 751 750 757 758 755 756 771 772 770 777 774 754 759 762 773 775 769 767 765 768 764 761 763 760 766 900 804 803 813 814 811 805 810 806 808 812 807 809 }
  claimedprovinces       = { 740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 359 362 361 360 334 329 349 367 368 369 371 372 373 374 375 376 380 381 90 86 94 93 92 91 87 818 819 820 821 822 823 824 825 826 827 828 829 830 831 815 816 817 832 834 835 836 837 838 833 }

  techapps               = { 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5140 5150 5160 5180 5170 5110 5800 5080 5090 5100 5316 5326 5327 5310 54010 54020 54030 5320 5350 5360 5330 5370 5380 5340 5390 5400 5600 5610 5620 5630 5640 5650 5190 5200 5210 5220 5230 5240 5560 7550 7560 7570 7580 7590 7100 15500 7110 5410 5416 5417 5420 5426 5430 5440 5466 5920 5980 2800 2450 21180 21190 21200 2460 2470 2480 2490 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1560 1570 1580 1590 1600 1670 1680 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1470 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2080 2090 2060 6900 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2810 2820 2510 2520 2530 2400 2410 2420 2970 2860 2870 2880 2020 2150 2160 2170 2100 2110 2220 2230 2240 22910 2980 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 199100 199140 3610 3620 3630 3640 3650 3660 3670 3680 3010 3020 3030 3040 3050 3060 3070 12000 3110 3120 3130 3140 3150 3160 12010 3210 3220 3230 3240 3250 3260 12020 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 12100 12110 12120 12130 3510 3520 3530 3540 3810 3820 3830 3720 3730 3736 3740 3750 3760 3900 3910 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 4300 4310 4320 4330 4340 4040 4280 4400 4170 4600 4610 4620 4630 4120 4130 4140 4150 4800 4810 4820 4230 4700 4710 4190 4200 4210 4290 4250 4260 4740 4750 4760 4770 4780 4790 4850 4860 4050 4900 4910 4920 4930 4940 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6120 6110 6130 8010 8020 8030 8040 8050 8060 8070 8080 82300 82500 8500 8510 8520 8550 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 8100 8110 8120 8150 8160 8170 8200 8210 81650 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9130 9140 9190 9200 9210 9220 9230 9240 5470 5480 5490 5500 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 7
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 25001 } # Vittorio Emanuele III
  headofgovernment       = { type = 9 id = 25002 } # Benito Mussolini
  foreignminister        = { type = 9 id = 25003 } # Gian Galeazzo Ciano
  armamentminister       = { type = 9 id = 25047 } # Alfredo Guzzoni
  ministerofsecurity     = { type = 9 id = 25005 } # Guido Buffarini-Guidi
  ministerofintelligence = { type = 9 id = 25086 } # Dino Grandi
  chiefofstaff           = { type = 9 id = 25097 } # Ugo Cavallero
  chiefofarmy            = { type = 9 id = 25110 } # Mario Roatta
  chiefofnavy            = { type = 9 id = 25117 } # Arturo Riccardi
  chiefofair             = { type = 9 id = 25126 } # Rino Corso Fougier
  dormant_ministers      = { 25016 25195 25008 }

  landunit = {
    id       = { type = 23500 id = 1 }
    name     = "Comando Regio Esercito"
    location = 419
    division = {
      id             = { type = 23500 id = 2 }
      name           = "Comando Generale"
      type           = hq
      model          = 3
      extra          = anti_air
      brigade_model  = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 46 }
      name           = "12a Divisione 'Sassari'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6 }
    name     = "Guarnigione di Leros"
    location = 378
    division = {
      id             = { type = 23500 id = 25 }
      name           = "Guarnigione di Leros"
      type           = garrison
      model          = 5
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 23500 id = 6924 }
    name     = "I. Corpo d'Armata Motorizzato"
    location = 407
    division = {
      id             = { type = 23500 id = 9 }
      name           = "16a Divisione 'Pistoia'"
      type           = motorized
      model          = 2
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 23500 id = 6930 }
    name     = "IV Armata Alpina"
    location = 398
    division = {
      id             = { type = 23500 id = 2500 }
      name           = "4a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 16 }
      name           = "4a Divisione Alpina 'Cuneense'"
      type           = bergsjaeger
      model          = 11
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 8 }
      name           = "5a Divisione Alpina 'Pusteria'"
      type           = bergsjaeger
      model          = 11
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 18 }
      name           = "3a Divisione 'Ravenna'"
      type           = infantry
      model          = 11
      strength       = 60
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 60 }
    name     = "XV Corpo d'Armata"
    location = 396
    division = {
      id             = { type = 23500 id = 62 }
      name           = "10a Divisione 'Piave'"
      type           = motorized
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 11 }
      name           = "7a Divisione 'Lupi di Toscana'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 27 }
      name           = "58a Divisione 'Legnano'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 52 }
    name     = "XXII Corpo d'Armata"
    location = 398
    division = {
      id             = { type = 23500 id = 6929 }
      name           = "103a Divisione 'Rovigo'"
      type           = motorized
      model          = 2
      strength       = 30
    }
    division = {
      id             = { type = 23500 id = 54 }
      name           = "2a Divisione 'Emanuele Filiberto'"
      type           = cavalry
      model          = 11
      extra          = light_armor_brigade
      brigade_model  = 6
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 96 }
      name           = "48a Divisione 'Taro'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 97 }
    name     = "VI Armata"
    location = 432
    division = {
      id             = { type = 23500 id = 38 }
      name           = "6a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 13 }
      name           = "4a Divisione 'Livorno'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 76 }
    name     = "XII Corpo d'Armata"
    location = 431
    division = {
      id             = { type = 23500 id = 77 }
      name           = "28a Divisione 'Aosta'"
      type           = infantry
      model          = 11
      strength       = 60
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 37 }
      name           = "26a Divisione 'Assietta'"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 9
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 79 }
    name     = "XIII Corpo d'Armata"
    location = 431
    division = {
      id             = { type = 23500 id = 6953 }
      name           = "202a Divisione Costiera"
      type           = garrison
      model          = 5
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 6957 }
      name           = "207a Divisione Costiera"
      type           = garrison
      model          = 5
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 6963 }
      name           = "208a Divisione Costiera"
      type           = garrison
      model          = 5
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 4500 }
    name     = "XVI Corpo d'Armata"
    location = 432
    division = {
      id             = { type = 23500 id = 78 }
      name           = "54a Divisione 'Napoli'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 4501 }
    name     = "XVII Corpo d'Armata"
    location = 432
    division = {
      id             = { type = 23500 id = 6967 }
      name           = "206a Divisione Costiera"
      type           = garrison
      model          = 5
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 6968 }
      name           = "213a Divisione Costiera"
      type           = garrison
      model          = 5
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 6956 }
    name     = "VII Corpo d'Armata"
    location = 422
    division = {
      id             = { type = 23500 id = 6938 }
      name           = "152a Divisione 'Piceno'"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 6939 }
      name           = "152a Divisione 'Piceno'"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6952 }
    name     = "VII Armata"
    location = 421
    division = {
      id             = { type = 23500 id = 3 }
      name           = "7a Armata"
      type           = hq
      model          = 5
      extra          = police
      brigade_model  = 1
    }
    division = {
      id             = { type = 23500 id = 6917 }
      name           = "6a Divisione Alpina 'Alpi Graje'"
      type           = bergsjaeger
      model          = 11
      strength       = 80
    }
    division = {
      id             = { type = 23500 id = 6928 }
      name           = "105a Divisione 'Rovigo'"
      type           = motorized
      model          = 2
      strength       = 30
    }
    division = {
      id             = { type = 23500 id = 103 }
      name           = "21a Divisione 'Granatieri di Sardegna'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 6954 }
      name           = "183a Divisione 'Ciclone'"
      type           = paratrooper
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 6955 }
      name           = "Divisione CCNN 'M'"
      type           = light_armor
      model          = 3
      strength       = 45
    }
    division = {
      id             = { type = 23500 id = 61 }
      name           = "9a Divisione 'Pasubio'"
      type           = motorized
      model          = 1
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 23500 id = 6909 }
    name     = "VIII Armata"
    location = 419
    division = {
      id             = { type = 23500 id = 74 }
      name           = "8a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 6958 }
      name           = "135a Divisione 'Ariete II'"
      type           = cavalry
      model          = 12
      extra          = light_armor_brigade
      brigade_model  = 6
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 21 }
      name           = "5a Divisione 'Cosseria'"
      type           = infantry
      model          = 11
      strength       = 55
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 36 }
      name           = "2a Divisione 'Sforzesca'"
      type           = infantry
      model          = 10
      strength       = 50
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 55 }
      name           = "3a Divisione 'Principe Amedeo'"
      type           = cavalry
      model          = 12
      extra          = light_armor_brigade
      brigade_model  = 7
      strength       = 30
    }
    division = {
      id             = { type = 23500 id = 63 }
      name           = "52a Divisione 'Torino'"
      type           = motorized
      model          = 1
      extra          = armored_car
      brigade_model  = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 6910 }
    name     = "VIII Corpo d'Armata Alpino"
    location = 405
    division = {
      id             = { type = 23500 id = 29 }
      name           = "2a Divisione Alpina 'Tridentina'"
      type           = bergsjaeger
      model          = 11
      strength       = 30
    }
    division = {
      id             = { type = 23500 id = 88 }
      name           = "3a Divisione Alpina 'Julia'"
      type           = bergsjaeger
      model          = 11
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 23500 id = 6922 }
    name     = "V Armata"
    location = 419
    division = {
      id             = { type = 23500 id = 110 }
      name           = "5a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 100 }
      name           = "20a Divisione 'Friuli'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 23 }
      name           = "44a Divisione 'Cremona'"
      type           = infantry
      model          = 11
      extra          = medium_armor
      brigade_model  = 2
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6923 }
    name     = "V Corpo d' Armata"
    location = 419
    division = {
      id             = { type = 23500 id = 6969 }
      name           = "225a Divisione Granatieri"
      type           = garrison
      model          = 5
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 6970 }
      name           = "226a Divisione Granatieri"
      type           = garrison
      model          = 5
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 20 }
    name     = "XIII Corpo d'Armata"
    location = 434
    division = {
      id             = { type = 23500 id = 80 }
      name           = "30a Divisione 'Sabauda'"
      type           = infantry
      model          = 11
      strength       = 60
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 81 }
      name           = "31a Divisione 'Calabria'"
      type           = infantry
      model          = 11
      strength       = 60
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 95 }
      name           = "47a Divisione 'Bari'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 24 }
    name     = "I Corpo d'Armata Paracadutisti"
    location = 434
    division = {
      id             = { type = 23500 id = 6971 }
      name           = "184a Divisione 'Nembo'"
      type           = paratrooper
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 23500 id = 6943 }
    name     = "II Armata"
    location = 349
    division = {
      id             = { type = 23500 id = 39 }
      name           = "2a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 53 }
      name           = "1a Divisione 'Eugenio di Savoia'"
      type           = cavalry
      model          = 12
      extra          = light_armor_brigade
      brigade_model  = 7
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6904 }
    name     = "V Guarnigione di Spalato"
    location = 350
    division = {
      id             = { type = 23500 id = 6914 }
      name           = "153a Divisione 'Macerata'"
      type           = garrison
      model          = 5
      strength       = 70
    }
    division = {
      id             = { type = 23500 id = 6912 }
      name           = "154a Divisione 'Murge'"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6906 }
    name     = "V Corpo d'Armata"
    location = 350
    division = {
      id             = { type = 23500 id = 48 }
      name           = "13a Divisione 'Re'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 45 }
    name     = "VI Corpo d'Armata"
    location = 350
    division = {
      id             = { type = 23500 id = 70 }
      name           = "18a Divisione 'Messina'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 67 }
      name           = "32a Divisione 'Marche'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 42 }
    name     = "XI Corpo d'Armata"
    location = 349
    division = {
      id             = { type = 23500 id = 44 }
      name           = "14a Divisione 'Isonzo'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 7 }
      name           = "22a Divisione 'Cacciatori delle Alpi'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 49 }
      name           = "57a Divisione 'Lombardia'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6915 }
    name     = "XVIII Corpo d'Armata"
    location = 343
    division = {
      id             = { type = 23500 id = 47 }
      name           = "15a Divisione 'Bergamo'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6919 }
    name     = "XVIII Guarnigione di Ragusa"
    location = 343
    division = {
      id             = { type = 23500 id = 6920 }
      name           = "158a Divisione 'Zara'"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 82 }
    name     = "I Corpo d'Armata Montenegro"
    location = 332
    division = {
      id             = { type = 23500 id = 84 }
      name           = "19a Divisione 'Venezia'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 85 }
      name           = "23a Divisione 'Ferrara'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 83 }
    name     = "II Corpo d'Armata Montenegro"
    location = 332
    division = {
      id             = { type = 23500 id = 6916 }
      name           = "155a Divisione 'Emilia'"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 90 }
    name     = "III Corpo d'Armata Montenegro"
    location = 332
    division = {
      id             = { type = 23500 id = 32 }
      name           = "1a Divisione Alpina 'Taurinese'"
      type           = bergsjaeger
      model          = 11
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 23500 id = 6962 }
    name     = "IX Armata"
    location = 359
    division = {
      id             = { type = 23500 id = 1003 }
      name           = "9a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 6964 }
      name           = "1a Divisione 'Albania'"
      type           = infantry
      model          = 11
      strength       = 60
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 6965 }
      name           = "2a Divisione 'Albania'"
      type           = infantry
      model          = 11
      strength       = 60
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 99 }
    name     = "IV Corpo d'Armata"
    location = 359
    division = {
      id             = { type = 23500 id = 68 }
      name           = "38a Divisione 'Puglie'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 73 }
      name           = "49a Divisione 'Parma'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6966 }
    name     = "XXV Corpo d'Armata"
    location = 362
    division = {
      id             = { type = 23500 id = 101 }
      name           = "41a Divisione 'Firenze'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 86 }
      name           = "53a Divisione 'Arezzo'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 123 }
    name     = "XI Armata"
    location = 375
    division = {
      id             = { type = 23500 id = 1004 }
      name           = "11a Armata"
      type           = hq
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 23500 id = 26 }
      name           = "11a Divisione 'Brennero'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 124 }
    name     = "XI Corpo d'Armata"
    location = 375
    division = {
      id             = { type = 23500 id = 6921 }
      name           = "151a Divisione 'Perugia'"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 102 }
    name     = "III Corpo d'Armata"
    location = 375
    division = {
      id             = { type = 23500 id = 33 }
      name           = "24a Divisione 'Pinerolo'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 15 }
      name           = "36a Divisione 'Forl?"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 93 }
    name     = "VIII Corpo d'Armata"
    location = 376
    division = {
      id             = { type = 23500 id = 94 }
      name           = "29a Divisione 'Piemonte'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 34 }
      name           = "59a Divisione 'Cagliari'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 690 }
    name     = "XVI Corpo d'Armata"
    location = 367
    division = {
      id             = { type = 23500 id = 22 }
      name           = "37a Divisione 'Modena'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
    division = {
      id             = { type = 23500 id = 71 }
      name           = "56a Divisione 'Casale'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6903 }
    name     = "XVI Corpo d'Armata"
    location = 371
    division = {
      id             = { type = 23500 id = 14 }
      name           = "33a Divisione 'Acqui'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6905 }
    name     = "Comando Truppe delle Isole Italiane dell'Egeo"
    location = 381
    division = {
      id             = { type = 23500 id = 19 }
      name           = "6a Divisione 'Cuneo'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 105 }
    name     = "Comando Truppe delle Isole Italiane dell'Egeo"
    location = 379
    division = {
      id             = { type = 23500 id = 106 }
      name           = "50a Divisione 'Regina'"
      type           = infantry
      model          = 11
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6901 }
    name     = "Comando Truppe delle Isole Italiane dell'Egeo"
    location = 380
    division = {
      id             = { type = 23500 id = 104 }
      name           = "51a Divisione 'Siena'"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 70
      max_strength   = 70
    }
  }
  landunit = {
    id       = { type = 23500 id = 6941 }
    name     = "159a Divisione"
    location = 405
    division = {
      id             = { type = 23500 id = 6942 }
      name           = "159a Divisione 'Veneto'"
      type           = garrison
      model          = 5
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 23500 id = 2000 }
    name     = "Regia Marina"
    location = 422
    base     = 422
    division = {
      id             = { type = 23500 id = 263 }
      name           = "RN Taranto"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 265 }
      name           = "II Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 233 }
      name           = "III Squadriglia Cacciatorpediere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 216 }
      name           = "IV Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 234 }
      name           = "V Squadriglia Cacciatorpediere"
      type           = destroyer
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 282 }
      name           = "Squadrone Giorgio Orsini"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 6023 }
      name           = "RN Leonardo Da Vinci"
      type           = battleship
      model          = 8
    }
    division = {
      id             = { type = 23500 id = 6024 }
      name           = "RN Francesco Caracciolo"
      type           = battleship
      model          = 8
    }
    division = {
      id             = { type = 23500 id = 6025 }
      name           = "RN Cristoforo Colombo"
      type           = battleship
      model          = 8
    }
    division = {
      id             = { type = 23500 id = 6026 }
      name           = "RN Marcantonio Colonna"
      type           = battleship
      model          = 9
    }
    division = {
      id             = { type = 23500 id = 6029 }
      name           = "RN Falco"
      type           = carrier
      model          = 3
      extra1         = cag
      brigade_model1 = 3
    }
    division = {
      id             = { type = 23500 id = 6031 }
      name           = "RN Europa"
      type           = light_carrier
      model          = 1
      extra1         = light_cag
      brigade_model1 = 3
    }
    division = {
      id             = { type = 23500 id = 6032 }
      name           = "RN Etna"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 3033 }
      name           = "RN Pisa"
      type           = heavy_cruiser
      model          = 4
    }
  }
  navalunit = {
    id       = { type = 23500 id = 200 }
    name     = "Prima Squadra"
    location = 422
    base     = 422
    division = {
      id             = { type = 23500 id = 2001 }
      name           = "RN Giulio Cesare"
      type           = battleship
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 2002 }
      name           = "RN Andrea Doria"
      type           = battleship
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 3000 }
      name           = "RN Caio Duilio"
      type           = battleship
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 2320 }
      name           = "RN Vittorio Veneto"
      type           = battleship
      model          = 7
    }
    division = {
      id             = { type = 23500 id = 2329 }
      name           = "RN Littorio"
      type           = battleship
      model          = 7
    }
    division = {
      id             = { type = 23500 id = 403 }
      name           = "RN Roma"
      type           = battleship
      model          = 7
    }
    division = {
      id             = { type = 23500 id = 205 }
      name           = "RN Giuseppe Miraglia"
      type           = escort_carrier
    }
    division = {
      id             = { type = 23500 id = 204 }
      name           = "RN Luigi Cadorna"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 2040 }
      name           = "RN Duca degli Abruzzi"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 2041 }
      name           = "RN Giuseppe Garibaldi"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 404 }
      name           = "RN Attilio Regolo"
      type           = light_cruiser
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 412 }
      name           = "RN Pompeo Magno"
      type           = light_cruiser
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 413 }
      name           = "RN Scipione Africano"
      type           = light_cruiser
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 270 }
      name           = "VII Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 206 }
      name           = "VIII Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 6
    }
    division = {
      id             = { type = 23500 id = 2060 }
      name           = "IX Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 6
    }
    division = {
      id             = { type = 23500 id = 269 }
      name           = "XIV Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 294 }
      name           = "XV Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 293 }
      name           = "XVI Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 2720 }
      name           = "Squadrone Aspromonte"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 2721 }
      name           = "Squadrone Maria"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 207 }
    name     = "Seconda Squadra"
    location = 396
    base     = 396
    division = {
      id             = { type = 23500 id = 210 }
      name           = "RN Bolzano"
      type           = heavy_cruiser
      model          = 3
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 23500 id = 267 }
      name           = "RN Gorizia"
      type           = heavy_cruiser
      model          = 4
      extra1         = floatplane
      brigade_model1 = 5
    }
    division = {
      id             = { type = 23500 id = 212 }
      name           = "RN Duca d'Aosta"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 214 }
      name           = "RN Raimondo Montecuccoli"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 2140 }
      name           = "RN Eugenio di Savoia"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 13500 id = 306 }
      name           = "La Galissonnière"
      type           = light_cruiser
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 296 }
      name           = "X Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 222 }
      name           = "XI Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 228 }
      name           = "XII Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 2220 }
      name           = "XIII Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 272 }
      name           = "Squadrone Sagittario"
      type           = transport
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 218 }
    name     = "Comando Navale Mar Egeo"
    location = 378
    base     = 378
    division = {
      id             = { type = 23500 id = 219 }
      name           = "LI Squadriglia Sommergibili"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 220 }
      name           = "LII Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 238 }
    name     = "I Gruppo Sommergibili"
    location = 396
    base     = 396
    division = {
      id             = { type = 23500 id = 239 }
      name           = "XI Squadriglia Sommergibili"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 240 }
      name           = "XII Squadriglia Sommergibili"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 241 }
      name           = "XIII Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 242 }
      name           = "XIV Squadriglia Sommergibili"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 243 }
      name           = "XV Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 244 }
      name           = "XVII Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 23500 id = 245 }
    name     = "II Gruppo Sommergibili"
    location = 421
    base     = 421
    division = {
      id             = { type = 23500 id = 249 }
      name           = "XXI Squadriglia Sommergibili"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 250 }
      name           = "XXII Squadriglia Sommergibili"
      type           = submarine
      model          = 5
    }
  }
  navalunit = {
    id       = { type = 23500 id = 2380 }
    name     = "III Gruppo Sommergibili"
    location = 422
    base     = 422
    division = {
      id             = { type = 23500 id = 2390 }
      name           = "XXXI Squadriglia Sommergibili"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 253 }
      name           = "XXXIII Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
    division = {
      id             = { type = 23500 id = 251 }
      name           = "XXXIV Squadriglia Sommergibili"
      type           = submarine
      model          = 5
    }
    division = {
      id             = { type = 23500 id = 252 }
      name           = "XXXV Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 254 }
    name     = "IV Gruppo Sommergibili"
    location = 422
    base     = 422
    division = {
      id             = { type = 23500 id = 255 }
      name           = "XL Squadriglia Sommergibili"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 23500 id = 230 }
      name           = "XLI Squadra Sommergibili"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 288 }
      name           = "XLVI Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 257 }
      name           = "XLVII Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 258 }
      name           = "XLIX Squadriglia Sommergibili"
      type           = submarine
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 23500 id = 229 }
    name     = "VII Gruppo Sommergibili"
    location = 434
    base     = 434
    division = {
      id             = { type = 23500 id = 260 }
      name           = "LXXI Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 261 }
      name           = "LXXII Squadriglia Sommergibili"
      type           = submarine
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 271 }
    name     = "I Squadra di Marina Trasporti"
    location = 419
    base     = 421
    division = {
      id             = { type = 23500 id = 273 }
      name           = "Squadrone Aventino"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 292 }
      name           = "VI Squadriglia Torpediniere"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 23500 id = 276 }
    name     = "II Squadra di Marina Trasporti"
    location = 421
    base     = 421
    division = {
      id             = { type = 23500 id = 277 }
      name           = "Squadrone Vallelunga"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 278 }
      name           = "Squadrone Asmara"
      type           = transport
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 283 }
      name           = "Squadrone Tarquinia"
      type           = transport
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 23500 id = 300 }
    name     = "1a Squadra Aerea"
    location = 407
    base     = 407
    division = {
      id             = { type = 23500 id = 301 }
      name           = "2a Divisione Caccia 'Borea'"
      type           = interceptor
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 302 }
      name           = "4a Divisione Bombardieri 'Drago"
      type           = tactical_bomber
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 303 }
      name           = "6a Divisione Bombardieri 'Falco"
      type           = tactical_bomber
      model          = 7
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 304 }
    name     = "2a Squadra Aerea"
    location = 421
    base     = 421
    division = {
      id             = { type = 23500 id = 305 }
      name           = "1a Divisione Caccia 'Aquila'"
      type           = interceptor
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 306 }
      name           = "3a Divisione Bombardieri 'Centauro'"
      type           = naval_bomber
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 307 }
      name           = "11a Brigata Bombardieri 'Nibbio'"
      type           = naval_bomber
      model          = 3
      strength       = 40
    }
  }
  airunit = { 
    id       = { type = 23500 id = 308 }
    name     = "3a Squadra Aerea"
    location = 419
    base     = 419
    division = {
      id             = { type = 23500 id = 309 }
      name           = "5a Divisione Bombardieri 'Eolo'"
      type           = cas
      model          = 2
      strength       = 100
    }
    division = {
      id             = { type = 23500 id = 310 }
      name           = "8a Brigata Caccia 'Ibis'"
      type           = multi_role
      model          = 6
      strength       = 40
    }
  }
  airunit = { 
    id       = { type = 23500 id = 311 }
    name     = "4a Zona Aerea Territoriale"
    location = 422
    base     = 422
    division = {
      id             = { type = 23500 id = 312 }
      name           = "9a Divisione Bombardieri 'Leone'"
      type           = tactical_bomber
      model          = 7
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 313 }
    name     = "Comando Aviazione di Sardegna"
    location = 434
    base     = 434
    division = {
      id             = { type = 23500 id = 314 }
      name           = "10a Divisione Caccia 'Marte'"
      type           = interceptor
      model          = 8
      strength       = 100
    }
  }
  airunit = { 
    id       = { type = 23500 id = 318 }
    name     = "Regia Aeronautica"
    location = 419
    base     = 419
    division = {
      id             = { type = 23500 id = 319 }
      name           = "Comando Servici Aerei Speciali"
      type           = transport_plane
      model          = 2
      strength       = 25
    }
  }

  landdivision = { dormant = yes id = { type = 23500 id = 400 } name = "Volga Divisione Sicurezza"  type = garrison model = 6 extra = medium_armor brigade_model = 4 } 
  landdivision = { dormant = yes id = { type = 23500 id = 401 } name = "1. Volga Divisione"  type = paratrooper model = 2 } 
}
