##############################
# Country definition for TIB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = TIB
  name               = "Kingdom of Tibet"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1289 # Lhasa
  manpower           = 0
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 500
  supplies       = 500
  money          = 10
  SpyInfo                = { country = "TIB" NumberOfSpies = 4 }

  nationalprovinces      = { 1262 1278 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 }
  ownedprovinces         = { 1286 1287 1288 1289 1290 1294 1295 }
  controlledprovinces    = { 1286 1287 1288 1289 1290 1294 1295 }
  claimedprovinces       = { 1455 1458 }

  techapps               = { 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 5600 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 440001 } # Dalai Lama Lhamo Tondup
  headofgovernment       = { type = 9 id = 440002 } # Reting Rimpoche
  foreignminister        = { type = 9 id = 440003 } # Reting Rimpoche
  armamentminister       = { type = 9 id = 440004 } # Tsepon Shakabpa
  ministerofsecurity     = { type = 9 id = 440005 } # Reting Rimpoche
  ministerofintelligence = { type = 9 id = 440006 } # W.G. Kundeling
  chiefofstaff           = { type = 9 id = 440007 } # Gyato Wangdu
  chiefofarmy            = { type = 9 id = 440008 } # Tenpa Jamyang
  chiefofnavy            = { type = 9 id = 440009 } # Chama Samphe
  chiefofair             = { type = 9 id = 440010 } # Sampo Tsewang Rigzin

  landunit = {
    id       = { type = 10700 id = 1 }
    name     = "Xi'zang Jüntuan 1"
    location = 1295
    division = {
      id             = { type = 10700 id = 2 }
      name           = "1 Xi'zang Shi"
      type           = infantry
      model          = 5
      strength       = 10
    }
    division = {
      id             = { type = 10700 id = 3 }
      name           = "10 Xi'zang Lü"
      type           = militia
      model          = 3
      strength       = 20
    }
    division = {
      id             = { type = 10700 id = 4 }
      name           = "17 Xi'zang Lü"
      type           = militia
      model          = 3
      strength       = 20
    }
  }
}
