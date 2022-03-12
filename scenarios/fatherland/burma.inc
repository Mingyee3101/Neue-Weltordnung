##############################
# Country definition for BUR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BUR
  name               = "Union of Burma"
  ai_settings        = { flags = { MOB1 = yes } }
  capital            = 1459 # Delhi
  dissent            = 9
  manpower           = 508
  relative_manpower  = 0.6
  peacetime_ic_mod       = 0.6
  wartime_ic_mod         = 0.7
  industrial_modifier    = 0.7
  # Resource Reserves
  energy         = 5520
  metal          = 2760
  rare_materials = 1380
  oil            = 500
  supplies       = 500
  money          = 70
  transports     = 200
  escorts        = 20

  diplomacy = {
    relation = { tag = JAP value = 50 }
  }
  SpyInfo                = { country = "U02" NumberOfSpies = 3 }

  nationalprovinces      = { 1411 1409 1420 1419 1415 1410 1417 1416 1418 1412 1413 1407 1408 1406 1414 }
  ownedprovinces         = { 1411 1409 1420 1419 1415 1410 1417 1416 1418 1412 1413 1407 1408 1406 1414 }
  controlledprovinces    = { 1411 1409 1420 1419 1415 1410 1417 1416 1418 1412 1413 1407 1408 1406 1414 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 1970 1980 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 2860 2870 2880 2020 2290 2300 2310 7600 7610 2620 2010 1830 1840 1850 1860 2800 2450 3010 3020 3030 3040 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4600 4610 4620 4630 4120 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5800 5080 5090 3720 3730 3736 3740 3750 3900 3810 5600 8010 8020 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6560 1070 1080 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 3
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 3
  }
  headofstate            = { type = 6 id = 465011 } # Thakin Bai Thei Tin
  headofgovernment       = { type = 6 id = 465018 } # Ba Maw

  landunit = {
    id       = { type = 9023 id = 1 }
    name     = "I Burmese Corps"
    location = 1415
    division = {
      id             = { type = 9023 id = 2 }
      name           = "1st Division"
      type           = infantry
      model          = 11
    }
    division = {
      id             = { type = 9023 id = 3 }
      name           = "2nd Division"
      type           = infantry
      model          = 11
    }
  }
  landunit = {
    id       = { type = 9023 id = 4 }
    name     = "II Burmese Corps"
    location = 1410
    division = {
      id             = { type = 9023 id = 5 }
      name           = "3rd Division"
      type           = infantry
      model          = 11
    }
    division = {
      id             = { type = 9023 id = 6 }
      name           = "4th Division"
      type           = infantry
      model          = 11
    }
  }
}
