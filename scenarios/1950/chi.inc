##############################
# Country definition for CHI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  name               = CHI49
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 MOB4 = 1 MOB5 = 1 MOB6 = 1 MOB7 = 1 } }
  belligerence       = 20
  capital            = 1362 # Taipei
  dissent            = 20
  manpower           = 1050
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 0
  transports     = 50

  diplomacy = {
    relation = { tag = CHI value = -150 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 2 }

  nationalprovinces      = { 1120 1121 1122 1123 1124 1125 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1384 1385 1386 1387 1388 1389 1390 1414 1458 1455 1119 }
  ownedprovinces         = { 1361 1362 1363 1364 1365 }
  controlledprovinces    = { 1361 1362 1363 1364 1365 }

  techapps               = { 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 27000 27010 27070 27140 27210 27410 27460 27470 9010 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 4300 4310 4320 4330 4340 4040 4070 4100 4350 15030 4050 4080 4110 4116 15060 4890 4600 4400 4170 4280 4450 4180 15120 4610 4620 4630 4120 4130 4140 4150 4160 15100 4800 4810 4820 4220 4230 4240 4246 4700 4710 4190 4200 4210 15140 4290 4250 4260 4270 15180 4740 4750 4760 4770 4780 4790 4850 4860 4440 4460 4900 4910 4920 4930 4940 4950 4960 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2170 2180 2850 2190 2100 2110 2120 2126 2130 2860 2870 2880 2020 2150 2160 2890 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2220 2230 2240 2250 2400 2410 2420 2430 2970 2370 2380 2390 2800 2450 21180 21190 21200 2460 2470 2480 2490 2500 2810 2820 2510 2520 2530 2540 22910 22920 22930 22940 2980 2260 2270 2280 21070 5700 5710 5010 5020 5030 5040 5810 5820 5050 5830 5060 5070 5130 5110 5140 5150 5160 5170 5180 5800 5080 5090 5100 53040 5560 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 53060 5760 5410 5416 5417 5420 5426 5430 5440 5466 5450 5190 5200 5210 5220 5230 5240 53020 53190 5470 5480 5490 5500 5510 5520 5530 5540 5600 5610 5620 5630 5640 5650 5660 14000 14010 14020 14030 14040 5920 5930 5940 5950 5960 5970 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 13390 13400 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1430 1470 1480 1490 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199120 199130 199140 199150 6500 6510 6530 6580 6610 6680 6620 6630 6640 6710 6650 6660 6670 6540 6910 6900 6010 6020 6040 6050 6060 6070 6080 6100 6090 14050 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8900 8910 8920 8930 8940 8950 8960 8970 8980 81050 81060 81650 81850 81860 81870 81880 81890 81900 81910 81700 81710 81720 81730 81740 81750 81760 82100 82110 82300 82310 82320 82330 7990 82500 82510 82520 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 3170 12190 12200 3210 3220 3230 3240 3250 3260 12020 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3490 12050 3510 3520 3530 3540 3550 12060 3560 12100 12110 12120 12130 12140 12150 12160 3610 3620 3630 3640 3650 3660 3670 3680 3710 3810 3820 3830 3840 3900 3910 3920 3930 3890 3960 3720 3730 3736 3740 3750 3760 3770 3780 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7140 7150 16000 7810 7620 7630 9000 30000 30020 30030 30040 30070 }
  inventions             = { 3000011 3000012 3000015 3000018 3000019 3000020 3000024 3000026 3000027 3000028 3000031 3000041 3000045 3000046 3000047 3000049 3000052 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 7
    defense_lobby     = 7
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 55001 } # Chiang Kai-shek
  headofgovernment       = { type = 9 id = 55103 } # Chen Cheng
  foreignminister        = { type = 9 id = 55048 } # Wang Shijie
  armamentminister       = { type = 9 id = 55057 } # Jiang Jingguo
  ministerofsecurity     = { type = 9 id = 55058 } # Jiang Jingguo
  ministerofintelligence = { type = 9 id = 55080 } # Yang Xuancheng
  chiefofstaff           = { type = 9 id = 55256 } # Bai Chongxi
  chiefofarmy            = { type = 9 id = 55088 } # Xu Tingyao
  chiefofnavy            = { type = 9 id = 55100 } # Gui Yongqing
  chiefofair             = { type = 9 id = 55260 } # Wang Shuming
  dormant_leaders        = { 55012 55303 55338 55370 55377 55003 55029 55018 55020 }
  dormant_ministers      = { 55003 55029 55049 55018 55021 55001 55012 55026 55014 55020 55028 55030 55045 55046 55047 55059 55060 55061 55062 55070 55071 55078 55084 55091 55096 }
  dormant_teams          = { 55005 }

  landunit = {
    id       = { type = 11616 id = 1 }
    name     = "2. Lujun"
    location = 1362
    division = {
      id             = { type = 11616 id = 2 }
      name           = "30. Jun"
      type           = infantry
      model          = 13
      organisation   = 3
      experience     = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11616 id = 3 }
      name           = "42. Jun"
      type           = infantry
      model          = 13
      strength       = 81
      organisation   = 3
      experience     = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11616 id = 4 }
      name           = "58. Jun"
      type           = infantry
      model          = 13
      organisation   = 3
      experience     = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11616 id = 12 }
    name     = "4. Lujun"
    location = 1361
    division = {
      id             = { type = 11616 id = 13 }
      name           = "38. Jun"
      type           = infantry
      model          = 13
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 14 }
      name           = "47. Jun"
      type           = infantry
      model          = 13
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 15 }
      name           = "96. Jun"
      type           = infantry
      model          = 13
      strength       = 86
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 17 }
      name           = "3. Jun"
      type           = infantry
      model          = 13
      strength       = 76
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 11616 id = 20 }
    name     = "6. Lujun"
    location = 1363
    division = {
      id             = { type = 11616 id = 21 }
      name           = "19. Jun"
      type           = infantry
      model          = 13
      organisation   = 3
      experience     = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11616 id = 23 }
      name           = "1 Qui-Jun"
      type           = motorized
      model          = 4
      strength       = 80
      organisation   = 3
      experience     = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11616 id = 103 }
      name           = "2 Qui-Jun"
      type           = motorized
      model          = 4
      organisation   = 3
      experience     = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11616 id = 24 }
    name     = "7. Lujun"
    location = 1364
    division = {
      id             = { type = 11616 id = 25 }
      name           = "Xin 1. Jun"
      type           = armor
      model          = 4
      strength       = 55
    }
    division = {
      id             = { type = 11616 id = 26 }
      name           = "Xin 2. Jun"
      type           = armor
      model          = 4
    }
  }
  landunit = {
    id       = { type = 11616 id = 45 }
    name     = "9. Lujun"
    location = 1365
    division = {
      id             = { type = 11616 id = 46 }
      name           = "4. Jun"
      type           = infantry
      model          = 13
      strength       = 50
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 47 }
      name           = "32. Jun"
      type           = infantry
      model          = 13
      strength       = 49
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 50 }
      name           = "62. Jun"
      type           = infantry
      model          = 13
      strength       = 94
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 51 }
      name           = "63. Jun"
      type           = infantry
      model          = 13
      strength       = 86
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 52 }
      name           = "64. Jun"
      type           = infantry
      model          = 13
      strength       = 82
      experience     = 15
    }
  }

  airunit = { 
    id       = { type = 11616 id = 127 }
    name     = "Xinjiang Kongjun"
    location = 1362
    base     = 1362
    division = {
      id             = { type = 11616 id = 128 }
      name           = "Zhandouji Zhongdui"
      type           = interceptor
      model          = 12
      strength       = 20
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 11616 id = 114 }
    name     = "Zhongguo Kongjun"
    location = 1362
    base     = 1362
    division = {
      id             = { type = 11616 id = 115 }
      name           = "1. Zhandouji"
      type           = interceptor
      model          = 12
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 116 }
      name           = "1. Hongzhaji"
      type           = tactical_bomber
      model          = 9
      strength       = 50
      experience     = 15
    }
    division = {
      id             = { type = 11616 id = 117 }
      name           = "1. Kongyunji"
      type           = transport_plane
      model          = 4
      strength       = 30
      experience     = 15
    }
  }
}
