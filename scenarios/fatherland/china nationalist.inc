##############################
# Country definition for CHI #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  name               = "Republic of China"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1337 # Nanjing
  dissent            = 10
  manpower           = 3670
  wartime_ic_mod         = 0.8
  industrial_modifier    = 0.8
  # Resource Reserves
  energy         = 2500
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100
  escorts        = 2

  diplomacy = {
    relation = { tag = CHC value = -150 }
    relation = { tag = ENG value = 100 }
    relation = { tag = ITA value = 25 }
    relation = { tag = JAP value = -100 }
    relation = { tag = SIK value = -125 }
    relation = { tag = USA value = 100 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }

  nationalprovinces      = { 1120 1121 1122 1123 1124 1125 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1384 1385 1386 1387 1388 1389 1390 1458 1455 1119 }
  ownedprovinces         = { 1120 1121 1122 1123 1124 1125 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1384 1385 1386 1387 1388 1389 1390 1119 }
  controlledprovinces    = { 1120 1121 1122 1123 1124 1125 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1384 1385 1386 1387 1388 1389 1390 1119 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1396 13060 13070 13080 1310 1320 1330 1340 1350 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 7600 7610 2620 2010 2630 2640 2646 2650 3110 3120 3130 3140 3210 3220 3230 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 5810 5080 5800 5700 5710 5010 5310 5316 8010 8020 8040 8050 8060 8070 8080 1910 1920 1930 1940 1950 1960 4300 4310 4320 4800 4810 4700 4710 1830 1840 3010 3020 3810 3820 5600 14000 14010 14020 14030 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6570 6300 6310 6320 5980 3720 3410 3420 3430 3440 1360 5820 1970 1110 1120 1850 1860 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 9
    professional_army = 6
    defense_lobby     = 10
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 55001 } # Chiang Kai-shek
  headofgovernment       = { type = 9 id = 55324 } # Chiang Kai-shek
  foreignminister        = { type = 9 id = 55023 } # Huang Bingheng
  armamentminister       = { type = 9 id = 55036 } # Zhou Zhirou
  ministerofsecurity     = { type = 9 id = 55053 } # Zhang Jiaao
  ministerofintelligence = { type = 9 id = 55065 } # Dai Chunfeng
  chiefofstaff           = { type = 9 id = 55074 } # Xu Encheng
  chiefofarmy            = { type = 9 id = 55081 } # Yang Xuancheng
  chiefofnavy            = { type = 9 id = 55086 } # Xu Zuyi
  chiefofair             = { type = 9 id = 55093 } # Sa Shijun
  dormant_leaders        = { 55012 55303 55338 55370 55377 55003 55029 55018 55020 }
  dormant_teams          = { 55005 }

  landunit = {
    id       = { type = 22000 id = 1 }
    name     = "1. Juntuan"
    location = 1299
    division = {
      id             = { type = 22000 id = 2 }
      name           = "1. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 3 }
      name           = "2. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 4 }
    name     = "3. Juntuan"
    location = 1199
    division = {
      id             = { type = 22000 id = 5 }
      name           = "4. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 6 }
      name           = "5. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 7 }
    name     = "10. Juntuan"
    location = 1253
    division = {
      id             = { type = 22000 id = 8 }
      name           = "6. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 9 }
      name           = "7. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 14 }
    name     = "5. Juntuan"
    location = 1256
    division = {
      id             = { type = 22000 id = 15 }
      name           = "1. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 16 }
      name           = "2. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 17 }
      name           = "3. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 23 }
    name     = "7. Juntuan"
    location = 1324
    division = {
      id             = { type = 22000 id = 24 }
      name           = "Xin 11. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 25 }
      name           = "7. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 26 }
      name           = "12. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 70 }
    name     = "8. Juntuan"
    location = 1271
    division = {
      id             = { type = 22000 id = 71 }
      name           = "8. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 72 }
      name           = "14. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 73 }
      name           = "9. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 22000 id = 74 }
    name     = "9. Juntuan"
    location = 1208
    division = {
      id             = { type = 22000 id = 75 }
      name           = "11. Bubing Shi"
      type           = infantry
      model          = 8
      extra          = armored_car
      brigade_model  = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 76 }
      name           = "12. Bubing Shi"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 10
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 77 }
      name           = "1. KMT Manchuria HQ"
      type           = hq
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 78 }
    name     = "12. Juntuan"
    location = 1205
    division = {
      id             = { type = 22000 id = 79 }
      name           = "11. Bubing Shi"
      type           = infantry
      model          = 8
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 80 }
      name           = "11. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 81 }
      name           = "12. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 90 }
    name     = "Shanghai Garrison"
    location = 1338
    division = {
      id             = { type = 22000 id = 91 }
      name           = "13. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 92 }
      name           = "17. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 93 }
      name           = "15. Bubing Lu"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 94 }
      name           = "16. Jun"
      type           = garrison
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 95 }
    name     = "Inner Mongolian Corps"
    location = 1269
    division = {
      id             = { type = 22000 id = 96 }
      name           = "20. Bubing Lu"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 22000 id = 97 }
      name           = "21. Bubing Lu"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 98 }
    name     = "2. Inner Mongolian Corps"
    location = 1270
    division = {
      id             = { type = 22000 id = 99 }
      name           = "22. Bubing Lu"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 100 }
    name     = "1. Manchurian Corps"
    location = 1235
    division = {
      id             = { type = 22000 id = 101 }
      name           = "23. Bubing Lu"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 22000 id = 102 }
    name     = "2. Manchurian Corps"
    location = 1245
    division = {
      id             = { type = 22000 id = 103 }
      name           = "24. Bubing Lu"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }

  navalunit = {
    id       = { type = 22000 id = 400 }
    name     = "ROC Navy"
    location = 1338
    base     = 1338
    division = {
      id             = { type = 22000 id = 401 }
      name           = "'Kee Lung'"
      type           = destroyer
      model          = 6
    }
    division = {
      id             = { type = 22000 id = 402 }
      name           = "'Cheng Kung'"
      type           = destroyer
      model          = 6
    }
    division = {
      id             = { type = 22000 id = 403 }
      name           = "'Hai Lung'"
      type           = submarine
      model          = 5
    }
  }

  airunit = { 
    id       = { type = 22000 id = 300 }
    name     = "The Flying Tigers"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 301 }
      name           = "The Flying Tigers"
      type           = interceptor
      model          = 6
    }
  }
  airunit = { 
    id       = { type = 22000 id = 302 }
    name     = "Zhongguo Kongjun"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 303 }
      name           = "1. Zhandouji"
      type           = interceptor
      model          = 5
    }
    division = {
      id             = { type = 22000 id = 304 }
      name           = "1. Hongzhaji"
      type           = tactical_bomber
      model          = 4
    }
    division = {
      id             = { type = 22000 id = 305 }
      name           = "1. Kongyunji"
      type           = transport_plane
      model          = 4
    }
  }
  airunit = { 
    id       = { type = 22000 id = 306 }
    name     = "Zhongguo Kongjun"
    location = 1297
    base     = 1297
    division = {
      id             = { type = 22000 id = 307 }
      name           = "Zhandouji Zhongdui"
      type           = interceptor
      model          = 5
    }
  }
}
