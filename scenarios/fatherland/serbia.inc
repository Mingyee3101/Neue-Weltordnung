##############################
# Country definition for SER #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SER
  puppet             = GER
  control            = GER
  name               = "GNS of Serbia"
  flag_ext           = _fas
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes NEIN = yes RES = yes } }
  capital            = 338 # Belgrade
  dissent            = 15
  manpower           = 25
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 200
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = GER value = 200 }
    relation = { tag = ITA value = 200 }
  }
  SpyInfo                = { country = "SER" NumberOfSpies = 7 }

  nationalprovinces      = { 327 330 338 339 340 342 337 341 }
  ownedprovinces         = { 327 330 338 339 340 342 }
  controlledprovinces    = { 327 330 338 339 340 342 }
  claimedprovinces       = { 327 328 329 330 331 332 333 334 335 339 340 342 343 344 350 351 353 354 355 356 357 358 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2640 2646 2650 2030 2860 2870 2880 2020 2150 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 5600 5610 5620 5630 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5700 5710 5010 5800 5080 5090 5560 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 4
    professional_army = 8
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 6 id = 415001 } # Milan Nedic
  headofgovernment       = { type = 6 id = 415132 } # Milan Nedic

  landunit = {
    id       = { type = 30204 id = 49 }
    name     = "Jugoslavenska Narodna Armija"
    location = 338
    division = {
      id             = { type = 30204 id = 50 }
      name           = "Generalstab Srbije"
      type           = hq
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 30204 id = 51 }
      name           = "22. Srpska Divizija"
      type           = militia
      model          = 5
      strength       = 55
      experience     = 20
    }
    division = {
      id             = { type = 30204 id = 52 }
      name           = "24. Srpska Divizija"
      type           = militia
      model          = 5
      strength       = 55
      experience     = 20
    }
    division = {
      id             = { type = 30204 id = 53 }
      name           = "46. Srpska Divizija"
      type           = militia
      model          = 5
      strength       = 55
      experience     = 20
    }
    division = {
      id             = { type = 30204 id = 54 }
      name           = "47. Srpska Divizija"
      type           = militia
      model          = 5
      strength       = 55
      experience     = 20
    }
  }
}
