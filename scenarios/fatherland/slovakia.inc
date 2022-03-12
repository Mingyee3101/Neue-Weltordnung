##############################
# Country definition for SLO #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SLO
  puppet             = GER
  control            = GER
  name               = "Slovak Republic"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 208 # Bratislava
  manpower           = 60
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 0
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = ENG value = -100 }
    relation = { tag = FIN value = 25 }
    relation = { tag = U01 value = -100 }
    relation = { tag = GER value = 200 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 125 }
    relation = { tag = ROM value = 150 }
    relation = { tag = SOV value = -100 }
  }
  SpyInfo                = { country = "SLO" NumberOfSpies = 7 }

  nationalprovinces      = { 208 211 212 214 }
  ownedprovinces         = { 208 211 212 214 }
  controlledprovinces    = { 208 211 212 214 }
  claimedprovinces       = { 213 210 209 215 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2640 2646 2650 2030 2860 2870 2880 2020 2150 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 5600 5610 5620 5630 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5700 5710 5010 5800 5080 5090 5560 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 1100 1110 1990 1350 1360 1370 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 9
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 280011 } # Jozef Tiso
  headofgovernment       = { type = 9 id = 280014 } # Vojtech Tuka
  foreignminister        = { type = 9 id = 280018 } # Stefan Tiso
  armamentminister       = { type = 9 id = 280021 } # Mikulás Pruzinsky
  ministerofsecurity     = { type = 9 id = 280028 } # Alexander Mach
  ministerofintelligence = { type = 9 id = 280033 } # Hans Bernard
  chiefofstaff           = { type = 9 id = 280038 } # Gustav Malar
  chiefofarmy            = { type = 9 id = 280040 } # Ferdinand Catlos
  chiefofnavy            = { type = 9 id = 280043 } # Jozef Turanec
  chiefofair             = { type = 9 id = 280045 } # Anton Pulanich
  dormant_leaders        = { 280015 280016 }
  dormant_ministers      = { 280001 280026 }

  landunit = {
    id       = { type = 26000 id = 1 }
    name     = "SGS"
    location = 208
    leader   = 280011
    division = {
      id             = { type = 26000 id = 2 }
      name           = "Slovensky Generálny Stáb"
      type           = hq
      model          = 2
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 3 }
    name     = "Hlinkova Garda"
    location = 208
    leader   = 280014
    division = {
      id             = { type = 26000 id = 4 }
      name           = "Hlinkova Garda"
      type           = militia
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 5 }
    name     = "I. Armáda"
    location = 211
    leader   = 280003
    division = {
      id             = { type = 26000 id = 6 }
      name           = "1. Pesia divízia 'Jánosík'"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 10
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 7 }
      name           = "2. Pesia divízia 'Skultéty'"
      type           = infantry
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 8 }
      name           = "3. Pesia divízia 'Rázus'"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 26000 id = 9 }
    name     = "II. Armáda"
    location = 214
    leader   = 280017
    division = {
      id             = { type = 26000 id = 10 }
      name           = "4. Pesia divízia 'Sládkovic'"
      type           = infantry
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 11 }
      name           = "5. Pesia divízia 'Tajovsky'"
      type           = infantry
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 26000 id = 12 }
      name           = "6. Pesia divízia 'Stúr'"
      type           = infantry
      model          = 10
      extra          = light_armor_brigade
      brigade_model  = 7
      strength       = 100
    }
  }

  landdivision = { dormant = yes id = { type = 26000 id = 50 } name = "Volga oddelenie "  type = militia model = 6 } 
}
