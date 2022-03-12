##############################
# Country definition for MAN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MAN
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  belligerence       = 5
  capital            = 1208 # Changchun
  dissent            = 15
  manpower           = 800
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 200
  supplies       = 100
  money          = 10
  transports     = 100
  free = {
    energy         = 14
    metal          = 7
    rare_materials = 4
  }

  diplomacy = {
    relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = -200 }
    relation = { tag = U67 value = -200 }
    relation = { tag = GER value = 100 }
    relation = { tag = JAP value = -100 }
    relation = { tag = SIA value = 75 }
    relation = { tag = USA value = -50 }
  }
  SpyInfo                = { country = "MAN" NumberOfSpies = 5 }

  nationalprovinces      = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 }
  ownedprovinces         = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1219 1220 1216 1235 1236 1237 }
  controlledprovinces    = { 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1219 1220 1216 1235 1236 1237 }
  claimedprovinces       = { 1333 1261 1303 1339 1323 1321 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1258 1262 1257 1296 1292 1293 1297 1298 1305 1306 1291 1313 1307 1308 1356 1349 1335 1314 1315 1267 1320 1299 1343 1300 1301 1350 1351 1352 1389 1390 1384 1385 1386 1387 1388 1378 1365 1376 1377 1375 510 1380 1381 1382 1383 1369 1370 1373 1379 1367 1374 1368 1241 1247 1246 1251 1242 1254 1331 1332 1252 1253 1248 1249 1250 1327 1243 1244 1245 1328 1329 1330 1202 1204 1212 1205 1199 1203 1200 1206 1213 1237 1207 1220 1218 2750 1236 1201 1208 1209 1210 1211 1214 1215 1216 1235 1217 1197 1198 1269 1268 1271 1264 1263 1272 1265 1266 1283 1284 1285 1294 1290 1286 1287 1288 1289 1295 1273 1279 1280 1281 1277 1274 1275 1282 1278 1276 1259 1260 1255 1256 1219 1371 1372 1361 1362 1363 1364 }
  
  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 2620 2010 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 5600 3810 1830 1840 5810 5820 5800 5080 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1850 1860 1870 1396 1560 1570 1580 1590 1600 1350 1360 1370 1380 1390 1980 199130 199100 1990 2630 2640 2646 2650 2300 2310 2900 2910 2920 2930 2940 2320 2330 2220 2800 2450 21180 21190 21200 2460 2470 2400 2410 2420 2810 2820 2510 2520 2870 2880 2020 2150 2160 3110 3120 3130 3140 3150 3410 3420 3430 3440 3450 3456 3460 3310 3320 3330 3210 3220 3230 3240 3250 3260 12100 12110 12120 12130 3890 3720 3730 3736 3740 3750 3010 3020 3030 3040 3050 3060 3610 3620 3900 12190 3820 3830 3840 4540 4550 4010 4020 4300 4310 4320 4330 4340 4600 4610 4620 4630 4120 4130 4700 4710 4190 4800 4810 4400 4030 4040 4050 4740 4750 4760 4290 5050 5830 5060 5070 5090 5310 54010 54020 5316 5326 5327 5350 5710 5010 5020 5030 54030 5410 5470 5190 5200 5960 5980 6900 8900 81300 8910 81310 8920 81320 8500 8010 8020 8510 82500 82510 82520 82300 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 2
    defense_lobby     = 8
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 235001 } # Pu-Yi
  headofgovernment       = { type = 9 id = 235014 } # Wei Cheng-chen
  foreignminister        = { type = 9 id = 235003 } # Chang Ching-hui
  armamentminister       = { type = 9 id = 235004 } # Li Shao-keng
  ministerofsecurity     = { type = 9 id = 235005 } # Chin Chu-han
  ministerofintelligence = { type = 9 id = 235006 } # Kawashima Yoshiko
  chiefofstaff           = { type = 9 id = 235007 } # Chi Hsing
  chiefofarmy            = { type = 9 id = 235008 } # Chi Hsing
  chiefofnavy            = { type = 9 id = 235009 } # Sergei Ramilcheff
  chiefofair             = { type = 9 id = 235010 } # Yokoyama Masayuki

  landunit = {
    id       = { type = 28500 id = 1 }
    name     = "Di'1 Fang'tien Jüntuan"
    location = 1237
    division = {
      id             = { type = 28500 id = 2 }
      name           = "7 Man'chu Lü"
      type           = militia
      model          = 5
      strength       = 90
    }
  }
  landunit = {
    id       = { type = 28500 id = 8 }
    name     = "Di'2 Ji'lin Jüntuan"
    location = 1214
    division = {
      id             = { type = 28500 id = 9 }
      name           = "8 Man'chu Lü"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 28500 id = 13 }
      name           = "2 Man'chu Qi'Bing"
      type           = cavalry
      model          = 10
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 28500 id = 16 }
    name     = "Di'3 Qiqihar Jüntuan"
    location = 1206
    division = {
      id             = { type = 28500 id = 17 }
      name           = "9 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 28500 id = 23 }
    name     = "Di'4 Harbin Jüntuan"
    location = 1199
    division = {
      id             = { type = 28500 id = 24 }
      name           = "10 Man'chu Lü"
      type           = militia
      model          = 5
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 28500 id = 33 }
    name     = "Di'5 Chengde Jüntuan"
    location = 1202
    division = {
      id             = { type = 28500 id = 34 }
      name           = "12 Man'chu Lü"
      type           = militia
      model          = 4
      strength       = 45
    }
  }
  landunit = {
    id       = { type = 13016 id = 1 }
    name     = "Manchukuo Hakengun"
    location = 1199
    division = {
      id             = { type = 13016 id = 2 }
      name           = "Manchukuo Hakengun shireibu"
      type           = hq
      model          = 4
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 16 }
    name     = "Kantôgun"
    location = 1208
    division = {
      id             = { type = 13016 id = 17 }
      name           = "Kantôgun saikô shireibu"
      type           = hq
      model          = 3
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 18 }
      name           = "Dai 10 'Himeji' Hoheishidan"
      type           = infantry
      model          = 11
      extra          = anti_air
      brigade_model  = 1
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1478 }
      name           = "Dai 24 Hoheishidan"
      type           = infantry
      model          = 11
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 19 }
      name           = "Dai 28 Hoheishidan"
      type           = infantry
      model          = 11
      extra          = anti_air
      brigade_model  = 1
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 20 }
      name           = "Kantô Bôbitai"
      type           = garrison
      model          = 6
      extra          = police
      brigade_model  = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 13016 id = 21 }
    name     = "Dai 3 Gun"
    location = 1201
    division = {
      id             = { type = 13016 id = 22 }
      name           = "Dai 9 'Kanazawa' Hoheishidan"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 23 }
      name           = "Dai 12 'Kurume' Hoheishidan"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1071 }
      name           = "Dai 57 Hoheishidan"
      type           = infantry
      model          = 11
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 28 }
    name     = "Dai 5 Gun"
    location = 1202
    division = {
      id             = { type = 13016 id = 31 }
      name           = "Dai 3 Manchuko Kiheishidan"
      type           = cavalry
      model          = 10
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 1073 }
      name           = "Dai 11 Hoheishidan"
      type           = infantry
      model          = 11
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 13016 id = 32 }
    name     = "Dai 6 Gun"
    location = 1205
    division = {
      id             = { type = 13016 id = 34 }
      name           = "Dai 23 Hoheishidan"
      type           = infantry
      model          = 11
      extra          = police
      brigade_model  = 1
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 13016 id = 35 }
    name     = "Dai 20 Gun"
    location = 1204
    division = {
      id             = { type = 13016 id = 36 }
      name           = "Dai 8 'Hirosaki' Hoheishidan"
      type           = infantry
      model          = 12
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
    division = {
      id             = { type = 13016 id = 37 }
      name           = "Dai 25 Hoheishidan"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
  }
}
